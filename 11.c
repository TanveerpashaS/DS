#include<stdio.h>
#include<stdlib.h>
int a[10],pos,elem,n=0;
void create()
{
    int i;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    int i;
    printf("array elements are");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void insert()
{
    int i;
    printf("enter the valid position the element to be inserted");
    scanf("%d",&pos);
    printf("enter the value to be insert");
    scanf("%d",&elem);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=elem;
    n=n+1;
    display();
}    
void delete()
{
    int i;
    printf("enter the valid position where element to be deleted");
    scanf("%d",&pos);
    elem=a[pos];
    printf("deleted element is %d",elem);
    for(i=pos;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    display();
}
int main()
{
   int choice;
   while(1)
   {
     printf("\n_______MENU______\n");
     printf("\n1.create\n2.display\n3.insert\n4.delete\n5.exit\n");
     printf("enter your choice");
     scanf("%d",&choice);
     switch(choice)
       {
          case 1:create();
              break;
          case 2:display();
              break;
          case 3:insert();
              break;
          case 4:delete();
              break;
          case 5:exit(0);
        }                
   }

    
return 0;
}


