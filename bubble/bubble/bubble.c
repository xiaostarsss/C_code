#define _CRT_SECURE_NO_WARNINGS 1






#include<stdio.h>


void bubble(int arr[],int sz)
{
	int i, j,tmp=0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
               tmp = arr[j];
			  arr[j] = arr[j + 1];
			  arr[j + 1] = tmp;
			  flag = 0;
			}
		    
		}
		if (1 == flag)
		{
			break;
		}
	}
}



int main()
{
int arr[] = {9,2,3,5,4,6,7,0,8,1};
int sz = sizeof(arr) / sizeof(arr[0]);
int i = 0;
bubble(arr,sz);
for (i = 0; i < sz; i++)
{
	printf("%d ",arr[i]);
}

	return 0;
}
