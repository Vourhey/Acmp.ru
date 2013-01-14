#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a;
    in >> a;
    out << a;
    return 0;
}
