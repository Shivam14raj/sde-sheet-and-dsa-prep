#include<iostream>
using namespace std;
// binary search  

int binarySearch(int arr[], int size, int target){
    int left = 0; 
    int right = size - 1;
    
    while(left <= right){
        // find mid in each 
        int mid = left + (right - left) / 2; 

        if(arr[mid] == target){
            return 1; 
        } 

        else if(arr[mid] > target){
            right = mid - 1;
        }else{
            left = mid + 1; 
        }

    } 

    return 0; 

} 

int main(){ 

int arr[5] = {1,2,3,4,5}; 
int size = 5; 
int target = 10; 
int res = binarySearch(arr, size, target);

cout << res; 

return 0; 
}