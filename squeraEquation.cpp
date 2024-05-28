#include "squeraEquation.h"
#include<iostream>
using namespace std;

squeraEquation::squeraEquation(double a, double c, double b)
{

		if (a == 0) {
			throw new std::invalid_argument("");
		}
		this->a = a;
		this->b = b;
		this->c = c;
}
