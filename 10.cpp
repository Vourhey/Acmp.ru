#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a,b,c,d;
    int res[3] = { -999, -999, -999 } ;

    in >> a >> b >> c >> d;

    int j = 0; // индекс в массиве ответов
    int i;
    for(i = -100; i<101; ++i)
    {
	if(a*i*i*i + b*i*i + c*i + d == 0)
	{
	    res[j] = i;
	    ++j;
	}
    }

    for(i = 0; i<3; ++i)
	for(j = i+1; j<3; ++j)
	{
	    if(res[i] > res[j])
	    {
		int t = res[i];
		res[i] = res[j];
		res[j] = t;
	    }
	}

    i = 0;
    while(res[i] == -999) ++i;
    while(i < 3) out << res[i++] << ' ';
    
    return 0;
}
