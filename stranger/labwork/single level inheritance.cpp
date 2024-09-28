#include<iostream>
using namespace std;

class A{
	public:
		Myfun()
		{
			cout<<"This is Parents class"<<endl;
		}
};

class B:public A{
	public:
		Myfun1()
		{
			cout<<"This is Child class"<<endl;
		}
};

main()
{
	B obj;
	obj.Myfun();
	obj.Myfun1();
}
