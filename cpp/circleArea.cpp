#include<iostream>
using namespace std;
float area(float r){
return 3.14*r*r;
}
float circumference(float x){
    return 2*3.14*x;
}
int main()
{
    cout<<area(3)<<endl;
    cout<<circumference(3);

    return 0;
}
