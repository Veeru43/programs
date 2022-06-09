#include<stdio.h>
int binarysearch(int A[], int start, int end, int element){
   if(start>end)
     return -1;
   int mid = (start+end)/2;
   if( A[mid] == element )
     return mid;
   else if( element<A[mid])
      binarysearch(A, start, mid-1, element);
   else
      binarysearch(A, mid+1, end, element);
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
   int element;
   scanf("%d",&element);
   printf("%d",binarysearch(arr,0,n,element));
   return 0;
}

