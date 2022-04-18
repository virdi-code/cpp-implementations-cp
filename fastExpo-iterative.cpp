#include <iostream>

using namespace std;

int fastExpo(int a, long long n, int MOD){
    ///  (a^n) % MOD
    int ans = 1;
    while(n>0){
        if(n % 2 == 0)
        {
            a = (1LL * a * a) % MOD;
            n = n/2;
        }
        else {
            n--;
            ans = (1LL * ans *a) %MOD;
        }
    }
    return ans;
}



int main()
{
    cout << fastExpo(2,9, 100007);
    return 0;
}
