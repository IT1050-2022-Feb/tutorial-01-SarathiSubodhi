/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {int i,n,sum=0;
  float avg;
  printf("Input the n numbers : \n");
  for (i=1;i<=n;i++)
    {
      prinf("Number - %d:",i);
      scanf("&d",&n);
      sum +=n;
    }
  avg=sum/n;
  printf("The sum of %d\n no is:",sum);
  
  
  return 0;
}

