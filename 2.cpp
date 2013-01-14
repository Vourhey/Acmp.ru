#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, sum = 0;

    in >> n;

    if(n > 0) 
	while(n > 0)
	    sum += n--;
    else
	while(n <= 1)
	    sum += n++;

    out << sum;
    
    return 0;
}
