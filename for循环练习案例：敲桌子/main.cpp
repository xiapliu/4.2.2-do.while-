//敲桌子
//只要到含有7的，或者是7的倍数，就打印敲桌子，其余数字直接打印输出
#include<iostream>
using namespace std;
int main()
{
	
	int a = 0,b=0,c=0;
	
	//1、输出1-100的所有数字
	for (int num = 0;num < 100;num++)
	{
		
		//2、将数字的各个位数上的数字取出来
		a = num % 10;//个位取出
		b = num / 10;//十位取出
		//3、将7的倍数取出来
		c = num % 7;
		if (a == 7 || b == 7 || c == 0)	//4、判断是否满足条件,打印敲桌子
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}



	return 0;
}
