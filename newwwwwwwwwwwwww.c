#include<stdio.h>
int main()
{
     int a[10],i,j,n,min,pos,temp;
     printf("%s","ENTER THE SIZE OF THE LIST=");
     scanf("%d",&n);
     printf("%s","ENTER THE LIST=");

     for(i=0;i<n;++i)
     {
                     scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
    { min=a[i];
                    for(j=i+1;j<n;++j)
                    {

                                    if(min>a[j])
                                    {
                                                   min=a[j];
                                                   pos=j;
                                    }
                    }
                    temp=a[i];
                    a[i]=min;
                    a[pos]= temp;


        }
    printf("%s","SORTED LIST IS=");
     for(i=0;i<n;++i)
     {
                   printf("\n");
                     printf("%d",a[i]);
     }
     return 0;


}



