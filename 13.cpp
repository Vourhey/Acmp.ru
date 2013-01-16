#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char n[5], m[5];
    in >> n >> m;

    int b = 0, c = 0;
    for(int i=0; i<4; ++i)
    {
	if(n[i] == m[i])
	{
	    ++b;
	    continue;
	}
	for(int j=0; j<4; ++j)
	    if(n[i] == m[j]) ++c;
    }

    out << b << ' ' << c;

    return 0;
}
