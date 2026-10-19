#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

double Q(double X) {
	if (X < 55) {
		return 4 * log(X - 55 + 2) + 15;
	}
	else if (X >= 55 && X <= 80) {
		return (X - 67.5) * (X - 67.5) / 5 + 45;
	}
	else {
		return 2 * (X - 80) + 60;
	}
}

int main() {
	setlocale(LC_ALL, "RUS");
	double X;
	printf("¬ведите X: ");
	scanf("%1f", &X);
	printf("Q(%.2f) = %.4f\n", X, Q(X));
	return 0;
}