#ifndef __COMPLEXOS_H_
#define __COMPLEXOS_H_

class Complexo {
    public:
        Complexo (float r, float i) : r(r), i(i) {};
        void somaComplexa(Complexo a, Complexo b);
        void subComplexa(Complexo a, Complexo b);
        void multComplexa(Complexo a, Complexo b);
        void divComplexa(Complexo a, Complexo b);
        void readComplexa();
        void printComplexa();
        
    private:
        float r;
        float i;
};




#endif