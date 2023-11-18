#include<stdio.h>
void main()
{
int a[10],b[10],n,m,i,j;
clrscr();
printf("Enter limit of a[1]:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter Number:");
scanf("%d",&a[i]);
}
printf("Enter limit of array [2]:");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("Enter number:");
scanf("%d",&b[i]);
}
printf("Array 1:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("Array 2:");
for(i=0;i<m;i++)
{
printf("\n%d ",b[i]);
}
for(j=n,i=0;i<m;i++,j++)
{
a[j]=b[i];
}
printf("Appent array:");
for(i=0;i<n+m;i++)
{
printf("%d ",a[i]);
}
getch();
}