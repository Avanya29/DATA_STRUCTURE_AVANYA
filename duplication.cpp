#include<iostream>
using namespace std;

int main(){
    // Program to find which element is repeated in the array and which is not
    int n;
    cout<<"enter the size of an array:"<<endl;
    cin>>n;
//input of array
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element :"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
                count++;
                break;
            }
            cout<<count<<endl;

        }
        
    }
    return 0;
}