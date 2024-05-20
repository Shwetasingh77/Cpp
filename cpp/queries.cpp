// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int>v(n+1,0);
    
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
       v[i] = ele; 
    }

   for(int i=1;i<=n;i++){
        v[i]+=v[i-1];

   }
   int q;
   cout<<"enter queries no"<<endl;
   cin>>q;

   while(q--){
    int l,r;
    cin>>l>>r;
    int ans=0;
     ans=v[r]-v[l-1];
    cout<< ans<<endl;
   }
    
   
    return 0;
}
