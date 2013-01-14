#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a;

    in >> a;
    a = a / 10; // забираем последнюю пятерку
    int p = a * (a + 1);
    if(p)
	out << p << 25;
    else
	out << 25;
    
    return 0;
}
