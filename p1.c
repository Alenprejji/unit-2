#include <stdio.h>
int main() 
{ int arr[] = {10, 20, 30, 40, 50, 60}; 
int numberOfElements = sizeof(arr) / sizeof(arr[0]);
printf("The number of elements in the array is: %d\n", numberOfElements);return 0;
}
