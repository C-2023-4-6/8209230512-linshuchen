#include<iostream>
/*程序名：2.5
功能：统计一句话中英文字母数字空格的个数*/
using namespace std;
int main() {
	int a = 0, b = 0, d = 0, z = 0;
	char c='c';
	cout << "请输入一段英文或数字，以回车结束" << endl;
	for (;c!='\n'; ) {
		c = getchar();

		if (48 <= int(c) && int(c) <= 57)
		{
			a++;
		}
		else if ((65 <= int(c) && int(c) <= 90) || (97 <= int(c) && int(c) <= 122))//用ASCII码统计字母
		{
			b++;
		}
		else if (c == 32)//空格ASCII码是32
		{
			d++;
		}
		else {
			z++;
		}//其他字符
	}

	cout << "数字有" << a << "\n" << "字母有" << b << "\n" << "空格有" << d << "\n" << "其他字符有(不包括换行符)" << z-1 << endl;
}