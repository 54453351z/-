#include <stdio.h>

int main() {
	int m, s;
	double t, c;
	scanf("%d %d", &m, &s);
	t = m + s / 60.0;
	if (t >= 0 && t <= 10) {
		c = 100 - 5 * t;
		printf("%.1f", c);
	} else if (t > 10 && t <= 30.0) {
		c = 50 - (t - 10);
		printf("%.1f", c);
	} else if (t > 30 && t <= 50.0) {
		c = 30.0 - (t - 30) / 2.0;
		printf("%.1f", c);
	} else
		printf("20.0");
	return 0;
}