#include<iostream>
using namespace std;
bool vote(int age,int countryvotelimit){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int countryvotelimit=18;
    int x= vote(21,countryvotelimit);
    if(x){
        cout<<"Yes Eligible for voting"<<endl;

    }
    else{
        cout<<"Not eligible";
    }
    return 0;
}
