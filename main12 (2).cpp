#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int target){
  int start = 0;
  int end = size -1 ;
  
  int mid = (start+end)/2;
  
  while(start<=end){
    int element = arr[mid];
    
    if(element == target){
      return arr[mid];
    }
    if(target<element){
      end=mid-1;
    }
    else{
      start=mid+1;
    }
      mid= (start+end)/2;
 
  }
  return -1;
}

int main() {
 int arr[] = {2,4,6,8,10,12,14,16,18};
  int size = 10;
  int target= 6;

  int ans = binarysearch(arr, size, target);
    if(ans==-1){
      cout<<"not found";
    }
    else{
      cout<<"found"<<ans;
    }
  return 0;
}
  
