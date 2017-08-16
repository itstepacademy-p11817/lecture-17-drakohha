#include <iostream>
#include "m_1.h"
#include "m_2.h"
#include <time.h>
#include <stdlib.h>


int main() {
	srand(time(NULL));
	int array_1[999] = { 0 };
	int ind_1 = 0;

	int flag_menu = 1;
	do {
		std::cout << "\n" << "Vvedite nomer zadani9 : 1-5, 0-vuhod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 1) {
			int array_sum[3] = { 0 };
			for (int i = 0; i < 999; i++) {
				array_1[i] = i + 1;
				if (i < 10) {
					array_sum[0] = array_1[i];
				}
				
				if (i >= 10 && i<100) {
					array_sum[0] = array_1[i] / 10;
					array_sum[1] = array_1[i] % 10;
				}
				if (i > 100) {
					array_sum[0] = array_1[i] / 100;
					array_sum[1] = array_1[i] / 10%10;
					array_sum[2] = array_1[i] % 100;
					
				}
				
				if ((array_sum[0] + array_sum[1] + array_sum[2]) % 3 == 0) {
					ind_1++;
					array_sum[0] = 0;
					array_sum[1] = 0;
					array_sum[2] = 0;
				}
				else {
					array_sum[0] = 0;
					array_sum[1] = 0;
					array_sum[2] = 0;
				}
			}
			std::cout << "\n" << "Koli4estvo s4islivuh 4isel rafno= " << ind_1 << "\n";

		}


		if (flag_menu == 2) {
			int array_2[5] = { -1,-5,0,6,7 };
			int array_3[5] = { -6,0,9,0,-8 };
			int array_4[10] = { 0 };
			int ind_2 = 0;


			std::cout << "\n" << "danu ishodnue massivu =" << "\n";
			for (int i = 0; i < 5; i++) {
				std::cout << " " << array_2[i];
			}
			std::cout << "\n";
			for (int i = 0; i < 5; i++) {
				std::cout << " " << array_3[i];
			}
			ind_2 = 0;
			for (int i = 0; i < 5; i++) {
				if (array_2[i] > 0) {
					array_4[ind_2] = array_2[i];
					ind_2++;
				}


			}
			for (int i = 0; i < 5; i++) {
				if (array_3[i] > 0) {
					array_4[ind_2] = array_3[i];
					ind_2++;
				}


			}

			for (int i = 0; i < 5; i++) {
				if (array_2[i] == 0) {
					array_4[ind_2] = array_2[i];
					ind_2++;
					}
				
				}
				for (int i = 0; i < 5; i++) {
					if (array_3[i] == 0) {
					array_4[ind_2] = array_3[i];
					ind_2++;
				}

			}
			for (int i = 0; i < 5; i++) {
				if (array_2[i] < 0) {
					array_4[ind_2] = array_2[i];
					ind_2++;
				}


			}
			for (int i = 0; i < 5; i++) {
				if (array_3[i] < 0) {
					array_4[ind_2] = array_3[i];
					ind_2++;
				}


			}
			std::cout << "\n";
			for (int i = 0; i < 10; i++) {
				std::cout << " " << array_4[i];


			}
			ind_2 = 0;
		}


		if (flag_menu == 3) {
			int m = 0;
			std::cout << "\n" << "vvedite 4islo m= ";
			std::cin >> m;
			int a[99] = { 0 };
			int b[99] = { 0 };
			for (int i = 0; i < 99; i++) {
				a[i] = i;
			}
			fun_mass(a, m, b);
			std::cout << "\n" << "vuvod massiva v kotorom elementu delets9 na 4islo = " << m << "\n";

			for (int i = 0; i < 99 - 1; i++) {
				if (b[i] != 0) {
				std::cout << " " << b[i];
				}
			}




		}


		if (flag_menu == 4) {
			int aa[99] = { 0 };
			for (int i = 0; i < 99; i++) {
				aa[i] = rand()%99;
			}
			std::cout << "\n" << "vhodnoi massiv =";
			for (int i = 0; i < 99; i++) {
				std::cout << " " << aa[i];
			}

			std::cout << "\n" << "vugodnoi massiv =";
			fun_sort(aa);

			for (int i = 0; i < 99; i++) {
				std::cout << " " << aa[i];
			}

		}
	
	
	} while (flag_menu != 0);

}