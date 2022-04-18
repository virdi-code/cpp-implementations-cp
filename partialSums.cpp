#include <iostream>

using namespace std;

const int Nmax = 100007;
int s[Nmax];

void buildPartialSums(int a[],int m){
    s[0]=a[0];
    for(int i=1;i<m;i++){
        s[i] = s[i-1] + a[i];
    }
}
long long query(int x,int y){
    return s[y] -s[x-1];
}


int main()
{   
    int a[]= {5,-6,3,4,-2,3,-3,19};
    int n = 8;
    buildPartialSums(a,n);
    cout << a[3];
    return 0;
}
