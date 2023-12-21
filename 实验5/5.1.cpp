#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	int Hour( )
	{
		int H;
		cin >> H;
		hour = H;
		return hour;
	}
	int Minute()
	{
		int M;
		cin >> M;
		minute = M;
		return minute;
	}
	int Sec()
	{
		int S;
		cin >> S;
		sec = S;
		return sec;
	}
	void COUT()
	{
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t1;
	cout << "H:" << endl; t1.Hour();
	cout << "M:" << endl; t1.Minute();
	cout << "S:" << endl; t1.Sec();
	t1.COUT();
}