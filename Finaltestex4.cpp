#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std; 
int main()
{
	float a, b, c, delta, x1, x2;
	cout << "Nhap gia tri a= ";
	cin >> a;
	cout << "Nhap gia tri b=";
	cin >> b;
	cout << "Nhap gia tri c=";
	cin >> c;
	if (a == 0)
	{
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh vo so nghiem" << endl;
			}
			else {
				cout << "phuong trinh vo nghiem" << endl;
			}
		}
		else {
			cout << "Phuong trinh co 1 nghiem duy nhat" << -c / b << endl;
		}
	}
	else {
		delta = b * b - 4 * c * c;
		if (delta > 0) {
			x1 = (b + sqrt(delta)) / (2 * a);
			x2 = (b - sqrt(delta)) / (2 * a);
			cout << "Nghiem thu nhat x1= " << x1 << endl;
			cout << "Nghiem thu hai x2= " << x2 << endl;
		}
		else if (delta == 0)
		{
			cout << "Phuong trinh co nghiem kep x1=x2= " << -b / (2 * a) << endl;
		}
		else {
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}
	return 0;
}

