#include<iostream>
#include<cmath>
using namespace std;

#define R1 4            // number of rows in Matrix-1
#define C1 4            // number of columns in Matrix-1
#define R2 4            // number of rows in Matrix-2
#define C2 4   

int main(){
    int i,j;
     int mat1[R1][C1] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
 
    int mat2[R2][C2] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
    int res[4][4];

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            {
                res[i][j] = mat1[i][0]*mat2[0][j];
                res[i][j] += mat1[i][1]*mat2[1][j];
                res[i][j] += mat1[i][2]*mat2[2][j];
                res[i][j] += mat1[i][3]*mat2[3][j];

            }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            cout << res[i][j] <<" ";
        cout << endl;
    }
    return 0;
}