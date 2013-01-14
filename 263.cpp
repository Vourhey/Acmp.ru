#include <fstream>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out("output.txt");
    int n, i, j;

    in >> n >> i >> j;
    if(i > j)	// swap
    {
	int tmp = i;
	i = j;
	j = tmp;
    }
    int s1 = j - i - 1;
    int s2 = n + i - j - 1;
    out << (s1 < s2 ? s1 : s2);
    return 0;
}

