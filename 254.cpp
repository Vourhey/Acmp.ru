// Time limit exceeded
#include <fstream>
using namespace std;

// возвращает число, на которое заменить
int ss(int n, int m, int **r)
{
    int i=0;
    while(n != r[i][0])
    {
	++i;
	if(i == m)
	    return n;
    }
    return r[i][1];
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int *mas;
    int **replace;
    int n, m;
    int i, j;

    in >> n;
    mas = new int[n];

    for(i = 0; i < n; ++i)
	in >> mas[i];

    in >> m;

    replace = new int*[m];
    for(j = 0; j<m; ++j)
    {
	replace[j] = new int[2];
	in >> replace[j][0] >> replace[j][1];
    }
    
    // меняем правителей
    for(i=0; i<n; ++i)
	out << ss(mas[i], m, replace) << ' ';
    
    return 0;
}
