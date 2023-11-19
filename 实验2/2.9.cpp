#include<iostream>
using namespace std;
#define d 0.8
int main()
{
	int t(1);int b(2);
	float sum=0, adv;
	for (t = 1;b <= 100;t++,b=b*2)
	{
		
		sum = sum + (d * b);
		
		adv = (sum / t);
	}
	cout << "苹果平均价钱为" << adv << endl;
	return 0;
}