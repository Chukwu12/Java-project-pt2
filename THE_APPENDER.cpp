#include <iostream>
#include <string>
using namespace std;

int main() {

	char line;
	cout << "Decrypt this code: ";
	cout << endl;

	cin >> line;
	cout << line;

	cin.get(line);
	cout << line;


	cin.putback(line);
	cin.get(line);
	cout << line;




	cin.ignore();
	cin.ignore();
	cin.ignore();
	cin.get(line);
	cout << line;


	cin.get(line);
	cout << line;


	cin.get(line);
	cout << (line);

	cin.get(line);
	cout << (line);





	system("pause");

	return 0;


}