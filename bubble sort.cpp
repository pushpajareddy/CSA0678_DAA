#include<stdio.h>
void bubble_sort(int a[],int n)
{
	int i,j,t;
    for(i=1;i<n;i++)
    {
    	j=i;
    	while(a[j]<a[j-1] && j>0)
    	{
    		t=a[j];
    		a[j]=a[j-1];
    		a[j-1]=t;
    		j--;
		}
	}
}
int main()
{
	int i,n,a[100];
	printf("enter the no.of elements : ");
	scanf("%d",&n);
	printf("enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("the sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
