#include<iostream>
#include<cmath>
using namespace std;



int main(){
    int sum,l,h,tofind,mid;
    int A[]={6,8,13,17,20,25,28,30,35};
    l = 0; 
    h = 8;
    tofind = 35;
    while(l <=h){
        mid = l+h;
        mid = mid/2;
        if(tofind < A[mid])
            { 
                h = mid-1;
            }
        if(tofind > A[mid])
        {
            l =mid+1;
        }
        if(tofind == A[mid])
            {cout <<"found at " << mid;
            break;
            }
        
    }
    
    return 0;
}