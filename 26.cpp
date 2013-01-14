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
    int len = (int)sqrt(double(x*x + y*y));
    if(len < (r1 + r2)) out << "YES";
    else out << "NO";
    return 0;
}

