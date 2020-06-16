#include <iostream>
using namespace std;

int main()
{
	double num;

	cout << ("Enter a postive or negative number, or enter 0 : ");
	cin >> num;
	cout << endl;
	cout << (" the number you just entered is : ") << num
		<< ", and for your info this is a ";

	if (num == 0)
		cout << " zero which means lack of value" << endl;
	else if (num > 0)
		cout << "postive number, greater than zero" << endl;
	else
		cout << "negative number or less than zero" << endl;
	system("pause");
	return 0;

}