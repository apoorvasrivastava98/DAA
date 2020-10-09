#include<stdio.h>
int count = 0;
void main()
{
  void getdata(int[50],int);
  void putdata(int[50],int);
  int shell_sort(int[50],int);

    int i,a[50],n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    getdata(a,n);
    printf("Before sorting \n");
    putdata(a,n);
    shell_sort( a,n);
    printf("After sorting \n");
    putdata(a,n);
    printf("value of count=%d \n",count);
      }
    void getdata(int x[50],int n)
       {
        int k;
        printf("Enter the value  for sorting\n");
        for(k=0;k<n;k++)
        {
         scanf("%d",&x[k]);
        } }
 
     void putdata(int x[50], int n)
         {
          int k;
          for(k=0;k<n;k++)
         {
          printf("%d\t",x[k]);
           }
          printf("\n");
          }
     int shell_sort(int a[50], int n)
          {
            int gap,i,temp;
            count++;
            for(gap=n/2;gap>0;gap/=2)
            {
             count++;
             for(i=gap;i<n;i+=1)
             {
              count++;
              temp=a[i];
              count++;
              int j;
              count++;
              for(j=i;j>=gap && a[j-gap]>temp;j-=gap)
              {
                count++;
                a[j]=a[j-gap];
                count++;
              }
              count++;
              a[j]=temp;
              count++;
             }
            } 
            count++;
            return 0;
          }


