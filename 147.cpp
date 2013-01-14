#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, a=0, b=1, c;

    in >> n;

    for(int i=1; i<n; ++i)
    {
	c = a + b;
	a = b;
	b = c;
    }

    out << c;
    return 0;
}

