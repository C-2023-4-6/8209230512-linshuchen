/*程序名：4.5
功能：检验子串*/
#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int t, n;
	int i, j, k=0;
	int b[100]{ 0 };
	t = strlen(s1);n = strlen(s2);
	for (i = 0, j = 0;j<n-t;j++)
	{
		if (s1[i] == s2[j])
		{
			for (;i < t;i++, j++)
			{
				if (s1[i] != s2[j]) break;
			}
			if (i == t) { b[k] = j - i;k++; }
		}
	}
	if (i == t) return b[0];
	else return -1;
}
int main()
{
	char s1[100] = "";
	char s2[100] = "";
	cout << "Enter s1:";
	cin >> s1;
	cout << "Enter s2:";
	char c;
	cin >> s2[0];
	for (int i = 1;i < 100;i++)
	{
		c = getchar();
		if (c != '\n') { s2[i] = c; }
		else break;
	}
	cout << "indexOf('" << s1 << "','" << s2 << "')is" << indexOf(s1, s2);
}