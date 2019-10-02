#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	int intT = 69;
	char charT = '0';
	wchar_t wchar_tT = 90;
	bool boolT = 0;
	float floatT = 8.9;
	double doubleT = 1978.7;

	cout <<"size of int:" << sizeof(int) << endl;
	cout <<"size of char:" << sizeof(char) << endl;
	cout << "size of wchar_t:" << sizeof(wchar_t) << endl;
	cout << "size of bool:" << sizeof(bool) << endl;
	cout << "size of float:" << sizeof(float) << endl;
	cout << "size of double:" << sizeof(double) << endl;

	typedef unsigned long int word;
	word test=4000000000;

	enum perechisl1
	{
		zero, one, two, tree, four, five
	};
	enum perechisl2
	{
		a=15, b, c, d=20
	};

	perechisl1 foo = four;
	perechisl2 bar = c;
	cout <<"foo + bar="<<foo + bar <<endl;


	struct MyStruct
	{
		int x, y;
		float r;
		char abc;
	};
	cout << "size of MyStruct is " << sizeof(MyStruct)<<endl;
	cout << "size of (int+int+float+char) is 13\n";
	MyStruct uno=
	{54,78,4577.9,'u'};
	cout << "size of x in MyStrucr is "<< sizeof(uno.x) << endl;
	cout << "size of y in MyStrucr is " << sizeof(uno.y) << endl;
	cout << "size of r in MyStrucr is " << sizeof(uno.r) << endl;
	cout << "size of abc in MyStrucr is " << sizeof(uno.abc) << endl;

	cout << "(int)charT: " << static_cast<int> (charT) << endl;
	cout << "(char)intT: " << static_cast<char> (intT) << endl;
	cout << "(int)floatT: " << static_cast<int> (floatT) <<"	!=9"<< endl;

	cout << "name of type doubleT: " << typeid(doubleT).name() << endl;
	cout << "name of type (1234/2): " << typeid(1234 / 2).name()<<endl;
	cout << "name of type (1234/2.0 +15): " << typeid(1234/2.0 +15).name() << endl;
	
	return 0;
}