#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    int *mas = 0;

    in >> n;
    mas = new int[n];
    
    for(int i=0; i<n; ++i)
	in >> mas[i]; // получаем срок службы каждой кнопки

    in >> k; // it's k

    int temp;
    while(k-- > 0)
    {
	in >> temp;
	--mas[temp-1];
    }

    for(int i=0; i<n; ++i)
    {
	if(mas[i] >= 0) out << "no\n";
	else out << "yes\n";
    }
    return 0;
}

