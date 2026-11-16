#include <bits/stdc++.h>
using namespace std;
int main(){
    int k[2][3], i, j,sum=0;
    cout<< "Enter the elements of the 2D array (2 rows and 3 columns):" << endl;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            cin >> k[i][j];
        }
    }
    cout << "The sum of the first row is:" << endl;
    for(j=0; j<3; j++){
        sum += k[0][j];
    }
    cout << sum << endl;
    cout << "The sum of the second row is:" << endl;
    sum = 0;
    for(j=0; j<3; j++){
        sum += k[1][j];
    }
    cout << sum << endl;
    return 0;
}