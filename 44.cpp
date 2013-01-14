#include <fstream>
#include <cstring>
using namespace std;

int findStrelku(char *str, const char *s)
{
    int c = 0;
    int len = strlen(s);
    while(*str)
    {
	if(!strncmp(str, s, len)) ++c;
	++str;
    }
    return c;
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char str[256] = "";
    in >> str;

    out << (findStrelku(str, ">>-->") + findStrelku(str, "<--<<"));
    return 0;
}

