#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int l=0, h=size-1;
    while(l<=h){
      int mid= l + (h - l) / 2;
    
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        l=mid+1;
    }
    else if(arr[mid]>target){
        h=mid-1;
    }
    else{
        return -1;
    }
    }
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int size=8;
    int target=3;
    
    int result=binarySearch(arr,size,target);
    if(result!=-1){
        cout<<"Element found at index"<<result<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}
