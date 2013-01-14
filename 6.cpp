#include <fstream>
using namespace std;

#define EXIT { out << "ERROR"; return 0; }

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char c1, d1, c2, d2;

    char c;
    c = in.get();
    if(!('A' <= c && c <= 'H')) EXIT

    c1 = c;
    c = in.get();
    if(!('1' <= c && c <= '8')) EXIT

    d1 = c;
    c = in.get();
    if(c != '-') EXIT

    c = in.get();
    if(!('A' <= c && c <= 'H')) EXIT
    c2 = c;

    c = in.get();
    if(!('1' <= c && c <= '8')) EXIT
    d2 = c;

    if(((c1 == c2-1 || c1 == c2+1) &&
	(d1 == d2+2 || d1 == d2-2)) ||
       ((c1 == c2-2 || c1 == c2+2) &&
	(d1 == d2+1 || d1 == d2-1)))
    {
	out << "YES";
    }
    else out << "NO";
    return 0;

}

