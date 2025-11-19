#include <stdio.h>
int main()
{int arr[5]={1,2,3,4,5};
int *ptr=arr;
ptr=arr+4;
printf("last element is :%d\n",*ptr);
return 0;}
