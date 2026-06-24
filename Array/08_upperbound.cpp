#include<iostream>
using namespace std;
// upper bound : the first position in a sorted array where the element is strictly greater than a given value, (i.e. > target)
// element exist case  

int index(int arr[], int target, int size){
    int left = 0; 
    int right = size -1;  
    int ans = size; 
 

    while(left <= right){
      int mid = left + (right - left) /2;

      if(arr[mid] > target){
        ans = mid; 
        right = mid - 1; 
      }
      else{
        left = mid + 1; 
      }
       
    }  
    
    return ans;  
    
}


int main(){ 

int arr[12] = {1,2,3,3,4,4,4,4,5,6,7,8};
int size = 12;  

int target = 4;   // must be index 8 

int res = index(arr, target, size); 

cout << res; 

return 0; 
}