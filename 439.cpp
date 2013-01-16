#include <fstream>
//#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    ifstream in("input.txt");
//    ofstream out("output.txt");
    // я не знаю, как установить точно вывода double, поэтому пользуюсь
    // сишными функциями =) 
    FILE *out = fopen("output.txt", "w");
    int n, p;
    double t1, t2;
    in >> n >> p;

    t1 = double(p) / 100;
    t2 = 1 - t1;
    t2 /= double(n);

    fprintf(out, "%.9f", (1 / (t1 + t2)));
    
    return 0;
}
