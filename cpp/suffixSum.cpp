#include<iostream>
#include<vector>
using namespace std;
bool checkEqual(vector<int>&v){
    int totalSum=0;
    for(int i=1;i<v.size();i++){
       totalSum+=v[i];
   }
   int prefixSum=0;
   for(int i=1;i<v.size();i++){
        prefixSum+=v[i];
        int suffixSum=totalSum-prefixSum;
        if(suffixSum==prefixSum){
            return true;
        }
   }

   return false;
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

    cout<<checkEqual(v);
    

    return 0;
}
