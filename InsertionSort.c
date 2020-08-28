#include <stdio.h>
int count =0;
  void main()
      {
       void getdata(int[50],int);
       void putdata(int[50],int);
       void insertion_sort(int a[],int );
 
    int i,a[50],n,temp,pass,flag=1,choice;
    printf("Enter the value of n\n");
    scanf("%d",&n);
     getdata(a,n);
     printf("Before sorting \n");
    putdata(a,n);
    insertion_sort( a,n);
    printf("After sorting \n");
    putdata(a,n);
    printf("value of count=%d \n",count);
      }
       void getdata(int x[50],int n)
       {
        int k;
        printf("enter the value  for sorting\n");
        for(k=0;k<n;k++)
        {
         scanf("%d",&x[k]);
        }     }
 
        void putdata(int x[50], int n)
         {
          int k;
          for(k=0;k<n;k++)
         {
          printf("%d\t",x[k]);
           }
          printf("\n");
          }

    void  insertion_sort(int a[],int n)
    {
     int i,j,key;
     count++;
     for(j=1;j<n;j++)
      {
          count++;
        key=a[j];
          count++;
        i=j-1;
           count++;
           count++;
        while(i>=0&&a[i]>key)
       {
           count++;
           count++;
        a[i+1]=a[i];
           count++;
        i=i-1;
           count++;
       }
         
       a[i+1]=key;
          count++;
       count++;  
      }
      
    }
