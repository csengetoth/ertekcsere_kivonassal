#include "std_lib_facilities.h"

int main()
{
	int a=6;
	int b=9;
	int c=a-b;
	cout<<"Az a változó értéke: "<<a<<'\n';
	cout<<"A b változó értéke: "<<b<<'\n';
	cout<<"a és b különbsége: "<<c<<'\n';
	a-=c;
	b+=c;
	cout<<"Az uj a változó értéke: "<<a<<'\n';
	cout<<"Az uj b változó értéke: "<<b<<'\n';
	return 0;
}
