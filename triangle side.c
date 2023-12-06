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

 if(a+b>c||b+c>a||a+c>b)
    {
        printf("The triangle is valid\n");
    }

else
{
    printf("The triangle is not valid\n");
}

return 0;
}
