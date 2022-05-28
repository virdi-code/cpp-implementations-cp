#include <bits/stdc++.h>
#include<iostream>
using namespace std;


template <class T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template <class T>

    Arithmetic<T>::Arithmetic(T a, T b){
        this->a = a;
        this->b = b;
    };
template <class T>
T Arithmetic<T>:: add(){
    T c;
    c = a+b; 
    return c;
};
template <class T>
T Arithmetic<T>:: sub(){
    T c;
    c = a-b;
    return c;
};

int main(){
    Arithmetic <int> o(2,10);
    cout << o.add() << "\n";

    Arithmetic <float> f(1.2,1.5);
    cout << f.add();
}