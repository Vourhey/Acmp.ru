#include <fstream>
using namespace std;

const char up = 'A' - 'a';

bool isUpper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

bool detectError(char *str, bool *c)
{
    // первые символы
    if(isUpper(*str)) return true;
    if(*str == '_') return true;
    // остальные
    while(*str)
    {
	if(*str == '_')
	{
	    *c = true;
	    if(*(str+1) >= 'A' && *(str+1) <= 'Z')
		return true; // Error!
	    else if(*(str+1) == '_')
		return true;
	    else if(*(str+1) == '\0')
		return true;
	}
	++str;
    }
    return false;
}

void toJava(char *is, char *os)
{
    while(*is)
    {
	if(*is == '_')
	{
	    ++is;
	    *os = *is + up;
	    ++os; ++is;
	}
	else *os++ = *is++;
    }
}

void toCPlusPlus(char *is, char *os)
{
    while(*is)
    {
	if(isUpper(*is))
	{
	    *os++ = '_';
	    *os = *is - up;
	    ++os; ++is;
	}
	else *os++ = *is++;
    }
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char inStr[100] = { '\0' };
    char outStr[200] = { '\0' };
    bool cplusplus = false; // C++ or Java style

    in >> inStr;
    if(detectError(inStr, &cplusplus))
    {
	out << "Error!";
	return 0;
    }

    if(cplusplus) // C++
        toJava(inStr, outStr);
    else
	toCPlusPlus(inStr, outStr);
    
    out << outStr;
    return 0;
}

