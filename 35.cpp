#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int k,m,n;

    in >> k;
    for(int i=0; i<k; ++i)
    {
	in >> n >> m;
	out << (19*m + (n+239)*(n+366)/2) << '\n';
    }
    
    return 0;
}
