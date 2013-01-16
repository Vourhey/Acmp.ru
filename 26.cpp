#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int x1, y1, r1,
	x2, y2, r2;

    in >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    int x = x2 - x1;
    int y = y2 - y1;
    int len = r1 + r2;
    int len1 = r1 - r2;
    if(len*len >= x*x + y*y &&
       len1*len1 <= x*x + y*y) out << "YES";
    else out << "NO";
    return 0;
}

