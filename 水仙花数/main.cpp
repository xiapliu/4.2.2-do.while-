#include<iostream>
using namespace std;
int main()//求出所有三位的水仙花数，水仙花数是它的各位的三次幂之和等于它本身的数。
{
	//1、将所有的三位数进行输出
	int a = 0,b=0,c=0;
	int num = 100;
	cout << "一百以内的水仙花数为：" << endl;
	do
	{
		//2、在所有三位数当中找到水仙花数
		a = num % 10;//取个位上的数
		b = num / 10 % 10;//取十位上的数
		c = num / 100;//取百位上的数
		//3、判断个位^3+十位^3+百位^3=本身
		if (a * a * a + b * b * b + c * c * c == num)
		{
			
			cout << num << endl;
		}
          num++;
	
	}
	while (num < 1000);
	
	return 0;
}