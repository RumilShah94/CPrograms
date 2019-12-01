#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,b,x,a[10];
  clrscr();
  printf("Order of posttions:\n");
  for(i=1;i<10;i++)
  {
    a[i]=95;  //ascii value = '_'
    printf("%6d",i);
    if(i%3==0)
       printf("\n\n");
  }
  for(j=1;j<10;j++)
  {
    if(j%2!=0)
    {
      printf("\nPlayer A's Turn\n");
      x=65;
    }
    else
    {
      printf("\nPlayer B's Turn\n");
      x=66;
    }
    scanf("%d",&b);
    if(j%2!=0)
       a[b]=79;
    else
       a[b]=88;
    for(i=1;i<10;i++)
    {
       printf("%6c",a[i]);
       if(i%3==0)
	 printf("\n\n");
    }
    for(i=1;i<8;i+=3)
    {
     if(a[i]==a[i+1]&&a[i]==a[i+2]&&a[i]!=95)
     {
       printf("%c Won!",x);
       goto stop;
     }
    }
    for(i=1;i<4;i++)
    {
     if(a[i]==a[i+3]&&a[i]==a[i+6]&&a[i]!=95)
     {
       printf("%c Won!",x);
       goto stop;
     }
    }
    if(a[1]==a[5]&&a[1]==a[9]&&a[1]!=95)
    {
       printf("%c Won!",x);
       goto stop;
    }
   else if(a[3]==a[5]&&a[3]==a[7]&&a[3]!=95)
   {
       printf("%c Won!",x);
       goto stop;
   }
  }
  printf("Draw!");
  getch();
  stop:
  {
   printf("\nGame Over!\n");
   getch();
  }
 }