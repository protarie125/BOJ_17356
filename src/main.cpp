#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a, b;
	cin >> a >> b;

	cout << fixed << setprecision(5) << 1 / (1 + pow(10, (b - a) / 400));

	return 0;
}