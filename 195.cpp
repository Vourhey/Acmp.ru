#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n,a,b;

    in >> n >> a >> b;

    out << (2 * n * a * b);
    
    return 0;
}
