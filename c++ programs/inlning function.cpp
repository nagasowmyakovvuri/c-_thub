/*#include <iostream>
using namespace std;
inline void fun(int a)//request method -->used for small functions,more faster than function call,can't used for returnig and loopinng ,switch cases
{
	cout<<a;
}
int main()
{
	int a;
	cin>>a;
	fun(a);
	return 0;
}*/
#include<iostream>
using namespace std;
class sample
{
	public:
		int a;//non-static data member
		static int b;//static data member
};
int main()
{
	sample o1,o2;
	o1.a=10;
	o1.b=30;
	o2.a=30;
	o2.b=40;
	cout<<"a value of object1:"<<o1.a<<endl;
	cout<<"a value of object2:"<<o2.a<<endl;
	cout<<"b value of objet1:"<<o1.b<<endl;
	cout<<"b value of object2"<<o2.b<<endl;
	return 0;
}

