#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a1, a2, n, d;

    in >> a1 >> a2 >> n;

    d = a2 - a1;
    out << (a1 + d*(n-1));
    
    return 0;
}
