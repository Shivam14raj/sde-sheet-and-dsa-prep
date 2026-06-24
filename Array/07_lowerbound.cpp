#include<iostream>
using namespace std;
// lower bound : the first position in a sorted array where an element is not less than a given value 
// element equal ya jadya ho 
// it returns the index ..... lower_bound(x) returns the index of the first element ≥ x

// element exist case  


int index(int arr[], int target, int size){
    int left = 0; 
    int right = size -1;  
    int ans = size; 
 

    while(left <= right){
      int mid = left + (right - left) /2;
       if(arr[mid] == target){
         ans = mid;
         right = mid - 1;  
       } 
       else if(arr[mid] > target){
           right = mid - 1; 
       }
       // arr[mid] < right
       else{
          left = mid + 1; 
       }
    }  
    
    return ans;  
    
}


int main(){ 

int arr[9] = {1,2,3,3,4,4,4,4,5};
int size = 9;  

int target = 4;  

int res = index(arr, target, size); 

cout << res; 

return 0; 
}