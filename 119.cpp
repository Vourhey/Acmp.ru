#include <fstream>
using namespace std;

class Time
{
public:
    Time(int _h = 0, int _m = 0, int _s = 0)
	: h(_h), m(_m), s(_s)
    {}

    friend istream &operator>>(istream &is, Time &t)
    {
	is >> t.h >> t.m >> t.s;
	return is;
    }
    friend ostream &operator<<(ostream &os, const Time &t)
    {
	os << t.h << ' ' << t.m << ' ' << t.s;
	return os;
    }
    bool operator>(const Time &t2)
    {
	if(h > t2.h) return true;
	else if(h == t2.h)
	{
	    if(m > t2.m) return true;
	    else if(m == t2.m)
	    {
		if(s > t2.s) return true;
		else return false;
	    }
	    else return false;
	}
	else return false;
    }

private:
    int h;
    int m;
    int s;
};

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, i, j;

    in >> n;
    Time *mas = new Time[n];

    for(i=0; i<n; ++i)
	in >> mas[i];

    for(i=0; i<n; ++i)
	for(j=i+1; j<n; ++j)
	    if(mas[i] > mas[j])
	    {
		Time t = mas[i];
		mas[i] = mas[j];
		mas[j] = t;
	    }

    for(i=0; i<n; ++i)
	out << mas[i] << '\n';
    
    return 0;
}
