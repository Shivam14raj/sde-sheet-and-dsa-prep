#include<iostream>
using namespace std;

// 2nd largest element in an array without sorting 

int main(){

int arr[5]= {10,20,6,3,1}; 

int first = arr[0]; 
int second = 0; 

for(int i = 0; i < 5; i++){
   
    if(arr[i] < first && arr[i] <= second){
        continue;
    } 

    if(arr[i] > first){
        second = first; 
        first = arr[i];
    } 

    if(arr[i] < first && arr[i] > second){
        second = arr[i];
    }
 
} 

cout << second; 

return 0; 
}