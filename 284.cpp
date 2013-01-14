#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, j;
    long long *mas;

    in >> n;
    mas = new long long[n];

    for(int i=0; i<n; ++i)
	in >> mas[i];

    in >> m; // число подмассивов

    for(int i=0; i<m; ++i)
    {
	in >> k >> j;
	--k; --j;
	while(k <= j)
	    out << mas[k++] << ' ';
	out << '\n';
    }

    delete mas;

    return 0;
}

