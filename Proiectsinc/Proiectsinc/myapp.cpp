#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		cout << a << "->" << c << endl;
	else {
		hanoi(n - 1, a, c, b);
		cout << a << "->" << c << '\n';
		hanoi(n - 1, b, a, c);
	}
}

int main() {
	int n;
	cout << "Introduceti numarul de discuri: \n";
	cin >> n;
	getchar();

	char a = 'A', b = 'B', c = 'C';
	int put = 1;
	for (int i = 0; i < n; i++)
		put *= 2;
	cout << "Numarul de mutari este: \n";
	cout << put - 1 << endl;
	cout << "Secventa de mutari este: \n";
	hanoi(n, a, b, c);
	return 0;
}