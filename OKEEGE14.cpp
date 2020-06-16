#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << ("Line 1: Enter a string: ");
	cin.get(ch);
	cout << endl;
	cout << "line 4 : after first cin.get (ch);"
		<< "ch = " << ch << endl;

	cin.get(ch);
	cout << "Line 6 : after second cin.get(ch);"
		<< "ch = " << ch << endl;

	cin.putback(ch);
	cin.get(ch);
	cout << "Line 9: After putback and then"
		<< "cin.get(ch); ch = " << ch << endl;

	ch = cin.peek();
	cout << "Line 11 : after cin.peek(); ch = "
		<< ch << endl;

	cin.get(ch);
	cout << "Line 13: after cin.get(ch); ch = "
		<< ch << endl;

	cin.get(ch);
	cout << "line 14: after cin.get(ch); ch = "
		<< ch << endl;

	cin.get(ch);
	cout << "Line 16: after cin.get(ch); ch = "
		<< ch << endl;

	cin.putback(ch);
	cin.get(ch);
	cout << " Line 18: after putback and then "
		<< "cin.get(ch); ch = " << ch << endl;

	ch = cin.peek();
	cout << "Line 11: after cin.peek(); ch = "
		<< ch << endl;

	cin.putback(ch);
	cin.get(ch);
	cout << "Line 21: after putback and then "
		<< "cin.get(ch); ch = " << ch << endl;

	system("pause");
	return 0;
}