/*to determine the amount of scholarship a person gets*/

#include <iostream>
using namespace std;

int main ()
{
	char program;
	double cGPA;
	float amount;
	
	cout << "What is your program?" << endl;
	cout << " \nD - DIPLOMA ";
	cout << " \nB - BACHELOR ";
	cout << " \nM - MASTER ";
	cout << "\n\nEnter program : ";
	cin >> program;
	
	do
	{
		cout << "\nINVALID INPUT. ENTER AGAIN.";
		cout << "\nEnter program : ";
		cin >> program;
	}
	while (program != 'D' && program != 'B' && program != 'M');

	
	cout << "\nWhat is your CGPA ? ";
	cout << "\nEnter CGPA : ";
	cin >> cGPA;


	if (program == 'D')
	{
		if (cGPA < 3.00)
		{
			amount = 5000;
		}
		else if (cGPA >= 3.00)
		{
			amount = 7000;
		}
	}
	else if (program == 'B')
	{	
		if (cGPA < 3.30)
		{
			amount = 6000;
		}
		else if (cGPA >= 3.30)
		{
			amount = 10000;
		}	
	}
	else if (program == 'M')
	{
		if (cGPA < 3.50)
		{
			amount = 9000;
		}
		else if (cGPA >= 3.50)
		{
			amount = 12000;
		}	
	}
	
	cout << "\nThe amount of scholarship you'll get : " << "RM" << amount;
	
	return 0;
}
