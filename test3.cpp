// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

void test_accumulate();
void test_foreach();

int main()
{
	test_foreach();

    return 0;
}

void test_accumulate()
{
	const int N = 8;

	int a[N] = { 4, 12,3,6, 10, 7, 8, 5 }, sum = 0;
	sum = accumulate(a, a + N, sum);
	cout << "Sum of all elements: " << sum << endl;
	cout << "1000 + a[2] + a[3] + a[4] = "
		<< accumulate(a + 2, a + 5, 1000) << endl;
}

class display {
private:
	int i;
public:
	display() :i(0) {}
	void operator()(int x)
	{
		cout << "a[" << i++ << "] = " << x << endl;
	}
};

void test_foreach()
{
	const int N = 4;
	int a[N] = { 1234, 5432, 8943, 3346 };
	for_each(a, a + N, display());
}
