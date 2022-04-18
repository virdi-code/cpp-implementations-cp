#include <iostream>

using namespace std;

int fastExpo(int a, long long n, int MOD){
    /// (a^n) % MOD
    if( n == 0)
        return 1;
    if(n % 2 == 0){
        return fastExpo((1LL * a * a)%MOD,n/2 , MOD);
    }
    return ( 1LL * a * fastExpo(a, n-1, MOD)) % MOD;
}



int main()
{
    cout << fastExpo(5,13, 100007);
    return 0;
}
