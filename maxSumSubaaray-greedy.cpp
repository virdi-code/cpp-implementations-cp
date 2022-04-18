#include <iostream>

using namespace std;

long long maxSumSubarray( int a[], int n){
    long long sum = 0 , ans = a[1];
    for(int i =1;i<n;i++){
        sum = sum + a[i];
        if(sum > ans )
            ans = sum;
        if(sum < 0)
            sum = 0;
    }
    return ans;
}


int main()
{
    int a[]= {5,-6,3,4,-2,3,-3,19};
    int n = 8;
    cout << maxSumSubarray(a,n);
    return 0;
}
