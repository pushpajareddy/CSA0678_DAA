#include <stdio.h>
#include <stdbool.h>
bool isSubsetSum(int a[], int n, int sum)
{
    bool subset[sum + 1][n + 1];
    for (int i = 0; i <= n; i++)
        subset[0][i] = true;
    for (int i = 1; i <= sum; i++)
        subset[i][0] = false;
    for (int i = 1; i <= sum; i++) 
	{
        for (int j = 1; j <= n; j++) 
		{
            subset[i][j] = subset[i][j - 1];
            if (i >= a[j - 1])
                subset[i][j] = subset[i][j] || subset[i - a[j - 1]][j - 1];
        }
    }
    return subset[sum][n];
}
int main()
{
    int a[] = { 3, 34, 4, 12, 5, 2 };
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 9;
    if (isSubsetSum(a, n, sum))
        printf("Found a subset with given sum\n");
    else
        printf("No subset with given sum\n");
}
