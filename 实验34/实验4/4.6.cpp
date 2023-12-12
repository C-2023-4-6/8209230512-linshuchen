/*程序名*cpp
功能：统计字符串中每个字母出现的次数*/ 
#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{ 
	for (int i=0;i<512;i++)
	{
		if (int (s[i]) > 90)
		{
			for (int a = 97;a <= 122;a++)
				if ( int(s[i]) == a) counts[(a - 97)]++;
		}
		else 
		{
			for (int a = 65;a <= 90;a++)
				if (int (s[i]) == a) counts[(a - 65)]++;
		}
	}
	for (int i = 0;i < 26;i++)
	{
		if (counts[i] != 0)
		{
			cout << char (i+97) << ":" << counts[i] << "times" << endl;
		}
	}
}
int main()
{
	int counts[26]{ 0 };
	char s[512];
	cout << "Enter a sttring:";
	for (int i=0;;i++) 
	{
		s[i] = getchar();
		if (s[i] == '\n') break;
	}
	count(s, counts);
}