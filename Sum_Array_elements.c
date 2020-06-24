#include<stdio.h>
int main()
{
int arr[100],i,sum=0,n;
printf("Please enter the number of elements in array\n");
scanf("%d",&n);

printf("Please enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("Sum of Array elements=%d",sum);
return 0;
}
