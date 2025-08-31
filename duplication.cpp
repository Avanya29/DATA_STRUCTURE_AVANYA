

#include<iostream>


#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
//input of array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//max element of array

int maxInArr = *max_element(arr, arr + n);

    // size = max of (max element, n)
    int size = max(maxInArr, n);
int buffer[size];



    


}