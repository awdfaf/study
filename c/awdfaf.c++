#include <iostream>
using namespace std;

int cache[21][21][21];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;                            // Base case

	if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);                // Recursive case 

	if (cache[a][b][c])
		return cache[a][b][c];               // Base case

	if (a < b && b < c) {
		cache[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		return cache[a][b][c];               // Recursive case
	}

	cache[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return cache[a][b][c];                   // Recursive case
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1)
			break;

		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}
}