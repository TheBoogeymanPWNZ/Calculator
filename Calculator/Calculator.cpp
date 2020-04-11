#include<iostream>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "ru");
	using namespace std;

	int calc;
	cout << "I welcome you in the simplest calculator" << endl;
	cout << "Calculator - 1" << endl;
	cout << "Discriminant - 2" << endl;
	cout << "Finding a percentage - 3" << endl;
	cout << "\nPlease select an operation - ";
	cin >> calc;


	if (calc == 1)
	{
		int  Selection;
		float  one_chislo, two_chislo;
		cout << "\nEnter the first number - ";
		cin >> one_chislo;
		cout << "Enter the second number - ";
		cin >> two_chislo;

		cout << "\nChoose a math operation" << endl <<
			"1 - Addition" << endl <<
			"2 - Subtraction" << endl <<
			"3 - Multiplication" << endl <<
			"4 - Division" << endl <<
			"5 - Remainder of the division" << endl;

		cin >> Selection;

		switch (Selection)
		{
		case 1:
			cout << "\nAddition result = " << one_chislo + two_chislo << endl;
			break;
		case 2:
			cout << "\nSubtraction result = " << one_chislo - two_chislo << endl;
			break;
		case 3:
			cout << "\nMultiplication result = " << one_chislo * two_chislo << endl;
			break;
		case 4:
			cout << "\nDivision result = " << one_chislo / two_chislo << endl;
			break;
		case 5:
			cout << "\nRemainder of the division = " << (int)one_chislo % (int)two_chislo << endl;
			break;
		default:
			cout << "\nThis command is missing" << endl;
			break;
		}
	}
	if (calc == 2)
	{
		float a, b, c, Dis, X1, X2;

		cout << "\nEnter value a = ";
		cin >> a;
		cout << "Enter value b = ";
		cin >> b;
		cout << "Enter value c = ";
		cin >> c;

		Dis = b * b - 4 * a * c;

		if (Dis < 0)
		{
			cout << "\nНет вещественных корней \n";
			X1 = -b / (2 * a);
			X2 = sqrt(fabs(Dis)) / (2 * a);
			cout << "\nКомплексные корни уравнения \n";
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
			cout << "\nВещественные корни уравнения \n";
			cout << a << "X^2 + " << b << "X + " << c << " = 0 \n";
			cout << "X1 = " << X1 << "\t X2 = " << X2 << "\n";
		}
	}

	if (calc == 3)
	{
		int  Selection;
		float a, b, c, answer;
		cout << "\nНайти ваш процент от 100% - 1" << endl;
		cout << "Найти 100% - 2" << endl;
		cout << "Найти процент от 100% - 3" << endl;
		cin >> Selection;

		switch (Selection)
		{
		case 1:
			cout << "\nВведите число равное 100% = ";
			cin >> a;
			cout << "Введите находимый процент = ";
			cin >> b;
			
			cout << "\nОтвет: " << a*(b/100) << endl;
			break;

		case 2:
			cout << "\nВведите процент = ";
			cin >> b;
			cout << "Введите число соответствующее проценту = ";
			cin >> c;
			
			cout << "\nОтвет: " << c / (b / 100) << endl;
			break;

		case 3:
			cout << "\nВведите число равное 100% = "; 
			cin >> a;
			cout << "Введите число соответствующее находимому проценту = ";
			cin >> c;

			cout << "Ответ: " << (c / a) * 100 << endl;
			break;
		default:
			cout << "\nДанная команда отсутствует" << endl;
			break;

		}
	}

	if (calc > 3)
	{
		cout << "This operation is missing" << endl;
	}
}