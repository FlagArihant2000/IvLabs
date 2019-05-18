#include<stdio.h>

int main()
{
	printf("Enter n: \n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the contents of the array: \n");
	int i = 0;
	for(i = 0;i < n;i++)
		scanf("%d",&arr[i]);

	int j = jump(arr,n);
	if(j != -1)
		printf("Output: %d\n",j);
	else
		printf("Not Possible\n");

	return 0;
}

int jump(int arr[], int n)
{

	int i = 1;
	int max = arr[0];
	int j = arr[0];
	int count = 1;
	if(n <= 1)
		return 0;
	if(arr[0] == 0)
		return -1;

	while(i < n)
	{
		if(i == n-1)
		return count;
		max = max > i+arr[i]?max:i+arr[i];
		j--;
		if(j == 0)
		{
			count++;
			if(i >= max)
				return -1;
			j = max - i;
		}
		i++;
	}
	return -1;
}
