#include <iostream>

using namespace std;
const int Nmax = 100007;
bool isPrime[Nmax];

void sieveOfEt(int n){
    for(int i =2; i<= n; i++)
        isPrime[i] = true;
    for ( int i=2;i<=n/2;i++){
        if(isPrime[i] == true)
            for(int j=i*2;j<=n;j = j+i)
                isPrime[j] = false;
    }
}





int main()
{
    sieveOfEt(2);
    for (int i=2;i <= 100;i++){
            if(isPrime[i] == true)
                cout << i << " ";
    }
    return 0;
}
