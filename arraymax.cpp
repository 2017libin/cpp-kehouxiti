#include "arraymax.h"
#include <iostream>

using namespace std;

void Array_max::set_value() {
	for (int i = 0; i < 10; ++i)
		cin >> array[i];
}

void Array_max::max_value() {
	max = array[0];
	for (int i = 1; i < 10; ++i)
		if (max < array[i])
			max = array[i];
}

void Array_max::show_value() {
	cout << "max = " << max;
}