#include  <stdio.h>
int* display(int arr[],int indexvalue){return &arr[indexvalue];}
int main()
{int arr[5]={50,10,40,30,20};int *p=display(arr,4);
printf("%d",*p);
return 0;}
