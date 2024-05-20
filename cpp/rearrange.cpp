#include<iostream>
using namespace std;




void rearrange(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<j){   
        while(arr[i]<0){i++;}
        while(arr[j]>=0){j--;}  
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
    }
}


int main() {
int arr[6]={-1,2,3,-3,-2,1};
int size=sizeof(arr)/sizeof(arr[0]);
rearrange(arr,size);
  cout << "Array after Rearrange: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}