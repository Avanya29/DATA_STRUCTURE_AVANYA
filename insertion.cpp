#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array:";
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements of array: ";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the element to be inserted: ";
    cin>>k;
   
    int x;
    cout<<"Enter the index of inserted element: ";
    cin>>x;

    for(int i=n;i>=x;i--){
        arr[i]=arr[i-1];
        
    }
    arr[x]=k;
        n++;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}