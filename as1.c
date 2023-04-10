#include <stdio.h>
int main(void)
{
 int i; // declaring i as int
 i = 1; // initializing i as 1
 
// while i is less than or equal to 128, do these:
 while (i <= 128) { 

 printf("%d ", i); // print the value of i

 i *= 2; // multiply i by 2
 }
 return 0;
}