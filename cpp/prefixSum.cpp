// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void running(vector<int>&v){
   for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
   }
   return;
}
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    running(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}
