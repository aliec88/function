#include <stdio.h>
/*�������ܣ��Ը����ַ������������⺬��Ӣ�ģ����ӿ�ʼ����n����ĸ���������ֽ��н�ȡ*/
void stringcat(char*str,int n)
{
	char strTemp[50];
	int i;	
	char t;
	
	for (i=0;i<n;i++)
	{		
		t=str[i]&0x80;   //ascii�����λ����0�������������
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
	char*str="china�й��ҵĹ���good�쳯nice";
	stringcat(str,8);
	return 0;
}