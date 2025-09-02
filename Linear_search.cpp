#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array: "<<endl;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element of an array :"<<endl;
        cin>>arr[i];
    }

    cout<<"Enter the element to be found : "<<endl;
    int x;
    cin>>x;

    int flag =0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==x){
            flag=1;
            break;
        }
        
    }

    if(flag==1){
        cout<<"Element found";
    }
    else{
        cout<<"Not found";
    }
}