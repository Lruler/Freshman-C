/*二分查找，数组中找到指定的值返回下标，如果没找到就返回-1*/
#include<stdio.h>
#define N 10
int search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k ,i;
	scanf("%d",&k);
	i = search(arr, k, N);
	printf("%d",i);
	return 0;
}
