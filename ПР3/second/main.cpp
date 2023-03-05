#include "rational.h"
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	rational* mas = new rational[n];
	for (int i = 0; i < n; i++) {
		int num_a, num_b;
		cin >> num_a >> num_b;
		mas[i].set(num_a, num_b);
	};
	for (int i = 0; i < n; i++) {
		mas[i].show();
	}
	return 0;
}