#include <iostream>
using namespace std;

int main()
{
	char letter;
	int digit, num;

	cout << "Program to convert letters to their  " << "corresponding telphone digits" << endl;

	cout << "To stop the program enter #" << endl;

	cout << "Enter a letter:  ";
	cin >> letter;
	cout << endl;

	while (letter != '#')
	{
		cout << "the letter you entered is : " << letter;
		cout << endl;

		num = static_cast<int>(letter)
			- static_cast<int>('A');
		cout << "The position of the letter in the alphabet is ...  " << num << endl;

		if (0 <= num && num < 26)
		{
			digit = (num / 3) + 2;

			if (((num / 3 == 6) || (num / 3 == 7))
				&& (num % 3 == 0))
				digit = digit - 1;

			if (digit > 9)
				digit = 9;

			cout << "The corresponding telephone digit is ... " << digit << endl;
		}
		else
			cout << "Invalid input." << endl;

		cout << "\nEnter another uppercase"
			<< "Letter to find its corresponding"
			<< "telephone digit." << endl;
		cout << "To stop the program enter # "
			<< endl;

		cout << "Enter a letter: ";
		cin >> letter;
		cout << endl;
	}//end while

	system("pause");
	return 0;
}


