#include <fstream>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out("output.txt");
    int n, k;
    int sum = 0, mul = 1;

    in >> n >> k;

    int tmp;
    while(n)
    {
	tmp = n % k;
	n /= k;
	sum += tmp;
	mul *= tmp;
    }

    out << (mul - sum);
    return 0;
}

