#include <complex>
using namespace std;

int op_sum_int (const int val1, const int val2){
    return val1 + val2;
}

float op_sum_float (const float val1, const float val2){
    return val1 + val2;
}

complex<float> op_sum_complex (const complex<float> val1, const complex<float> val2){
    return val1 + val2;
}

//Overload
int op_sum (const int val1, const int val2){
    return val1 + val2;
}

float op_sum (const float val1, const float val2){
    return val1 + val2;
}

double op_sum (const double val1, const double val2){
    return val1 + val2;
}

complex<float> op_sum (const complex<float> val1, const complex<float> val2){
    return val1 + val2;
}

//Templates:
template <class T> 
T op_sumT (const T val1, const T val2){
    return val1 + val2;
}

class Numero {
public:
    Numero operator + (const Numero rhs) const{
        Numero res;
        return res;
    }
};

//Especializacion de templates:
template double op_sumT (const double , const double);




