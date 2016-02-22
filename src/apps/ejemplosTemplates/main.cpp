
#include <iostream>
#include "myFunc.h"
#include "MyArray.h"
using namespace std;

int main (){
    int b = 2;
    cout<<op_sum(b,b)<<endl;
    float a = 2.2;
    cout<<op_sum(a,a)<<endl;
    
    cout<<op_sumT(a,a)<<endl;
    cout<<op_sumT<float>(a,a)<<endl;
    cout<<op_sumT<int>(a,a)<<endl;
    
    double ad = 2.8;
    cout<<op_sumT(ad,ad)<<endl;
    
    Numero numero;
    op_sumT(numero,numero);
//Uso de MyArray:
    MyArray<double, 3> myArrayPeta;


}
