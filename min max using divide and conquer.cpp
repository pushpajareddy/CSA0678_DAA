#include<stdio.h>
static int min,max=0,arrr[100],mid,n;
minmax(int arr[],int low,int high)
{int i;
    if(high-low==1)
    {
        if(arr[low]<arr[high])
        {
        min=arr[low];
        max=arr[high];
        arrr[0]=min;
        arrr[1]=max;
        }
        else
        {
            min=arr[high];
            max=arr[low];
            arrr[0]=min;
            arrr[1]=max;
        }
        return 0;
    }
    if(n==1)
    {
        arrr[0]=arr[high];
        arrr[1]=arr[high];
        return 0;
    }
    mid=low+high/2;
    if(high-low>1)
    {
        mid=low+high/2;
        minmax(arr,low,mid);
        minmax(arr,mid+1,high);       
    }
}
int main()
{
    int i,j,sum=0,low,high;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i);
        scanf("%d",&arr[i]);
    } 
    low=0;
    high=n-1; 
    minmax(arr,low,high);
    printf("\n\nMinimum element %d \n\nMaximum element %d ",arrr[0],arrr[1]);
    
}
