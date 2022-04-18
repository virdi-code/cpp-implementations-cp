/// update in form of (x,y,val) => add val to pos x to y. 

#include <iostream>

using namespace std;

const int Nmax = 100007;
int s[Nmax],a[Nmax],b[Nmax];

void update(int x,int y,int val){
    b[x]= b[x]+ val;
    b[y+1] = b[y] - val;

}

void buildFinalArray(){
    int i;
    s[0]=b[0];
    a[0]=a[0]+s[0];
    for(i=1;i<n;i++){
        s[i] = s[i-1]+b[i];
        a[i] = a[i]+ s[i];
    }
}

int main()
{   
    int a[]= {5,-6,3,4,-2,3,-3,19};
    int n = 8;
    
    /// update 


    /// build final array



    cout << a[3];
    return 0;
}
