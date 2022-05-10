#include<iostream>
using namespace std;
int main()
{
	//利用嵌套循环实现九九乘法表

	//打印行数
	for (int i = 1;i <= 9;i++)
	{
		/*cout << i << endl;*/
		for (int j = 1;j <= i;j++)//打印列数
		{
			cout << j<<"*"<<i<< "=" <<(j*i)<< "  ";
		
		}
		cout << endl;
	}


	return 0;
}