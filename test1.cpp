#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	const int N = 8;

	int a[N] = { 4, 12,3,6, 10, 7, 8, 5 }, sum = 0;
	sum = accumulate(a, a + N, sum);
	cout << "Sum of all elements: " << sum << endl;
	cout << "1000 + a[2] + a[3] + a[4] = "
		<< accumulate(a + 2, a + 5, 1000) << endl;
    return 0;
}

