#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a,b,c;

    in >> a >> b;
    c = a+b - 1;

    out << (c - a) << ' ' << (c - b);
    
    return 0;
}
