#include<iostream>
using namespace std;

int main(){
    int n;//size of array
    cin>>n;

    int arr[n-1];
    //taking input
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int total_sum= n*(n+1)/2;//sum of n numbers
    int array_sum=0;

    for(int i=0;i<n-1;i++){
        array_sum += arr[i];
    }
    int missing_num = total_sum- array_sum;
    cout<<"Missing number is :"<<missing_num<<endl;
}