#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i,int j)
	{
		this->x = x + i;
		this->y = y + j;
	}
	void display()
	{
		cout << "after:(" <<"\t" << x << "," << y << ")";
	}
};
int main() {
	Point p1;
	p1.setPoint(1, 3);
	cout << "setPoint(1,3)" << endl;
	p1.display();
	return 0;
}
