#include<iostream>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "ru");
	using namespace std;

	int calc, Selection;
	cout << "I welcome you in the simplest calculator" << endl;
	cout << "Calculator - 1" << endl;
	cout << "Discriminant - 2" << endl;
	cout << "Please select an operation - ";
	cin >> calc;

	if (calc > 2)
	{
		cout << "This operation is missing" << endl;
	}

	if (calc == 1)
	{
		float  one_chislo, two_chislo;
		cout << "Enter the first number - ";
		cin >> one_chislo;
		cout << "Enter the second number - ";
		cin >> two_chislo;

		cout << "Choose a math operation" << endl <<
			"1 - Addition" << endl <<
			"2 - Subtraction" << endl <<
			"3 - Multiplication" << endl <<
			"4 - Division" << endl <<
			"5 - Remainder of the division" << endl;

		cin >> Selection;

		switch (Selection)
		{
		case 1:
			cout << "Addition result = " << one_chislo + two_chislo << endl;
			break;
		case 2:
			cout << "Subtraction result = " << one_chislo - two_chislo << endl;
			break;
		case 3:
			cout << "Multiplication result = " << one_chislo * two_chislo << endl;
			break;
		case 4:
			cout << "Division result = " << one_chislo / two_chislo << endl;
			break;
		case 5:
			cout << "Remainder of the division = " << (int)one_chislo % (int)two_chislo << endl;
			break;
		default:
			cout << "This command is missing" << endl;
			break;
		}
	}
	if (calc == 2)
	{
		float a, b, c, Dis, X1, X2;

		cout << "Enter value a = ";
		cin >> a;
		cout << "Enter value b = ";
		cin >> b;
		cout << "Enter value c = ";
		cin >> c;

		Dis = b * b - 4 * a * c;

		if (Dis < 0)
		{
			cout << "Нет вещественных корней \n";
			X1 = -b / (2 * a);
			X2 = sqrt(fabs(Dis)) / (2 * a);
			cout << "Комплексные корни уравнения \n";
			cout << a << "X^2 + " << b << "X + " << c << " = 0 \n";
			if (X2 >= 0)
			{
				cout << X1 << " + " << X2 << "i\t";
				cout << X1 << " - " << X2 << "i\t";
			}
			else
			{
				cout << X1 << " - " << fabs(X2) << "i\t";
				cout << X1 << " + " << fabs(X2) << "i\t";
			}
		}
		else
		{
			X1 = (-b + sqrt(Dis)) / (2 * a);
			X2 = (-b + sqrt(Dis)) / (2 * a);
			cout << "Вещественные корни уравнения \n";
			cout << a << "X^2 + " << b << "X + " << c << " = 0 \n";
			cout << "X1 = " << X1 << "\t X2 = " << X2 << "\n";
		}
	}

}