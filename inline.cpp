#include<iostream>
using namespace std;
class chaseoperation
{
	int a,b,add,mul;
	public:
		void get();
		void sum();
		void pro();
};
inline void chaseoperation::get()
{
	cout<<"Enter a value : ";
	cin>>a;
	cout<<"Enter another value : ";
	cin>>b;
}
inline void chaseoperation::sum()
{
	add = a+b;
	cout<<"The sum is:"<<add<<endl;
}
inline void chaseoperation::pro()
{
	mul= a*b;
	cout<<"The product is:"<<mul<<endl;
}
int main()
{
	chaseoperation ch;
	ch.get();
	ch.sum();
	ch.pro();	
}












