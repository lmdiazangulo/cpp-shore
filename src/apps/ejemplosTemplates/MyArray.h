
using namespace std;

template < class T, unsigned int D > 
class MyArray {
public:
//Constructores:
    MyArray (){
        for (unsigned int n=0; n<D; ++n){
            val_[n]=0.0;
        }
    }
    MyArray (const T val){
        for (unsigned int n=0; n<D; ++n){
            val_[n]=val;
        }
    }
//Operadores 
// operador acceso:
    T operator [] (const unsigned int n){
        return val_[n]
    }
// Deberes: 
    //Operador +
    //Operador -
    //Operador * (como dot)
    //Metodos sumaDeElementos, media, .....

private:
    T val_ [D];
};
