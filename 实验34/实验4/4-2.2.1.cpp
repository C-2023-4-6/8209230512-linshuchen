/*程序名：4-2.2.1
功能：检验子串*/
#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int t, n;
	int i = 0;
	int j, m, k=0;
	t = strlen(s1);n = strlen(s2);
	for ( j = 0;j < n ;j++)
	{ 
		if (s1[i] == s2[j])
		{
			for (;i < t&&j < n;i++, j++)
			{
				if (s1[i] != s2[j]) break;
			}
			if (i == t) { m = j - t; }
		}
	}
	if (i == t) return m;
	else return -1;
}
int main()
{
	char s1[100] = "";
	char s2[100] = "";
	char c, b;
	cout << "Enter s1:";
	cin >> s1;
	cout << "Enter s2:";
	cin >> s2[0];
	for (int i = 1;i<100;i++)
	{ 
		c = getchar();
		if (c != '\n') s2[i] = c;
		else break;
	}
	cout << "indexof(" << s1 << "," << s2 << ")is"<<"\t" << indexof(s1, s2);
}