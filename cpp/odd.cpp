#include<iostream>
using namespace std;
bool checkOdd(int n){
    
        if (n%2!=0){
        return true;
         }
}
bool prime(int n){
   
   
    for(int i=2;i<n;i++){
    if((n%i==0) ||(n==1)){
        return false;
    }
   }
   
   return true;
}
int main()
{
    int a=1;
    int b=10;
   for(int i=a;i<=b;i++){
    if(checkOdd(i)){
        cout<<i<<" ";
    }
   }
   cout<<endl;
     for(int i=a;i<=b;i++){
    if(prime(i)){
        cout<<i<<" ";
    }
   }
    
    return 0;
}
