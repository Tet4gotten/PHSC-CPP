/*
	Christopher Stultz, Tyler Kennedy, Kevin Feldhaus
	Quiz 4 Encrypt clear text by adding 1 to the ascii value xharters and then shifting left 1 bit
	10/1/2019
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ct = "", et = "", bs = "";
	int a = 0, r = 0, len = 0;


	cout << "Enter clear text: " << endl;
	getline(cin, ct);



	len = ct.length();

	do
	{
		r = a % 2;
		a = a / 2;
		bs.append(to_string(r));

	} while (a > 0);

			cout << bs << endl;

}