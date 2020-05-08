#include <stdio.h>

int main(void) {

  int arr[100], max, i;
  printf("Enter 3 integers: ");

  for (i = 0; i < 3; i++){
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  for (i = 1; i < 3; i++)
  {
    if (arr[i] > max)
       max  = arr[i];
  }

  printf("Maximum value: %d", max);

  return 0;
}
