#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    int i, j;
    int *k;
    int c;

    in >> n >> m;

    k = new int[n];
    for(c = 0; c < n; ++c)
	k[c] = 0;

    for(c = 0; c < m; ++c)
    {
	in >> i >> j;
	++k[i-1];
	++k[j-1];
    }

    for(c = 0; c < n; ++c)
	out << k[c] << ' ';
    
    return 0;
}
