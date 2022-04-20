#include <iostream>

using namespace std;
// Find max sum subarray of fixed size k
// example input : [4,2,1,7,8,1,2,8,1,0] and k =3

int maxSumSubaaray(int a[], int n, int k)
{   int i;
    int maxValue = INT_MIN;
    int currentRunningSum = 0;

    for ( i = 0; i < n; i++)
       { currentRunningSum += a[i];
        if( i >= k-1 ){
            if(maxValue < currentRunningSum)
                maxValue = currentRunningSum;
            currentRunningSum = currentRunningSum - a[i - k +1 ]   ; 
        }
       }
        return maxValue;
}

int main()
{
    int arr[10] = {4, 2, 1, 7, 8, 1, 2, 8, 1, 0};
    cout << maxSumSubaaray(arr,10,3) << "   ";

    return 0;
}
