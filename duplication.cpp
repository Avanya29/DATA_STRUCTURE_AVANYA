//	Program to find which element is repeated in the array and which is not

#include<iostream>
using namespace std;

int main(){
 int arr[6]={1,2,3,3,1,};
 int n = 6; //size of array

for(int i=0;i<n;i++){
for(int j=n-1;j>i;j--){
 if(arr[i]==arr[j]){
    cout<<"Duplicate : "<<arr[i]<<endl;
 }
 
}
}
return 0;
}