#include<iostream>
using namespace std;
int main()
{
	//����Ƕ��ѭ��ʵ�־žų˷���

	//��ӡ����
	for (int i = 1;i <= 9;i++)
	{
		/*cout << i << endl;*/
		for (int j = 1;j <= i;j++)//��ӡ����
		{
			cout << j<<"*"<<i<< "=" <<(j*i)<< "  ";
		
		}
		cout << endl;
	}


	return 0;
}