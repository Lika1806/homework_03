#include <stdio.h>
#include <limits.h>


int main()
{
	int n=0;
	int arr[100];
	int sum=0, sum_of_odd=0;
	printf("How many numbers do you want to input?: ");
	scanf("%d", &n);
	printf("Input numbers: ");
	int min1=INT_MAX, min2=INT_MAX, max=INT_MIN;
	float av=0;
	for (int i=0; i<n; i++)	
	{
		scanf("%d", &arr[i]);
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min2)
		{
			if(arr[i]<min1)
			{
				min2=min1;
				min1=arr[i];
			}
			else
				min2=arr[i];
		}
		
		if(arr[i]%2==1)
			sum_of_odd+=arr[i];
		sum+=arr[i];


	}
	
	av=sum/n;
	printf("1. The highest number is: %d\n", max);
	printf("2. The lowest number is: %d\n", min1);
	printf("3. A sum of odd numbers equals to: %d\n", sum_of_odd);
	printf("4. The arithmetic average of numbers equals to: %f\n", av);
	printf("5. A second lowest number is: %d\n", min2);
	return 0;

}
