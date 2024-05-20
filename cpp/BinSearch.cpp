#include<iostream>
using namespace std;
int arr[7]={1,2,3,4,5,6,7};



int BinSearch(int first,int last,int key){
    
   
    while(first<=last){
        int mid=(first+last)/2;
    if(key==arr[mid]){
        return mid;
    }
    else if(key>arr[mid]){
        first=mid+1;
    }
    else{
        last=mid-1;
    }
}
    return -1;
}


int main(){
    int key;
    cin>>key;
int result=BinSearch( 0, sizeof(arr)/sizeof(arr[0])-1, key);

if(result){
    cout<<"Key is found at index"<<result;
}
else{
    cout<<"key not found";
}
return 0;
}