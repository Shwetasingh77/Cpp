#include<iostream>
using namespace std;
int arr[7]={1,2,3,4,5,6,7};

int main(){
    int key;
    cin>>key;
    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++){
        if(arr[i]==key){
            cout<<"key is found at index"<<i;
        }
    }



    return 0;
}