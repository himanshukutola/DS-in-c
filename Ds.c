#include<stdio.h>
#include"stdlib.h" 
int binarysearch();
void bubblesort();
int linearsearch();
void insertarray();
void createarray();
void deletearray();
void printarray();
void selectionsort();
void insertionsort();
int main(){
while(1)
{int choice, arr[100],size;
 int found,a;

printf("MENU\n");
printf("press 1 to create array::\n");
printf("press 2 to print an array::\n");
printf("press 3 to insert any element form array::\n" );
printf("press 4 to delete any elemrnt in array::\n");
printf("printf 5 to search any element in array::\n");
printf("press 6 to sort an array::\n");
printf("press 0 to exit from  programm::\n");
printf("\n" );
printf("ENTER YOUR CHOICE FROM ABOVE::\t ");
scanf("%d",&choice);
printf("\n");
switch(choice){
case 1: createarray(arr,&size); break;
case 2: printarray(arr,size); break;
case 3: insertarray(arr,&size); break;
case 4: deletearray(arr,&size);break;
case 5: {printf("for linear search=1\t\nfor binary search =2\t\n");
                scanf("%d",&a);
                if (a==1)
                {found = linearsearch( arr,size);
                  if (found ==-1)
                   printf("not found\t\n");
                   else 
                   printf(" %d is position of search element in array\n",found);
                }
                else if (a == 2)
                {found = binarysearch( arr,size );
                 if (found ==-1)
                  { printf("not found\n");
                }
                else 
                printf("element found\t\n" );
                printf("%d is the position of   given input:::\n\t",found);
                }};
                break;
case 6:{printf("for bubble sort press 1\n for selection sort press 2\n for insertion sort press 3\n");                
            scanf("%d",&a);
            if(a==1)
            {bubblesort( arr,size );}
            else if (a==2)
            {selectionsort( arr,size );
            }
            else if (a==3)
            {insertionsort( arr,size );}
            else
            printf("please write a valid input");
            printf("\n"); }
 case 0:exit(0);
 break;
 default:printf("invalid input\n");
 }}}
 void createarray(int arr[],int *s)
     {
     printf("enter the size of array\t");
     scanf ("%d",&*s);
     for(int i=0;i<*s;i++)
     {printf("%d ) enter the value of arr[%d]\t=",i+1,i);
     scanf("%d",&arr[i]);
     }
     }
 void printarray(int a[],int s)
     {
     int i;
     for (i=0;i<s;i++)
     {printf("%d) a[%d]=%d\n" ,i+1,i,a[i]);
     }}
 void insertarray(int a[],int *s)
     {
     int pos ,ele;
     printf(" enter positon\t");
     scanf(" %d",&pos);
     printf("\n" );
      if(pos<0||pos>*s)
      {printf(" #####################invalid position##############\n");
      printf("\n");}
      else {
      for(int i =*s-1;i>pos-1;i--)
      {a[i+1]=a[i];
      }
      printf("enter element you want to insert IN ARRAY at position %d :=",pos);
      scanf ("%d", &ele);
      printf(" \n");
      a[pos-1]=ele;
      *s++;
      printf("element %d\t inserted successfully at position %d\t\n " 
      ,ele,pos);
 }}
void deletearray(int a[],int *s)
{int pos , delete;    
    printf("enter position of the element you want to delete from array:");
    scanf("%d",&pos);
    printf("\n");    
    if (pos<0||pos>*s)
    {printf("invalid positon\n");
    printf("\n"); }
    else {
    delete=a[pos-1];
    for(int i=pos-1;i<*s;i++)
    {a[i]=a[i+1];
    *s--;
    }
printf("%d position element deleted from array\n",delete);
printf("\n");
}}
    int linearsearch(int a[],int s){
      int search;
     printf("enter the element to search\t");
     scanf("%d",&search);
     for (int i=0;i<s;i++)
     {   if (a[i]==search)
           return i+1;}
           return -1;
           }
int binarysearch(int arr[],int size)
           {int s=size;
           int search;
           printf("enter the element you want to search \t");
           scanf("%d",&search);
           bubblesort(arr,s);
           int ub=size-1,lb=0,mid=0;
           if(lb<=ub)
           { mid=lb/2+ub+2;
           if (arr[mid]==search)
           return (arr[mid +1]);
           else if (arr[mid]>search)
           ub =mid-1;
           else 
           lb =mid+1;
           }
           else
           {
           return -1;}
           
           }
           
void bubblesort(int a[],int size)
            { int i,j;
            int temp;
            for (i=0;i<size-1;i++)
            {for(j=0;j<size-1-i;j++)
            {if (a[j]>a[j+1])
            {temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
            }
            }
void selectionsort(int a[],int size){
            int i, j, min;
            for (i=0;i<size-1;i++)
            {min =i;
            for (j=i+1;j<size;j++)
            {if (a[j]<a[min])
                 min=j;
            }     
            temp =a[i];
            a[i]=a[min];
            a[min]=temp;
            }
            }
void insertionsort(int arr[],int size)
                {
                int i,j,key=0;
                for}
            
            
