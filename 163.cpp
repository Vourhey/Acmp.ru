#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char pr[6] = "";
    in >> pr;

    int a,b;
    if(pr[0] == 'x')
    {
        a = pr[2] - '0';
	if(pr[1] == '-')
	    a = -a;
	b = pr[4] - '0';
	out << b - a;
    }
    else if(pr[2] == 'x')
    {
	a = pr[0] - '0';
	b = pr[4] - '0';
	a = b - a;
	if(pr[1] == '-')
	    a = -a;
	out << a;
    }
    else
    {
	a = pr[0] - '0';
	b = pr[2] - '0';
	if(pr[1] == '-')
	    out << (a-b);
	else
	    out << (a+b);
    }
    return 0;
    
}

