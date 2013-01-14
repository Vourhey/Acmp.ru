#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, h;

    in >> n;
    for(int i = 0; i<n; ++i)
    {
	in >> h;
	if(h <= 437) {out << "Crash " << i+1; return 0;}
    }

    out << "No crash";
    
    return 0;
}
