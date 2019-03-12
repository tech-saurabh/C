#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[20],n,pos,x;
    printf("enter the no of elements of array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the number you want to search :");
     scanf("%d",&x);
     for(i=0;i<n;i++)
     {
         if(a[i]==x)
         {
             pos=i;
         printf("the element is found at pos %d\n",pos);
         break;
         }
     }
     if(i==n)
     {
       printf("not found");
     }
     getch();
}
