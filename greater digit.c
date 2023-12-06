#include<stdio.h>
int main()
{

int a;
printf("Enter the value a\n");
scanf("%d",&a);

int b;
printf("Enter the value b\n");
scanf("%d",&b);

int c;
printf("Enter the value c\n");
scanf("%d",&c);

if(a>b||a>c)
  {
      printf("a is greater digit\n");
  }
    if(b>a||b>c)
  {
      printf("b is greater digit\n");
  }

   if(c>b||c>a)
  {
      printf("c is greater digit\n");
  }

   else
   {
       printf("not greater\n");
   }

return 0;
}
