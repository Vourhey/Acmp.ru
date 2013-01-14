#include <fstream>
using namespace std;

int func(int i)
{
    int r = 1;

    if(i-1 <= 1)
	return r;
    else
    {
	int s = 1;
	--i;
	while(i > s)
	   { ++s; --i; }

    }
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;

    in >> n;

    out << func(n);
    return 0;
}

