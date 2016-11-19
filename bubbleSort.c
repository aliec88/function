#include <stdio.h>
void BubbleSort(int * arr,int arrlength)
{
	int flag=0;
	int n=0;
	int t=0;
	loop:
	while(n<(arrlength-1))
	{
		if (arr[n]>arr[n+1])
		{
			t=arr[n];
			arr[n]=arr[n+1];
			arr[n+1]=t;
			flag++;
		}
		n++;		
	}
	if (flag!=0)
	{
		flag=0;
		n=0;
		goto loop;
	}
}
int main()
{
	int i=0;
	int arr[8]={9,8,7,6,5,4,3,2};	
	BubbleSort(arr,8);
	for (i;i<8;i++)
	{
		printf("%d ,",arr[i]);
	}
	
	return 0;
}