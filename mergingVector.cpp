#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,6,7,8};
    vector<int>v2={2,3,5};

    // vector<int> merged;
    // int i=0,j=0;
    // while(i<v1.size() && j<v2.size()){
    //     if(v1[i]<=v2[j]){
    //         merged.push_back(v1[i]);
    //         i++;
    //     }
    //     else{
    //         merged.push_back(v2[j]);
    //         j++;
    //     }
    // }
    // while(i<v1.size()){
    //     merged.push_back(v1[i]);
    //     i++;
    // }
    // while(j<v2.size()){
    //     merged.push_back(v2[j]);
    //     j++;
    // }
    // for(int i=0;i<merged.size();i++){
    //     cout<<merged[i]<<" ";
    // }
    vector<int>v3(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(int i=0;i<v3.size();i++){
      cout<<v3[i]<<" ";
    }
    return 0;
}