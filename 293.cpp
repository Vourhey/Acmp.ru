#include <fstream>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out("output.txt");
    int n, i;
    float tmp, imax, max = 0.0;

    in >> n;

    float *mas = new float[n];
    for(i=0; i<n; ++i)
	in >> mas[i];
    for(i=0; i<n; ++i)
    {
	in >> tmp;
	mas[i] = mas[i] * tmp / 100;
	if(mas[i] > max) { max = mas[i]; imax = i; }
    }
    for(i = 0; i<n; ++i)
    {
	if(mas[i] == max) { out << i+1; break; }
    }

    return 0;
}

