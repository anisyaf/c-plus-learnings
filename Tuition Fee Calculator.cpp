
#include <iostream>
#include <string.h>

using namespace std;
float calcCredit (int);
float calcFee (int, char, char);
int main ()
{
	char program, field;
	char studentID[50];
	char name[100];
	int tot;
	float kiraCredit, kiraFee;
	
	cout << "P - Diploma" << endl << "G - Degree" << endl;
	cout << "Enter the type of study : ";
	cin >> program;
	
	cout << "\nC - Social Science" << endl << "T - Science Technology" << endl; 
	cout << "Enter the field of study : ";
	cin >> field;
	
	cout << "\nEnter your Student ID : ";
	cin >> ws;
	cin.getline(studentID, 50);
		
	cout << "\nEnter name : ";
	cin.getline(name, 50); 
	
	kiraCredit = calcCredit (tot);

	kiraFee = calcFee (kiraCredit, program, field); //SALAH DEKAT SINI! I put tot at first, but Fahmi tukar jadi kiraCredit :))
	
	cout << "Name : " << name;
	cout << "\nStudent ID: " << studentID;
	cout << "\nTotal Credit: " << kiraCredit;
	cout << "\nTuition Fee: RM" << kiraFee;
	
	return 0;
}

float calcCredit (int total)
{
	cout << "Enter the credit hour for 5 subjects (2 - 4 hours) : ";
	
	int creditHour[5];
		
	for (int i = 0; i < 5; i++)
	{
		cin >> creditHour[i];
		
		total = total + creditHour[i];
	}
	
	cout << endl;
	return total;
}

float calcFee (int jumlah, char prog, char bidang)
{
	double fee, totalfees;
	
	if (prog == 'P')
	{
		if (bidang == 'C')
		{
			fee = (50 - (0.15 * 50));
		}
		else
		{
			fee = (60 - (0.15 * 60));
		}
	}
	else 
	{
		if (bidang == 'C')
		{
			fee = 50;
		}
		else 
		{
			fee = 60;
		}
	}
		
	totalfees = fee * jumlah;
	
	return totalfees;
}
