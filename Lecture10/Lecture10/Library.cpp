#include "Library.h"

Math::Math(int a, int b) : a(a), b(b) {}  // a(a) is actually this->a(parameter a)

int Math::sum() {
	return this->a + this->b;
}

int sum(int a, int b) {
	return a + b;
}