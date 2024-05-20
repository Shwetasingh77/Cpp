#include<iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
// if ((num >= 0) ? (num == 0 ? printf("Neither positive nor negative") : printf("Positive")) : printf("Negative"))

if((num>=0)? (num==0 ? cout<<("NEITHER POSITIVE NOR NEGATIVE"): cout<<("positive")): cout<<("negative"));
num%2==0 ? cout<<("even"): cout<<"odd";
return 0;
}