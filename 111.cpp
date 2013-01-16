#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int k;

    in >> k;

    if(k < 3) k = 0;
    else if(k % 2 == 0) k = k / 2 - 1;
    else --k;

    out << k;
    
    return 0;
}
