#include <stdio.h>
void main()
{int i,k,n,temp,j;
    printf("Enter the no.of elements ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {for(j=0;j<n-i-1;j++)
    {if(a[j]>a[j+1])
    {temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;}
    }
        }
    for(i=0;i<n;i++)
    {printf("%d ",a[i]);}
    printf("\nEnter the kth position ");
    scanf("%d",&k);
    printf("%d",a[k-1]);
}