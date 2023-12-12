/*程序名：4-2.2.3
功能：观察指针并排序*/
#include<iostream>
using namespace std;
int pai(int s[],int size)
{
	for (int i=0;i<size;i++)
	{ 
		for (int j=0;j<size;j++)
		{
			if (s[i] <= s[j])
			{
				int t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
		}

	}
	return 1;
}
int main() {
	int size;
	cout << "Enter size:";
	cin >> size;
	int* list = new int[size];
	cout << "Enter list:" << "\n";
	for (int i = 0;i < size;i++)
	{
		cin >> list[i];
		cout << &list[i] << "\t";
	}
	pai(list, size);
	int* sp = new int[size];
	for (int i = 0;i < size;i++)
	{
		sp[i] = list[i];
	}
	cout << "排序后：" << endl;
	for (int i = 0;i < size;i++)
	{
		cout << sp[i]<<"\t";
	}
	delete[]sp;
	return 0;
}