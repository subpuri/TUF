#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2][3];
    for (int i = 0; i <2; i++){
        for (int j =0; j<3; j++){
            cin >>a[i][j];
        }
        }
    for (int i = 0; i <2; i++){
        for (int j =0; j<3; j++){
            cout << a[i][j] <<" ";
        }
        cout <<endl;
    }
    int T[3][2];
    for (int i =0; i<2; i++){
        for (int j = 0; j < 3; j++){
            T[j][i] = a[i][j];
        }
    }
    for (int i = 0; i <3; i++){
        for (int j =0; j<2; j++){
            cout << T[i][j] <<" ";
        }
        cout <<endl;
    }
    
    return 0;
}