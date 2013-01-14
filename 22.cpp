#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, ed = 0;

    in >> n;
    while(n)
    {
	if(n%2) ++ed;
	n /= 2;
    }

    out << ed;
    
    return 0;
}
