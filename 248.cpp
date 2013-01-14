#include <fstream>
#include <cstring>
using namespace std;

void deleteC(char *s, char *o)
{
    while(*s)
    {
	if(*s == 'c' || *s == 'C')
	{
	    if(*(s+1) == 'i' ||
	       *(s+1) == 'e')
	    {
		*o = (*s == 'c' ? 's' : 'S');
	    }
	    else if(*(s+1) == 'k')
	    {
		++s;
		*o = *s;
	    }
	    else
	    {
		 *o = 'k';
	    }
	}
	else
	    *o = *s;
	++o;
	++s;
    }
    *o = '\0';
}

bool isLetter(char c)
{
    return ((c >= 'a' && c<='z') ||
	    (c >= 'A' && c<='Z'));
}

void removeArticles(char *s, char *o)
{
    while(*s)
    {
	if(*s == 'a' || *s == 'A')
	{
	    if(!isLetter(*(s+1)))
	    {
		// a
		s += 1; continue;
	    }
	    else if(*(s+1) == 'n' && !isLetter(*(s+2)))
	    {
		// an
		s += 2; continue;
	    }
	}
	if(*s == 't' || *s == 'T')
	{
	    if(*(s+1) == 'h' && *(s+2) == 'e' && !isLetter(*(s+3)))
	    {
		// the or The
		s += 3; continue;
	    } 
	}
	*o++ = *s++;
    }
    *o = '\0';
}

const char up = 'A' - 'a';

bool cmp(char c1, char c2)
{
   if(c1 == c2) return true;
   if((c1-up) == c2) return true;
   if((c1+up) == c2) return true;
   return false;
}

void removeDup(char *s, char *o)
{
    *o++ = *s++;
    while(*s)
    {
	if(isLetter(*s))
	{
	    if(cmp(*s, *(s-1))) // точно такая же
	    {
		++s; continue;
	    }
	}
	*o++ = *s++;
    }
    *o = '\0';
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    char english[201] = { '\0' };
    char outStr[201] = { '\0' };

    in.getline(english, 201);
    deleteC(english, outStr);
    removeArticles(outStr, english);
    removeDup(english, outStr);

    int len = strlen(outStr) - 1;
    while(len > 0 && outStr[len] == ' ')
	--len;
    outStr[len+1] = '\0';
    out << outStr;
    return 0;
}

