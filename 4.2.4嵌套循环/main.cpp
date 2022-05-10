#include<iostream>
using namespace std;
//嵌套循环
int main()
{
	//外层一次，内层一周
	for (int i = 0;i < 10;i++)//外层循环
	{
		for (int j = 0;j < 10;j++)//内层循环
		{
			cout << "* ";


		}
		cout << endl;

	}
	return 0;
}
