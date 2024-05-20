// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4]={2,3,4,5};
//     cout<<&arr[2];

//     return 0;
// // }
#include <iostream>
using namespace std;

int main()
{
    // int A[5];
    int *p;
    int i;

    p=new int[5];
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    for(i=0; i<5; i++){
    cout<<p[i]<<endl;
    }
     
    return 0;
}