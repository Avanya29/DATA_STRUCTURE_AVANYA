#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1:"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1:"<<v.capacity()<<endl;

    v.push_back(8);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1:"<<v.capacity()<<endl;

    v.push_back(9);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1:"<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       // cout<<v.at(i)<<" ";
        cout<<endl;
        for(auto value :v){
            cout<<value<<" ";
            cout<<endl;
            v.pop_back();
            for(auto value:v)
            cout<<value<<" ";
            cout<<endl;
            cout<<"Front:"<<v.front()<<" "<<"last Value:"<<v.back()<<endl;
        }
    }
    
}

