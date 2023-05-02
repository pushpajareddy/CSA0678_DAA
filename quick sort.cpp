#include<stdio.h>
void quicksort(int a[],int f,int l)
{
	int p,i,j,t;
	if(f<l)
	{
		p=f;
		i=f;
		j=l;
		while(i<j)
		{
			while(a[i]<=a[p])
			i++;
			while(a[j]>a[p])
			j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[p];
		a[p]=a[j];
		a[j]=t;
		quicksort(a,f,j-1);
		quicksort(a,j+1,l);
	}
}
int main(){
	int a[100],n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("sorted elements\t:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
