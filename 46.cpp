#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    char e[] = "7182818284590452353602875";

    in >> n;

    if(n)
    {
	out << "2.";
	int i;
	for(i=0; i<n-1; ++i)
	    out << e[i];
	if(e[i+1]-'0' >= 5)
	   out << char(e[i]+1);
	else
	   out << e[i];
    }
    else out << "3";
    
    return 0;
}
