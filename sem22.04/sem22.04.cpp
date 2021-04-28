#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>


int* generate(int n) {
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 1000;
	}
	return a;
	delete[] a;
}

int* searchA(int* a, int size, int x) {
	int* b;
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] == x) {
			b = a + i;
			count += 1;
		}
	}
	if (count != 0) return b;
	else return NULL;
}

int searchB(int* a, int size, int x) {
	int* b;
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] == x) {
			b = a + i;
			count += 1;
		}
	}
	if (count != 0) return count;
	else return NULL;
}

int* bin_search(int* start, int* end, int x){
	int* res;
	int count = 0;
	while (start <= end) {
		int* q = start + (end - start) / 2;
		if (*q == x) {
			res = q;
			count += 1;
			}
		if (*q > x) {
			end = q - 1;
			}
		if (*q < x) {
			start = q + 1;
		}
	}
		if (count != 0) return res;
		else return NULL;
	}

void selection_sort(int* l, int* r) {
	for (int* i = l; i < r; i++) {
		int* imin = i;
		for (int* t = i + 1; t < (r + 1); t++) {
			if (*t < *imin)
				imin = t;
		}
		int tmp = *i;
		*i = *imin;
		*imin = tmp;
	}
}



void merge(int* l, int* m, int* r) {
	int it1 = 0;
	int it2 = 0;
	int* temp  = new int[r-l];

	while (((l + it1) < (m + it2)) && ((m + it2) < r)) {
		if (*(l + it1) < *(m + it2)){
			temp[it1 + it2] = *(l + it1);
			it1 += 1;
		}
		else{
			temp[it1 + it2] = *(m + it2);
			it2 += 1;
		}
	}

	while ((l + it1) < m) {
		temp[it1 + it2] = *(l + it1);
		it1 += 1;
	}

	while ((m + it2) < r) {
		temp[it1 + it2] = *(m + it2);
		it2 += 1;
	}

	for (int i = 0; i <= (it1 + it2); i++) {
		*(l + i) = temp[i];
	}
	delete[] temp;
}

void merge_sort(int* l, int* r){
	if (r < l) {
		merge_sort( l, l + (r - l)/2);  
		merge_sort(l + (r - l) / 2 + 1, r); 
		merge( l, l + (r - l) / 2, r);  
	}
}

int main() {
	srand(time(0));
	int n;
	std::cin >> n;
	int* c = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> c[i];
	}
	int* k = &c[n];
	int* m = &c[2];
	merge(c,m, k);
	for (int p = 0; p < n; p++) {
		std::cout << c[p];

	}
	delete[] c;
	return 0;
}