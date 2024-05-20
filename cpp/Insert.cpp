// // #include<iostream>
// // using namespace std;


// // int main(){
// // int arr[]={2,3,4,5,16};
// // int len=sizeof(arr)/sizeof(arr[0]);
// // int i=len-1;
// // int x=10;
// // while(i>=0 && arr[i]>x){
// // arr[i+1]=arr[i];
// // i--;
// // }
// // arr[i+1]=x;
// // len++;
// //  for(int j=0;j<len;j++){
// //      cout<<arr[j]<<" ";
// //     }
// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {2, 3, 4, 5, 16};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     int i = len - 1;
//     int x = 10;

//     while (i >= 0 && arr[i] > x) {
//         arr[i + 1] = arr[i];
//         i--;
//     }
//      len++;
//     arr[i + 1] = x;
   
//     for (int j = 0; j < len ; j++) {
//         cout << arr[j] << " ";
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

void insertIntoSortedArray(int arr[], int& len, int capacity, int x) {
    if (len == capacity) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    int i = len - 1;

    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = x;
    len++;
}


int main() {
    const int capacity = 10;
    int arr[capacity] = {2, 3, 4, 5, 16};
    int len = 5;
    int x = 10;

    cout << "Original Array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertIntoSortedArray(arr, len, capacity, x);

    cout << "Array after insertion: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
