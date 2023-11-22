#include <iostream>
#include "Complexos.h"


int main (){
    Complexo A(0,0), B(0,0), C(0,0);
    A.readComplexa();
    A.printComplexa();

    B.readComplexa();
    B.printComplexa();

    C.somaComplexa(A, B);
    C.printComplexa();

    C.subComplexa(A, B);
    C.printComplexa();

    C.multComplexa(A, B);
    C.printComplexa();
    
    C.divComplexa(A, B);
    C.printComplexa();

    return 0;
}