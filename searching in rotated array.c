#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,key=2,c;
    int first,last,pivot,a[]={5,6,7,8,9,10,1,2,3},mid;
    n=sizeof(a)/sizeof(int);
    printf("size of array is:%d\n",n);
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            pivot=i;
        }
    }
    printf("pivot element is:%d\n",pivot);
  first=0;
  last=n-1;
  //while(a[first]>a[last])
  for(i=0;i<=n;i++)
  {
    if(key<a[pivot] && key>a[last])
      {
          mid=(first+pivot)/2;
          if(key==a[mid])
          {
              printf("value is found at location=%d",mid);
              break;
          }
          else
          {
           if(key>a[mid])
           {
               first=first+1;
           }
           else
           {
               pivot=pivot-1;
           }
          }
      }
    else
      {
     if(key<a[pivot] && key<=a[last])
     {

          mid=(pivot+last)/2;
          if(key==a[mid])
          {
              printf("value is found at location=%d",mid);
              break;
          }
          else
          {
              if(key>a[mid])
              {
                  pivot=pivot+1;
              }
              else
              {
                  last=last-1;
              }
          }
       }
      }
  }
  getch();
}
