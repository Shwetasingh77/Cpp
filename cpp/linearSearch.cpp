#include<iostream>
using namespace std;

bool keyFind(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
int arr[9]={1,2,3,4,5,6,7,8};
int key=69;
bool found= keyFind(arr,9,key);
if(found){
    cout<<"Key is found"<<endl;
}
else{
    cout<<"key is not found";
}
    return 0;

}