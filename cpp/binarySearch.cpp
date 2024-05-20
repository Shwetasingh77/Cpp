#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    
    int start=0;
    int end=size-1;
    int mid=start +(end-start)/2;
    while(start<=end)
    {if(key==arr[mid]){
        return mid;
        // cout<<mid<<endl;
    }
    if(key > arr[mid]){
         start= mid+1;
    }
    else{
        end=mid-1;
    }
    
   mid= start +(end-start)/2;
    }
    return -1;
}



int main(){
    int arr[8]={2,3,5,7,9,12,6,4};
    int key=9;
    int index= binarySearch(arr,8,9);
    cout<<"Index of given key is "<<index;
}