#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
     Rectangle (int l, int b){ // void initialization.   
        length = l;
        breadth = b;
    }
    int area(){
        return length*breadth;
    }
    void changeLength(int l){
        length = l;
    }



};

int main(){
    
    Rectangle r(10,5);
    cout << r.area();
    r.changeLength(12);
    
    return 0;


}