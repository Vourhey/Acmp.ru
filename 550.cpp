#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int year;

    in >> year;

    if(year % 400 == 0 ||
	(year % 4 == 0 && year % 100))
	out << "12/09/" << setfill('0') << setw(4) << year;
    else out << "13/09/" << setfill('0') << setw(4) << year;
    
    return 0;
}
