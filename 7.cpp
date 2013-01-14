#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    char str1[110] = "";
    char str2[110] = "";
    char str3[110] = "";

    in >> str1 >> str2 >> str3;

    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int l3 = strlen(str3);

    if(l1 == l2 && l1 == l3) // все одинаковые
    {
	if(strcmp(str1,str2) == 1 && strcmp(str1,str3) == 1)
	    out << str1;
	else if(strcmp(str2,str1) == 1 && strcmp(str2,str3) == 1)
	    out << str2;
	else // if(strcmp(str3,str1) == 1 && strcmp(str3,str2) == 1)
	    out << str3;
/*	else if(strcmp(str1,str2) == 0 && strcmp(str1,str3) == 1)
	    out << str1;
	else if(strcmp(str1,str3) == 0 && strcmp(str1,str2) == 1)
	    out << str1;
	else if(strcmp(str2,str3) == 0 && strcmp(str2,str1) == 1)
	    out << str2; */
    } 
    else // ищем наибольшую
    {
	if(l1 != l2 && l1 != l3 && l2 != l3) // все имеют разную длину
	{
	    // тогда просто ищем наибольшую
	    if(l1 > l2 && l1 > l3)
	    	out << str1;
	    else if(l2 > l1 && l2 > l3)
		out << str2;
	    else
		out << str3;
	}
	else
	{
	    // ищем наименьшую, чтобы сравнить две оставшиеся строки
	    if(l1 < l2 && l1 < l3)
	    {
		if(strcmp(str2,str3) == 1)
		    out << str2;
		else out << str3;
	    }
	    else if(l2 < l1 && l2 < l3)
	    {
		if(strcmp(str1,str3) == 1)
		    out << str1;
		else out << str3;
	    }
	    else
	    {
		if(strcmp(str1,str2) == 1)
		    out << str1;
		else out << str2;
	    }
	}
    }
    
    return 0;
}
