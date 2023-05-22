#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define SIZE 100

int main() {
  char str1[] = "abcd", str2[] = "aabcds", str3[] = "abcd";
  int result;

  // comparing strings str1 and str2
  result = strcmp(str1, str2+1);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);
while(!getch());
  return 0;
}
