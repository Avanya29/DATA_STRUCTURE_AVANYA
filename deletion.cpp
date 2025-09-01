#include<iostream>
using namespace std;

int main()
{
    int n;//size of an array
    cin>>n;

    int arr[n]; // taking input of an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k; //index at which element need to be deleted

    if(k<0 || k>n){
        cout<<"Invalid Response"<<endl;
    }
    else{
        for(int i=k;i<n-1;i++){
            arr[i]=arr[i+1];//shifting element towards left
        }
        n--;//size reduce
    }
    //printing an array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

}