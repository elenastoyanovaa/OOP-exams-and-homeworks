#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	Hex a("123");
	Hex b("145");

	////Hex f = b / a;
	////cout << (a < b) << endl;
	////cout << (a > b) << endl;
	////cout << (a <= b) << endl;
	////cout << (a >= b) << endl;
	////cout << (a == b) << endl;
	////cout << (a != b) << endl;
	//e.print();
	//f.print();
	
	Hex f = a+b;
	f.print();


	return 0;
}
