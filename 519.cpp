#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    int i;
    //char num1[10] = "";
    char numMin[10] = "";
    char numMax[10] = "";
    in >> n;

    int c = 0;	// длина числа
    while(n > 0)
    {
	numMax[c] = char(n % 10 + '0');
//	numMax[c] = num1[c];
	++c;
	n /= 10;
    }

    for(i=0; i<c; ++i)
	for(int j=i+1; j<c; ++j)
	{
	    if(numMax[j] > numMax[i])
	    {
		char t = numMax[j];
		numMax[j] = numMax[i];
		numMax[i] = t;
	    }
	}

    numMin[0] = numMax[0];
    int zero = 1;
    for(i=c-1; i>=0; --i)
    {
	if(numMax[i] < numMin[0] && numMax[i] != '0') numMin[0] = numMax[i];
	if(numMax[i] == '0') numMin[zero++] = '0';
    }

    i = c - zero - 1;
    for(; i>=0; --i)
    {
	numMin[zero] = numMax[i];
	zero++;
    }

    for(i=0; i<c; ++i)
	out << numMin[i];
    out << ' ';
    for(i=0; i<c; ++i)
	out << numMax[i];

    return 0;
}
