#include<iostream>
using namespace std;
class Student {
private:
	int sn;
	int sc;
public:
	
	Student(int a, int b)
	{
		this->sn = a;
		this->sc = b;
	}
	int SC()
	{
		return sc;
	}
	int SN() {
		return sn;
	}
};
int max(Student* s)
{
	Student* t=NULL;
	for (int i = 0;i < 4;i++)
	{
		if (s[i].SC() > s[i + 1].SC())
		{
			t = &s[i];
		}
	}
	return t->SN();
}
int main()
{
	Student s[5]{Student(01,61),Student(02,57),Student(03,77),Student(04,90),Student(05,88)};
	for (int i = 0;i < 5;i++)
	{
		cout << i+1 <<"\t"<< s[i].SC() << "\n";
	}
	cout<<"The max sudents number is"<<max(s);
}
