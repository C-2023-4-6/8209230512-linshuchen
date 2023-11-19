#include<iostream>
using namespace std;
int f(int b) {
	b = (b + 1);
	cout << "*" ;
	return b;
}
int main() {
	int i(1), b(0);
	for (i = 1;i <= 5;i++)
	{
		
		switch (i)
		{case 1:
			cout << "*" << endl;break;
		case 2:
			cout << "**" << endl;break;
		case 3:
			cout << "***" << endl;break;
		case 4:
			cout << "****" << endl;break;
		case 5:
			cout << "*****" << endl;break;
		
		}
	}
	return 0;
}