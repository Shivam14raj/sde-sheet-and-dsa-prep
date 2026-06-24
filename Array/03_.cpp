#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
 //  left rotate an array by one place 
int main(){ 

int arr[5] = {1,2,3,4,5}; 


// int firstelem = arr[0]; 
// int size =3; 

// for(int i = 0; i < size - 1; i++){
//    arr[i] = arr[i+1];
// }  

// arr[size - 1] = firstelem;

// for(int i = 0; i < size; i++){
//     cout << arr[i] << " ";
// }  


// right rotate by 1
// int size = 5;  

// int lastelem = arr[size - 1]; 

// for(int i = size - 1; i >= 0; i--){
//     arr[i] = arr[i - 1]; 
// }  

// arr[0] = lastelem; 

// for(int i = 0; i < size; i++){
//     cout<< arr[i] << " ";
// }    


// rotation by D places (left roatation)
// so k = 2 means 2 elements shifts in right 
int size = 5; 
int k = 2; 

k = k % size; 

// so k = 2 means do 1 time then do 2 times 

for(int i = 0; i < k; i++){

    int firstelem = arr[0]; 

    for(int i = 0; i < size - 1; i++){
        arr[i] = arr[i + 1];
    } 

    arr[size - 1] = firstelem;     
} 

for(int i = 0; i < size; i++){
    cout << arr[i] << " "; 
}  



return 0; 
}  