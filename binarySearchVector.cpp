#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> v;
int target;
int n;
while(true){
    cout<<"enter the element:";
    cin>>n;
    if(n==-1){
        break;
    }
    v.push_back(n);
}
sort(v.begin(),v.end());
    cout<<"Enter the target element:";
    cin>>target;
     
    if(binary_search(v.begin(),v.end(),target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}