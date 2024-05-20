#include<iostream>
using namespace std;
void  mergeArray(int arr1[],int arr2[],int m,int n,int  arr3[]){
int i=0,j=0,k=0;
    while(i<m && j<n){
    if(arr1[i]<arr2[j]) { 
        arr3[k++]=arr1[i++];
       }
       else{
          arr3[k++]=arr2[j++];
       }
    }
    // Copy the remaining elements of arr1, if any
    while (i < m) {
        arr3[k++] = arr1[i++];
    }

    // Copy the remaining elements of arr2, if any
    while (j < n) {
        arr3[k++] = arr2[j++];
    }

   
}
void reverseArray(int arr1[],int m){
  
for(  int i=0,j=m-1;i<j;i++,j--){
    int temp=arr1[i];
    arr1[i]=arr1[j];
    arr1[j]=temp;
}
}
int main(){
int arr1[]={1,3,5,6,7};
int m=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={2,3,4,8,9,10};
int n=sizeof(arr2)/sizeof(arr2[0]);
int arr3[m+n];
mergeArray(arr1,arr2,m,n,arr3);
reverseArray( arr1, m);
int len=sizeof(arr3)/sizeof(arr3[0]);
for(int j=0;j<len;j++){
     cout<<arr3[j]<<" ";
    }
    cout<<endl;
     cout<<"Array first after reverse";
    for(int j=0;j<m;j++){
     cout<<arr1[j]<<" ";
    }
    return 0;
}
