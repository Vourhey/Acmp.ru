#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    int *bals;
    int full;
    int m;
    int maxRate = 0, max = 0;
    int i, j;
    int cur, temp;
    int minus = 0;

    in >> n;
    bals = new int[n];
    for(i=0; i<n; ++i)
    {
	in >> bals[i];
	maxRate += bals[i];	// максимум за все выполненые задания
    }

    in >> full >> m;

    for(i = 0; i<m; ++i)
    {
	cur = 0;
	for(j = 0; j<n; ++j)
	{
	    in >> temp;
	    if(temp)
		cur += bals[j];
	}
	if(cur == maxRate)	// все задания выполнены
	    cur += full;
	minus = i * 2;
	cur -= minus;
	if(cur > max) max = cur;
	out << max << '\n';
    }
    
    return 0;
}
