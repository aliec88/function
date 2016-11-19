#include <stdio.h>
char symmetryArray(int*arr,int arrLength)
{
	int i=0;
	while (i<arrLength)
	{
		if (arr[i]!=arr[arrLength-1])
		{
			return 0;
		}
		i++;
		arrLength--;
	}
	return 1;
}
int main()
{
	int arr[8]={9,1,2,3,3,2,1,9};
	char s=symmetryArray(arr,8);
	printf("%d",s);
	return 0;
}