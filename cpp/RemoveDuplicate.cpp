// #include<iostream>
// using namespace std;
// int RemoveDuplicate(int arr[],int size){
// int* arr2;
// arr2=new int[size];
// for(int i=0;i<size;i++){
//     arr2[i]=arr[i];
// }
// delete []arr;
// arr=arr2;
// arr2=NULL;
// for(int i=0;i<size;i++){
//     if(arr[i]!=arr[i-1]){
//         arr2[i]==arr[i];
//     }
// }
// return arr2[size];
// }
// int main() {
//     int *arr;
// arr=new int [6];
// arr[0]={2};
// arr[1]={3};
// arr[2]={4};
// arr[3]={3};
// arr[4]={35};
// arr[5]={5};

// int size=sizeof(arr)/sizeof(arr[0]);

// RemoveDuplicate(arr,size);
// //   cout << "Array after Rearrange: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void RemoveDuplicate(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
}

int main() {
    vector<int> arr = {2, 3, 4, 3, 35, 5};

    RemoveDuplicate(arr);

    cout << "Array after removing duplicates: ";
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
