#include <stdio.h>

int main() {
	int a, s, t;
	scanf("%d", &s);
	if (s <= 3500)
		printf("%d", s);
	else {
		a = s - 3500;
		if (a <= 1500)
			a = a * 0.97;
		if (a > 1500 && a <= 4500)
			a = a - 45 - (a - 1500) * 0.1;
		if (a > 4500 && a <= 9000)
			a = a - 45 - 300 - (a - 4500) * 0.2;
		if (a > 9000 && a <= 35000)
			a = a - 45 - 300 - 900 - (a - 9000) * 0.25;
		if (a > 35000)
			a = a - 45 - 300 - 900 - 6500 - (a - 35000) * 0.3;
		printf("%d", a + 3500);
	}
	return 0;
}