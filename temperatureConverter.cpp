// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <vector>

void temperature_converter(const int &temp_start, const int &temp_end, const int& step) {
    std::cout << "Celsius, Fahrenheit" << std::endl;
    int limit = std::ceil(abs(temp_start-temp_end)/step);

	for (int i = 0; i < limit;i++) {
        int T_celsius = temp_start + i*step;
        double T_fahrenheit = T_celsius*9./5.+32;
		std::cout << T_celsius << " " << T_fahrenheit << std::endl;
	}
}

int main()
{
	int T_start = 10, T_high = 50, step = 2;
	temperature_converter(T_start, T_high, step);

    return 0;
}

