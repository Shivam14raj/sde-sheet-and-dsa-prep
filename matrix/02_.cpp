#include<iostream>
using namespace std;

int main(){

// int mat[i][j]; (row, col) 
int mat[3][3];
int r = 3, c = 3;  

// take input 
for(int i = 0; i < 3; i++){
     for(int j = 0; j < 3; j++){
        cin >> mat[i][j]; 
     }
} 

cout << "row  wise printing "; 
cout << endl; 

// printing row wise 
for(int i = 0; i < 3; i++){ // fixing row here 
    for(int j = 0; j < 3; j++){  // printing column
        cout << mat[i][j] << " ";
    }
    cout << endl; 
}  

cout << "column wise printing "; 
cout << endl; 
// printing column wise 
for(int i = 0; i < 3; i++){   
    for(int j = 0; j < 3; j++){ 
        // i and j are nothing here but below code will make sure it is column wise
        cout << mat[j][i] << " ";
    } 
    cout << endl; 
}

// row sum 
int Rowsum = 0; 

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        Rowsum += mat[i][j]; 
    } 
    cout <<Rowsum;
    cout << endl;  
    Rowsum = 0; 
}  

// column sum 
int colSum = 0;
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        colSum += mat[j][i]; 
    }
    cout << colSum; 
    cout << endl; 
    colSum = 0;
}

// diagonal sum 
int diaSum = 0; 
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
          if(i == j){
              diaSum += mat[j][i];
          }
    }
} 
cout << "diagonal sum is: " << diaSum; 



return 0; 
}