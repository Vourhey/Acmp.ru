#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, mas[6];

    in >> n;

    if(!n) {out << "NO"; return 0;}

    for(int i=0; i<6; ++i)
    {
	mas[i] = n % 10;
	n /= 10;
    }

    if(mas[0]+mas[1]+mas[2] ==
       mas[3]+mas[4]+mas[5])
	out << "YES";
    else out << "NO";
    
    return 0;
}
