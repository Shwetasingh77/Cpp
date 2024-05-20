#include <stdio.h>

int main()

{
//     Here's a simplified explanation:

// num & 1: This checks whether the least significant bit (LSB) of the binary representation of num is 1.

// If the LSB is 1, the expression num & 1 evaluates to true.
// If the LSB is 0, the expression num & 1 evaluates to false.
// So, in simple terms:

// If the number num is odd (its binary representation ends in 1), then num & 1 is true, and result is set to 1.
// If the number num is even (its binary representation ends in 0), then num & 1 is false, and result is set to 0.
// In other words, this code is checking if the number num is odd or even and setting the variable result accordingly. If num is odd, result becomes 1; if num is even, result becomes 0.

    int num,result;

    printf ("Enter a number: ");

    scanf ("%d", &num);

    if(num & 1)

    result=1;

    else

    result =0;

    (result==1)? printf("Odd") : printf("Even");

    return 0;

}