#include <fstream>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out("output.txt");
    int n, m;

    in >> n >> m;

    int red = 0, green = 0, blue = 0, black = 0;

    for(int i=1; i<=n; ++i)
	for(int j=1; j<=m; ++j)
	{
	    int t = i*j;
	    if(!(t % 5))
		blue++;
	    else if(!(t % 3))
		green++;
	    else if(!(t % 2))
		red++;
	    else black++;
	}

    out << "RED : " << red << "\nGREEN : " << green
	<< "\nBLUE : " << blue << "\nBLACK : " << black;
    return 0;
}

