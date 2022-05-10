//do..while语句和while语句的区别在于会先执行一次循环语句

#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	do
	{
		i++;
		cout << i << endl;
	}
	while (i<10);
	return 0;
}