#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char c;
    int count = 0;
    int m = 0;
    int num = 0;

    c = char(in.get());
    while(isdigit(c))
    {
	num += (c - '0');
	c = char(in.get());
	++m;
    }

    if(m > 1) ++count;

    while(num >= 10)
    {
	int tmp = 0;
	while(num >  0)
	{
	    tmp = tmp + (num % 10);
	    num /= 10;
	}
	num = tmp;
	++count;
    }

    out << num << ' ' << count;
    
    return 0;
}
