#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, min, max, t;

    in >> n;
    in >> t;
    min = max = t;
    --n;
    for(;n>0; n--)
    {
	in >> t;
	if(t<min) min = t;
	if(t>max) max = t;
    }

    out << min << ' ' << max;
    
    return 0;
}
