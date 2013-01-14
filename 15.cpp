#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, c = 0, t;

    in >> n;

    n = n*n;
    for(int i=0; i<n; ++i)
    {
	in >> t;
	if(t) ++c;
    }

    out << (c/2);
    
    return 0;
}
