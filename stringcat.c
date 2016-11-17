#include <stdio.h>
/*函数功能：对给定字符串（可以任意含中英文），从开始到第n个字母或中文文字进行截取*/
void stringcat(char*str,int n)
{
	char strTemp[50];
	int i;	
	char t;
	
	for (i=0;i<n;i++)
	{		
		t=str[i]&0x80;   //ascii表最高位都是0，否则就是中文
		t>>=7;
		if (t!=0)
		{
			strTemp[i]=str[i];	
			strTemp[i+1]=str[i+1];	
			i++;
			n++;
			
		}else
		{
			strTemp[i]=str[i];	
		}
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("%c",strTemp[i]);
	}
}

int main()
{
	char*str="china中国我的故乡good天朝nice";
	stringcat(str,8);
	return 0;
}