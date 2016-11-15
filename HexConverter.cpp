#include <stdio.h>
void HexConverter(int jinzhi,int position)
{
	char number[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char result[300];
	int row;
	int i=1;
	int count=0;
	row=position/jinzhi;
	if (row<jinzhi)
	{
		result[0]=number[position%jinzhi];
		result[1]=number[row];
		count=1;
	}else
	{
		result[0]=number[position%jinzhi];
		while(row>=jinzhi)
			{
				result[i]=number[row%jinzhi];
				row/=jinzhi;
				i++;
			}
		result[i]=number[row];
		count=i;
	}
	printf("the %d jinzhi in %d position number is:",jinzhi,position);
	for (i=count;i>=0;i--)
	{
		printf("%c",result[i]);
	}
	printf("\n");
}
int main(_In_ int _Argc, _In_count_(_Argc) _Pre_z_ char ** _Argv, _In_z_ char ** _Env)
{
	HexConverter(2,100);
	HexConverter(8,100);
	HexConverter(16,100);
}