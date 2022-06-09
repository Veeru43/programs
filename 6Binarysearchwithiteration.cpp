#include<stdio.h>
int binarysearch(int A[], int size, int element) 
{
   int start = 0;
   int end = size-1;
   while(start<=end) {
      int mid = (start+end)/2;
      if( A[mid] == element) {
         return mid;
      } else if( element < A[mid] ) {
         end = mid-1;
      } else {
         start = mid+1;
      }
   }
   return -1;
}

int main()
{
   int n,i;
   printf("18B95A0231\n");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   int element;
   scanf("%d",&element);
   printf("%d",binarysearch(arr,n,element));
   return 0;
}

