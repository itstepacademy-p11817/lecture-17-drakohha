#include "m_1.h"
void fun_mass(int a[], int m, int b[]) {
	int ind_3 = 0;
	for (int i = 0; i < 99; i++) {
		if (a[i] % m == 0) {
			b[ind_3] = a[i];
			ind_3++;
		}
	}
}
