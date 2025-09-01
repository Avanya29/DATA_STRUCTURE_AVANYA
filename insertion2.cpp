#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elemnt to be inserted:"<<endl;
    int k;
    cin>>k;//element to be inserted
    int x;
    cin>>x;//index at which element will be inserted

    //for sorting of an array
    for(int i=0;i<n;i++){
        
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    //inserting an element
    for(int i=n;i>k;i++){
        arr[i]=arr[i-1];
    }
    arr[x]=k;
    n++;

    //printing of an array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}