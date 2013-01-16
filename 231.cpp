#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int num = 0;
    int i = 0;
    int len = 0;
    char c;

    c = char(in.get());
    while(isdigit(c) || isalpha(c))
    {
	if(isdigit(c))
	{
	    if(i > 0) num *= 10;
	    num = num  + (c-'0');
	    ++i;
	}

	if(isalpha(c))
	{
	    i = 0;
	    if(num == 0) num = 1;
	    for(; num > 0; --num)
	    {
		if(len == 40)
		{
		    out << '\n';
		    len = 0;
		}
		out << c;
		++len;
	    }
	}

	c = char(in.get());
    }
    
    return 0;
}
