#pragma once  //this makes sure this file is only defined once, it prevents infinite define situations

class Math {
	private:
		int a{};
		int b{};

	public:
		Math(int a, int b);

		int sum();
};

int sum(int a, int b);