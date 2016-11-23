#include <iostream>
//#include <id3>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "argc: " << argc << endl;

	cout << "argv: ";
	for(int i = 0; i < argc; i++)
		cout << argv[i] << " ";
	cout << endl;

	return 0;
}

/*
 * OUTPUT:
 * ./a.out a
 * argc: 2
 * argv: ./a.out a 
 *
 * ./a.out a b c d e f g
 * argc: 8
 * argv: ./a.out a b c d e f g
 */
