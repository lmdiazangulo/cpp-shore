# Compiler options
target   = debug
compiler = gnu
out = figures

# =============================================================================
ifeq ($(compiler),gnu)
	CC = gcc 
	CXX = g++
	CCFLAGS +=
	CXXFLAGS += -std=c++0x -static -pthread -fopenmp
endif # endif choosing the GNU compiler.

ifeq ($(target),debug)
	CXXFLAGS +=-O0 -g3 -Wall -Wno-write-strings 
	# Other options: -Wconversion -fprofile-arcs -ftest-coverage
	DEFINES +=_DEBUG
endif
ifeq ($(target),release)
   	CXXFLAGS +=-O2 
endif

# =============================================================================
SRCS_CXX = main.cpp Circle.cpp Figure.cpp

OBJS_CXX := $(addprefix $(OBJ_DIR), $(SRCS_CXX:.cpp=.o))

.PHONY: default clean clobber print

all: default

default: print $(out) 
	@echo "======================================================="
	@echo "           $(out) compilation finished             "
	@echo "======================================================="
		
clean:
	rm -rf *.err *.o *.d $(OBJ_DIR)

clobber: clean
	rm -rf $(LIB_DIR)

%.o: %.cpp
	@dirname $@ | xargs mkdir -p
	@echo "Compiling:" $@
	$(CXX) $(CXXFLAGS) $(addprefix -D, $(DEFINES)) $(addprefix -I,$(INCLUDES)) -c -o $@ $<
		
$(out): $(OBJS_CXX)
	@echo "Linking:" $@
	${CXX} $^ -o $(out) $(CXXFLAGS) \
	 $(addprefix -D, $(DEFINES)) \
	 $(addprefix -I, $(SOURCE_DIR)) $(addprefix -I, ${INCLUDES}) \
	 $(addprefix -L, ${LIBRARIES}) $(addprefix -l, ${LIBS})

print:
	@echo "======================================================="
	@echo "         ----- Compiling $(out) ------                 "
	@echo "Target:           " $(target)
	@echo "Compiler:         " $(compiler)
	@echo "C++ Compiler:     " `which $(CXX)`
	@echo "C++ Flags:        " $(CXXFLAGS)
	@echo "Defines:          " $(DEFINES)
	@echo "======================================================="