#include <fstream>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out("output.txt");
    int a, b, c;

    in >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0)
    {
	out << 0;
	return 0;
    }

    if(a != 0) out << a;
    if(b < 0)
    {
	if(b == -1) out << "-x";
	else out << b << 'x';
    }
    else if(b > 0)
    {
	if(a != 0) out << '+';
	if(b != 1) out << b;
	out << 'x';
    }
    if(c < 0)
    {
	if(c == -1) out << "-y";
	else out << c << 'y';
    }
    if(c > 0)
    {
	if(a != 0 || b != 0)
	    out << '+';
	if(c != 1) out << c;
	out << 'y';
    }

    return 0;
}

