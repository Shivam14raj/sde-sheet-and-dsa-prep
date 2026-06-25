#include<iostream>
using namespace std;

int main(){

int mat[3][3];
int r = 3, c = 3;  

// take input 
for(int i = 0; i < 3; i++){
     for(int j = 0; j < 3; j++){
        cin >> mat[i][j]; 
     }
} 

// printing 
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << mat[i][j] << " ";
    }
    cout << endl; 
}


return 0; 
}