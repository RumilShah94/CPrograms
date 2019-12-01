//insertion sort
#include<stdio.h>
#include<conio.h>

void insort(int , int);

void main()
{
   int i,a[100],n;
   clrscr();
   printf("Enter no. of elements:");
    scanf("%d",&n);
   printf("Enter elements:");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   insort(int a[100], int n);
   print("Sorted array:");
   for(i=0;i<n;i++)
    printf("\na[%d]=%d",i,a[i]);
getch();
}

void insort(int a[100], int n)
{
 int i,k,temp;
 for(i=1;i<=n;i++)
 {
  temp=a[i];
  k=i-1;
  while(temp<a[k] && k>=0)
  {
   a[k+1]=a[k];
   k--;
  }
  a[k+1]=temp;
 }
}

