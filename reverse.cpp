#include<iostream>
using namespace std;

void reversedArray(int arr[],int n){
    int i=0;
    int j=n-1;
    //two pinter approach is basically the swaping
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element:"<<endl;
        cin>>arr[i];
    }

    cout<<"Original Array :"<<endl;
    printArray(arr,n);

    cout<<"Reversed Array :"<<endl;
    reversedArray(arr,n);
}