// #4153 직각삼각형

#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, c = 1;

	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		else if ((a*a) + (b*b) == (c*c) || (b*b) + (c*c) == (a*a) || (c*c) + (a*a) == (b*b))
			cout << "right\n";
		else
			cout << "wrong\n";
	}

	return 0;
}
