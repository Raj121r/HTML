
#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n; 
    printf("enter array size:");
    scanf("%d",&n);
    int *arr=(int*)calloc(n, sizeof(int));
    printf(" Enter %d elements:\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i=0;i<n;i++){
        printf("  %d  ",arr[i]);
    }
    
     int n2; 
    printf("\nenter  reallocate array size:");
    scanf("%d",&n2);
    int *brr=(int*)realloc(arr,n2*sizeof(int));
    
        printf(" Enter %d elements:\n",n2-n);
    for (int i=n;i<n2;i++){
        scanf("%d",&brr[i]);
    }
    
     printf("after reallocated  array data:\n");
    for (int i=0;i<n2;i++){
        printf("  %d  ",brr[i]);
    }
   
    free(brr);
    brr=NULL;

    return 0;
}
