#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a,b;

    in >> a >> b;

    if(a == b) out << '=';
    else if(a < b) out << '<';
    else out << '>';
    
    return 0;
}
