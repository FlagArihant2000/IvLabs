#include<stdio.h>
#include<math.h>

int main()
{
	printf("Enter the value of n: \n");
	int n;
	scanf("%d",&n);
	printf("Enter the value of m: \n");
	int m;
	scanf("%d",&m);
	int price[m],length[m];
	int i = 0;
	printf("Enter the prices: \n");
	for(i = 0; i < m; i++)
		scanf("%d",&price[i]);
	printf("Enter the lengths: \n");
	for(i = 0; i < m; i++)
		scanf("%d",&length[i]);

	float rate[m];
	for(i = 0; i < m; i++)
		rate[i] = (float)price[i]/(float)length[i];
	
	sort(price, length,rate,m);

	maxi(price,length,rate,n,m);
	return 0;
}

void sort(int price[], int length[], float rate[], int m)
{
	int i = 0,j = 0;
	float t;
	int u;
	for(i = 0; i < m-1; i++)
	{
		for(j = 0; j < m-i-1; j++)
		{
			if(rate[j] < rate[j+1])
			{
				u = price[j];
				price[j] = price[j+1];
				price[j+1] = u;
				u = length[j];
				length[j] = length[j+1];
				length[j+1] = u;
				t = rate[j];
				rate[j] = rate[j+1];
				rate[j+1] = t;
			}
		}
	}
}

void maxi(int price[], int length[],float rate[], int n, int m)
{
	int i = 0;int j = 0;
	int maxVal = 0;
	while(i != n && j < m)
	{
		i = i + length[j];
		if(i <= n)
		{
			maxVal = maxVal + rate[j]*length[j];
		}
		else if(i > n)
		{
			i = i - length[j];
			j++;
			continue;
		}

	}
printf("Maximum price: %d\n",maxVal);
}
