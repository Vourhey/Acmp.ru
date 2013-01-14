#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out("output.txt");
    char str[7] = "";
    int p = 0;

    in >> str >> p;
    if(!strcmp("Home", str))
    {
//	if(p == 1 || !(p % 2))
	    out << "YES";
//	else
//	    out << "NO";
    }
    else
    {
	if(p % 2) out << "YES";
	else out << "NO";
    }
    return 0;
}
