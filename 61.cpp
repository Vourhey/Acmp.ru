#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int suma = 0, sumb = 0;
    int a, b;

    in >> a >> b;
    suma += a; sumb += b;
    in >> a >> b;
    suma += a; sumb += b;
    in >> a >> b;
    suma += a; sumb += b;
    in >> a >> b;
    suma += a; sumb += b;

    if(suma > sumb) out << 1;
    else if(suma < sumb) out << 2;
    else out << "DRAW";
    
    return 0;
}
