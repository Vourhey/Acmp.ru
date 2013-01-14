#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;

    in >> n;

    if(n%3 == 0) out << "GCV";
    else if(n%3 == 1) out << "VGC";
    else out << "CVG";
    
    return 0;
}
