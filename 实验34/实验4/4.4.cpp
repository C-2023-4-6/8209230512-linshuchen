/*程序名：4.4.cpp
功能：将两个排列好的数列合成一个*/
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int a = 0, b = 0,i;
	for (i = 0;i <size1 + size2;i++)
	{
		
		if (list1[a] <= list2[b]&&a<size1)
		{
			list3[i] = list1[a];
			a++;
		}
		else
		{
			list3[i] = list2[b];
			b++;
		}
	}
}
int main()
{
	int size1, size2, size3;
	cout << "Enter size1:";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "Enter list1:";
	for (int y = 0;y < size1&&y<80;y++)
		cin >> list1[y];
	cout << "Enter size2:";
	cin >> size2;
	cout << "Enter list2:";
	int* list2 = new int[size2];
	for (int y = 0;y < size2&&y<80;y++)
		cin >> list2[y];
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	cout << "Merge list:";
	for (int i = 0;i < size1 + size2;i++)
		cout << list3[i]<<"\t";
	delete[]list1, list2, list3;
	return 0;
}