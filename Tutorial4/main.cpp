#include <iostream>
using namespace std;

int main()
{

	double a, z;
	z = 0;
	a = 0;
	cin >> a;
	while (true)
	{
		if (a == -1)
			break;

		z += a;
		cin >> a;

	}
	cout << "The result is " << z << endl;
	system("pause");
	return 0;

}