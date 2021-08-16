#include <iostream>
using namespace std;

int twoSet (int max)	{ return max*=0.80; }	// 80%
int threeSet (int max)	{ return max*=0.65; }	// 65%
int fourSet (int max)	{ return max*=0.50;	}	// 50% 
int fiveSet (int max)	{ return max*=0.35; }	// 35%
int sixSet (int max)		{ return max*=0.20; }	// 20%

int main()
{
	int max, num;

	cout << "\tРаспределение максимальноого кол-ва повторений на подходы\n\n";

	cout << "Ваше кол-во повторений: ";
	cin >> max;
	cout << "Количество подходов от 2 до 6: ";
	cin >> num;

	switch(num)
	{
	case 2: cout << "По " << twoSet (max) << ".\n"; break;
	case 3: cout << "По " << threeSet (max) << ".\n"; break;
	case 4: cout << "По " << fourSet (max) << ".\n"; break;
	case 5: cout << "По " << fiveSet (max) << ".\n"; break;
	case 6: cout << "По " << sixSet (max) << ".\n"; break;
	default:
		cout << "\nчто то пошло не так =(\n";
	}

	return 0;
}
