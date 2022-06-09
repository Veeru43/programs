#include<stdio.h>
void merge(int *a,int start,int n,int m)
{
    int i,j,k=0;
    int c[1000];
    for(i=start,j=m+1;i<=m&&j<=n;)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=a[j];
            j++;
        }
        k++;
    }
    if(i==m+1)
    {
        while(j<=n)
        {
            c[k]=a[j];
            j++;
            k++;
        }
    }
    if(j==n+1)
    {
        while(i<=m)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    k=0;
    for(i=start;i<=n;i++)
    {
        a[i]=c[k];
        k++;
    }
}
void mergesort(int *a,int start ,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,end,mid);
    }
}

int main()
{
    int i,j,n,m,temp,a[100],b[100];
    printf("18B95A0231\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c[200];
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


