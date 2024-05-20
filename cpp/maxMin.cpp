#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[],int size){
int max=INT_MIN;
for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
        
    }
    
}
return max;
}

int getMin(int arr[],int size){
int min=INT_MAX;
for(int i=0;i<size;i++){
    if(arr[i]<min){
        min=arr[i];
       
    }
}
 return min;
}

int main(){

int arr[8]={2,3,4,6,5,7,8,9};
int maxVal= getMax(arr,8);
int minVal=getMin(arr,8);
cout << "Maximum value: " << maxVal << endl;
cout << "Minimum value: " << minVal << endl;

    return 0;
}



