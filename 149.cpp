#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, i;

    in >> n;
    int *m = new int[n];

    for(i=0; i<n; i++)
	in >> m[i];

    for(i=n-1; i>=0; i--)
	out << m[i] << ' ';
    
    return 0;
}
