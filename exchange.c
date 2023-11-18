#include<stdio.h>
void main()
{
int a[10],i,n;
clrscr();
printf("Enter the limit of the array");
scanf("%d",&n);
printf("Enter the element of the array");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("\nthe array is :");
for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
for(i=0;i<i-1;j++)
    {
    for(j=i+1;j<1;j++)
    {
    if(a[i]>a[j])
    {
    t=a[i]
    a[i]=a[j]
    a[j]=t;
    }
    }
    }
printf("sorted array");
for(i=0;i<1;i++)
{
printf("(%d", a[i])
}
getch();
}
    