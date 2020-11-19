#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, xp, xk, dx, F, x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a * x * x + b;
		else
			if (b = 0 && x > 0)
				F = (x - a) / (x - b);
			else
				F = x / c;
		cout << "|" << setw(7) << setprecision(2) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}