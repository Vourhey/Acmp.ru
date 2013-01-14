#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int s;

    in >> s;
    out << s/6 << ' ' << s/6*4 << ' ' << s/6;
    
    return 0;
}
