#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a,b;
    
    in >> a >> b;
    out << (a+b);
    return 0;
}
