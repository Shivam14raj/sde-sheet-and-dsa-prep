#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
// remove duplicates from the sorted array 

int main(){
int arr[3] = {2,2,2}; 

int i = 0; 
int k = 0; 


while(i < 3){
   int j = i;  
   while(j < 3 && arr[i] == arr[j]){
      j++;
   } 

   // now   
   arr[k] = arr[i]; 
   k++; 

   i = j; 


}

for(int i = 0; i < k; i++){
    cout << arr[i];
} 


return 0; 
}