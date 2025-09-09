// Merging of two sorted arrays

#include<iostream>
using namespace std;

int main(){
    int a[3]={2,4,6};
    int b[4]={1,3,5,7};
    int result[7];
    int i=0 , j=0 ,k=0;

    while(i<3 && j<4){
        if(a[i]<=b[j]){
            result[k]=a[i];
            i++;
            k++;
        }
        else{
            result[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<3){
        result[k]=a[i];
        i++;
        k++;
    }
    while(j<4){
        result[k]=b[j];
        j++;
        k++;
    }

    //Printing the array
    for(int k=0;k<7;k++){
        cout<<result[k]<<" ";
    }
}