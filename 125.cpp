#include <fstream>
//#include <iostream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int **mas;	// наша матрица
    int *color;	// хранит цвета
    int n;
    int i, j;

    in >> n;

    mas = new int*[n];
    for(i=0; i<n; ++i)
	mas[i] = new int[n];

    color = new int[n];

    for(i=0; i<n; ++i)
    {
	for(j=0; j<n; ++j)
	{
	    in >> mas[i][j];
//	    cout << mas[i][j] << ' ';
	}
//	cout << '\n';
    }

//    cout << endl;

    for(i=0; i<n; ++i)
    {
	in >> color[i];
//	cout << color[i] << ' ';
    }

//    cout << endl;

    int c;
    int count = 0;
    for(i=0; i<n; ++i)
    {
	c = color[i];	// текущий цвет
	for(j=0; j<n; ++j)
	{
	    if(mas[i][j])  // 1
		if(c != color[j])
		    ++count;
	}
    }

    out << count/2;
    
    return 0;
}
