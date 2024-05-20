#include <stdio.h>
int main(){
   int a,b;
   printf("enter two coordinates:");
   scanf("%d %d",&a,&b);
   if(a > 0 && b > 0)
      printf("1st Quadrant");
   else if(a < 0 && b > 0)
      printf("2nd Quadrant");
   else if(a < 0 && b < 0)
      printf("3rd Quadrant");
   else if(a > 0 && b < 0)
      printf("4th Quadrant");
   else
      printf("Origin");
   return 0;
}
