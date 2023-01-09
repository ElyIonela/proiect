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
	
}