#include <stdio.h>

int main() {
  int n, i;
  int fib1 = 0, fib2 = 1, nextFib;
  
  printf("Enter the number of terms in the series: ");
  scanf("%d", &n);
  
  printf("Fibonacci series: %d %d ", fib1, fib2);
  
  for (i = 2; i < n; i++) {
    nextFib = fib1 + fib2;
    printf("%d ", nextFib);
    fib1 = fib2;
    fib2 = nextFib;
  }
  
  return 0;
}

