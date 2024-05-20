#include<iostream>
using namespace std;
int main(){
int index=4;
int x=15;

int arr[10]={1,2,3,4,5,6};
int length = sizeof(arr) / sizeof(arr[0]);
for(int i=length;i<index;i++){
arr[i]=arr[i-1];

}
arr[index]=x;

for(int i=0;i<length;i++){
cout<<arr[i]<<" ";

}
    return 0;
}