#include<iostream>
#include<math.h>
using namespace std;
int factorial(int num){
    if(num==0 || num==1){
        return num;
    }
    factorial(num-1);
}
int reverse(int num){
    int rev=0;
    
     while(num!=NULL){
     int rem = num % 10;
       rev=rev * 10 + rem;
       num = num/ 10;

}
return rev;
}
int main(){
double a,b,c,d,root1,root2,real,img;
reverse(765);
cout<<"Enter value of a,b,c";
cin>>a>>b>>c;
 d=b*b-4*a*c;
if(d>0){
    cout<<"Roots are Real"<<endl;
    root1=(-b+sqrt(d))/(2*a);
    root1=(-b-sqrt(d))/(2*a);
    cout<<"Root 1 = "<<root1<<endl;
    cout<<"Root 2 = "<<root2<<endl;
}
else if(d==0){
    cout<<"Roots are equal \n";
    root1=root2=-b/(2*a);
}
else{
    real=-b/(2*a);
    img=sqrt(-d)/(2*a);
    cout<<"No Real roots  "<<endl;
    cout<<"Root 1= "<<real<<"+"<<img<<"Root2 = "<<real<<"-"<<img;
}



    return 0;
}