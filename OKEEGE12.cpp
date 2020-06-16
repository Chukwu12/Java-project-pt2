#include <iostream>
#include <iomanip>

const double KG = 2.2046;
using namespace std;

int main()
{
	double weight_Kilograms;
	double weight_Pounds;
	cout << "Enter the weight of the person in kilograms";
	cin >> weight_Kilograms;
	cout << endl;
	weight_Pounds = weight_Kilograms * KG;
	cout << fixed << showpoint << setprecision(2);
	cout << "Weight of the person in pounds is : " << weight_Pounds << endl;
	system("pause");
	return 0;
}
