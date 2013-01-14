#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char c;
    char qwerty[] = "qwertyuiopasdfghjklzxcvbnm";
    int l = strlen(qwerty);

    in >> c;

    for(int i=0; i<l; ++i)
    {
	if(c == qwerty[i])
	{
	    if(i == l-1) out << 'q';
	    else out << qwerty[i+1];
	    break;
	}
    }
    
    return 0;
}
