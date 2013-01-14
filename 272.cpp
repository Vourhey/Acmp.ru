#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    int min, max;

    in >> min >> max;

    int i = 1, tmp;
    in >> tmp;
    while(in.good())
    {
	if(i % 2) min = tmp < min ? tmp : min;
	else max = tmp > max ? tmp : max;
	++i;
	in >> tmp;
    }

    out << (min + max);
    return 0;
}

