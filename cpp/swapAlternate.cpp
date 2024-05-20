#include<iostream>
using namespace std;
int swap(int arr[],int size){
for(int i=0;i<size;i=i+2){
    if(i+1<size){
         swap( arr[i],arr[i+1]);
        //  int temp =arr[i];
    //   arr[i]=arr[i+1];
    //   arr[i+1]=temp;
    
    //  arr[i]=arr[i]+ arr[i+1];
    // arr[i+1]=arr[i]- arr[i+1];
    //  arr[i]=arr[i]- arr[i+1];
    }
}
}
int main(){
int odd[9]={1,2,3,4,5,6,7,8,9};
int even[8]={1,2,3,4,5,6,7,8};
swap(odd,9);
swap(even,8);
for(int i=0;i<8;i++){
    cout<<even[i];
}
cout<<endl;
for(int i=0;i<9;i++){
    cout<<odd[i];
}


    return 0;

}