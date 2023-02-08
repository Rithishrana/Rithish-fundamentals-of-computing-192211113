#include <stdio.h>
int main()
{
  int n, i;
  printf("Enter the number of odd numbers to generate: ");
  scanf("%d", &n);
  for (i = 1; i <= n*2; i += 2) 
  printf("%d\n", i);
  return 0;
}
