#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, i, t;
    int mas[201] = { 0 };

    in >> n;
    for(i=0; i<n; ++i)
    {
	in >> t;
	++mas[t+100];
    }

    for(i=0; i<201; ++i)
    {
	if(mas[i])
	{
	    for(int j=0; j<mas[i]; ++j)
		out << i-100 << ' ';
	}
    }
    return 0;
}

