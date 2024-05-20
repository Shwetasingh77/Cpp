#include <iostream>
using namespace std;

int fibonacci(int num) {
    static int a = 0, b = 1;
    int c;

    if (num > 0) {
        c = a + b;
        a = b;
        b = c;
        return fibonacci(num - 1);
    }

    return a;
}

int main() {
    int num = fibonacci(6);
    cout << "The 6th Fibonacci number is: " << num << endl;

    return 0;
}



// // Online C++ compiler to run C++ program online
// #include<iostream>
// using namespace std;
// int main (){
// int a=0;
// int b=1;
// int n;
// int c=0;
// cin>>n;
// for(int i=0;i<=n;i++){
//     if(i==0){
//         cout<<i<<" ";
//     }
//      if(i==1){
//         cout<<i<<" ";
//     }
//     else{
//     c=a+b;
//     cout<<c<<" ";
//     a=b;
//     b=c;
// }
// }

// return 0;
// }

