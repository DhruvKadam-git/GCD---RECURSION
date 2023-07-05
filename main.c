#include <stdio.h>

int gcd(int a, int b)
{
  int result = (a < b) ? a : b; // Initialize result to the minimum of a and b

  while (result > 0)
  {
    if (a % result == 0 && b % result == 0)
      return result;
    result--;
  }

  return result;
}

int main()
{
  int i, j;
  printf("Enter the value of i and j respectively: ");
  scanf("%d %d", &i, &j);
  printf("GCD of %d and %d is %d\n", i, j, gcd(i, j));

  printf("\n*** © DHRUV KADAM 2023 ***\n");
  return 0;
}


