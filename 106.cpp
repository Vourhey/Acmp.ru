#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, ed = 0, z = 0;
    int t;

    in >> n;
    for(int i=0; i<n; ++i)
    {
	in >> t;
	if(t) ++ed;
	else ++z;
    }

    out << (ed > z ? z : ed);
    
    return 0;
}
