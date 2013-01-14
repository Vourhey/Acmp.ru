#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b, nok;

    in >> a >> b;

    while(b) b^=a^=b^=a%=b;

    out << a;
    
    return 0;
}

