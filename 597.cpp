#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int r1, r2, r3;

    in >> r1 >> r2 >> r3;

    if(r1 >= (r2+r3)) out << "YES";
    else out << "NO";
    
    return 0;
}
