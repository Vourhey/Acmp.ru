#include <fstream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    ifstream in("input.txt");
//    ofstream out("output.txt");
    FILE *out = fopen("output.txt", "w");
    double x1, y1, x2, y2;

    in >> x1 >> y1 >> x2 >> y2;

    fprintf(out, "%.5f", sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));

    return 0;
}
