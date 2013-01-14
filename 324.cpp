#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int p;

    in >> p;

    int a4 = p % 10;
    p /= 10;
    int a3 = p % 10;
    p /= 10;
    int a2 = p % 10;
    int a1 = p / 10;

    if(a1 == a4 && a2 == a3) out << "YES";
    else out << "NO";
    
    return 0;
}
