#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a,b,c;

    in >> a >> b >> c;
    if(a*b == c) out << "YES";
    else out << "NO";
    
    return 0;
}
