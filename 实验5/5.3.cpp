#include<iostream>
using namespace std;
class changfx
{
private:
	int length;
	int width;
	int heigth;
public:
	void Enter()
	{
		int a;int b; int c;
		cout << "Enter L:";
		cin >> a;
		cout << "Enter W:";
		cin >> b;
		cout << "Enter H:";
		cin >> c;
		this->length = a;
		this->heigth = b;
		this->width = c;
	}
	int solve()
	{
		int v;
		v = (length * heigth * width);
		cout << "����ǣ�" << v<<endl;
		return v;
	}
};
int main() {
	changfx c1, c2, c3;
	c1.Enter();
	cout << " �ڶ���:" <<endl;
	c2.Enter();
	cout << "������:"<<endl;
	c3.Enter();
	c1.solve();
	c2.solve();
	c3.solve();
	return 0;
}