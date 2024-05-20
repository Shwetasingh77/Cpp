#include<iostream>
using namespace std;
int display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int Get(int arr[],int size,int index){
     if(index>=0 && index < size){
         return arr[index];
    }
    return -1;

}
int SEt(int arr[],int size,int index,int n){
    if(index>=0 && index < size){
        arr[index]=n;
         return arr[index];
    }
    return -1;
   

}

int Max(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int Min(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int Sum(int arr[],int size){
    int total=0;
     for(int i=0;i<size;i++){
        total=total+arr[i];
    }
    return total;
}
float Average(int arr[], int size) {
    return (float)(Sum(arr, size)) / size;
}

// int Average(int arr[],int size){
//     return (float)Sum(arr,sizeof(arr)/sizeof(arr[0]))/size;
// }
    int main(){
    int arr[6]={5,82,3,6,2,9};
    int n=4;
    SEt(arr,sizeof(arr)/sizeof(arr[0]),3,n);
    cout<<"Element at index 1 is "<<Get(arr,sizeof(arr)/sizeof(arr[0]),1)<<endl;
    display(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<endl;
    cout<<" Max is "<<Max(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<endl;
    cout<<" Min is "<<Min(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<endl;
    cout<<" Total is "<<Sum(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<"Average is "<<Average(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;

}