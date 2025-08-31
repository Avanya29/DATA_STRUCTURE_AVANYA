#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of an array:";
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements of array:";
        cin>>arr[i];
    }
    //traversing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}