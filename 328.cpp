#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, sum = 0;

    in >> n;

    for(int i=1; i<=n; ++i)
    {
	for(int j=0; j<=i; ++j)
	{
	    sum += i + j;
	}
    }

    out << sum;
    
    return 0;
}

