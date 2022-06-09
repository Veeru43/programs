#include<stdio.h>
int partition(int *arr,int start,int end)
{
        int i=start;
        int j=end-1;
        int pivot=arr[end];
        int temp;
        
        while(i<j)
        {
            while(arr[i]<pivot && i<end)
            {
                i++;
            }
            while(arr[j]>pivot && j>=start)
            {
                j--;
            }
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
       if(arr[i]>arr[end])
       {
       temp=arr[end];
       arr[end]=arr[i];
       arr[i]=temp;
       }
       return i;
       
}

void quicksort(int *arr,int start,int end)
{
    if(start<end)
    {
        int i=partition(arr,start,end);
        quicksort(arr,0,i-1);
        quicksort(arr,i+1,end);
    }
}
int main()
{
    int n;
    printf("18B95A0231\n");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


