#include "m_2.h"

void fun_sort(int aa[]) {
	int ind_5 = 1;
	int id = 0;
	int ind_6 = 1;
	do {

		for (int i = 0; i < 99-1; i++) {
			if (aa[i] > aa[i + 1]) {
				ind_6 = aa[i];
				aa[i] = aa[i + 1];
				aa[i + 1] = ind_6;
				id = 1;
			}
			ind_5 = 2;
		}
		if (id == 0) {
			ind_5 = 0;
		}
		id = 0;
	} while (ind_5 != 0);


}