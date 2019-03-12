#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
struct node *prev;
int info;
struct node *next;
};
typedef struct node node;
node *start=NULL;
node *head,*temp;

     void insert();
        void traverse();
            void main()
              {
                char ch;
                while(1)
               {
                 insert();
                   printf("do you want to insert data");
                   fflush(stdin);
                   scanf("%d",&ch);
                 if(ch!='y')
                    break;
               }
                   traverse();
                    getch();
               }
void insert()
{
head=(node*)malloc(sizeof(node));
printf("enter the data");
scanf("%d",head->info);
if(start==NULL)
{
head->next=NULL;
head->prev=NULL;
start=head;
}
else
{
temp=start;
while(temp!=NULL)
{
temp=temp->next;
}
temp->next=head;
head->next=NULL;
head->prev=temp;
}
}
void traverse()
{
temp=start;
while(temp!=NULL)
{
printf("%d",temp->info);
temp=temp->next;
}
}



