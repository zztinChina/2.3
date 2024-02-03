#include<stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	int right = 0;
	int left = sz - 1;
	int tem = 0;
	while (right < left)
	{
		tem = arr[right];
		arr[right] = arr[left];
		arr[left] = tem;
		right++;
		left--;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}
