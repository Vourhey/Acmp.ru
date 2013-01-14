#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, a, sum = 0;

    in >> n;

    for(int i=0; i<n; ++i)
    {
	in >> a;
	if(i >= n-3) sum += a;
    }

    out << sum;

    return 0;
}

