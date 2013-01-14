#include <fstream>
using namespace std;

void fill(int **m, int x1, int y1, int x2, int y2)
{
    for(int i=x1; i<x2; ++i)
	for(int j=y1; j<y2; ++j)
	    m[i][j] = 1;
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int i, j;
    int w, h;
    int **field;

    in >> w >> h;
    field = new int*[h];
    for(i=0; i<h; ++i)
	field[i] = new int[w];

    for(i=0; i<h; ++i)
	for(j=0; j<w; ++j)
	    field[i][j] = 0; // чистим

    int n; // число прямоугольников
    int x1,y1,x2,y2;
    in >> n;

    for(i=0;i<n; ++i)
    {
	in >> x1 >> y1 >> x2 >> y2;
	fill(field, x1,y1,x2,y2);
    }

    int hole = 0;
    for(i=0; i<h; ++i)
    {
	for(j=0; j<w; ++j)
	{
//	    out << field[i][j] << ' ';
	    if(field[i][j] == 0)
		++hole;
	}
//	out << '\n';
    }
    out << hole;
    return 0;
}

