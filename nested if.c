#include<stdio.h>
int main()
{

 int n;
 printf("Enter the value n\n");
 scanf("%d",&n);

 if(n%2==0)
   {
     if(n%3==0)
     {
       printf("you are happy\n");
     }

   }
      else
       {
           printf("you are sad\n");
       }

return 0;
}
