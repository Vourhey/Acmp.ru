#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int s, p;

    in >> s >> p;

    int a = (s - sqrt(double(s*s - 4*p))) / 2;
    int b = (s + sqrt(double(s*s - 4*p))) / 2;

    out << a << ' ' << b;
    
    return 0;
}
