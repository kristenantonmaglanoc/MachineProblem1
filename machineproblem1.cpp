#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main() 
{
	int c, b, ta, u, s, v, x;
	cout << "Enter coefficients b and c: \n\n";
	
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	ta = b + b - b; 
	s = (b * b) - (4 * c);
	u = ta + sqrt(s); 
	u /= 2;
	v = ta - sqrt(s);
	v /= 2;
	
	
	if (s < 0)
		cout << "u and v are complex numbers";
		
	if (s > 0) {
		cout << "\nYour integers are: \n\n" 
		<< "u = " << u << endl;
		cout << "v = " << v << endl;
		cout << "\n(x + (" << u << "))(x + (" << v << "))";
		x = pow (s, 2);
		x % s == 0;
		cout << "\nu and v are integers\n" << "\nThe polynomial is factorable";
	}
	else {
		cout << "\nu and v are not integers\n" << "\nThe polynomial is not factorable";
	}
		
	getch();
	return 0;		
}
