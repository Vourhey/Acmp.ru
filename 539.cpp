#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;

    in >> n;

    if(n == 1) out << '0';
    else if(n % 2) out << n;
    else out << n/2;
    
    return 0;
}
