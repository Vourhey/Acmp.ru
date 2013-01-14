#include <fstream>
using namespace std;

void bubble_sort(int *mas)
{
    for(int i=0; i<3; ++i)
	for(int j=i; j<3; ++j)
	{
	    if(mas[i] < mas[j])
	    {
		int tmp = mas[i];
		mas[i] = mas[j];
		mas[j] = tmp;
	    }
	}
}

bool compare(int *b1, int *b2)
{
    for(int i=0; i<3; ++i)
    {
	if(b1[i] != b2[i])
	    return false;
    }
    return true;
}

bool larger(int *b1, int *b2)
{
    if(b1[0] >= b2[0] &&
       b1[1] >= b2[1] &&
       b2[2] >= b2[2])
	return true;
    return false;
}

bool smaller(int *b1, int *b2)
{
    if(b1[0] <= b2[0] &&
       b1[1] <= b2[1] &&
       b1[2] <= b2[2])
	return true;
    return false;
}

int main()
{
    ifstream in ("input.txt");
    ofstream out("output.txt");
    int box1[3], box2[3];

    in >> box1[0] >> box1[1] >> box1[2]
       >> box2[0] >> box2[1] >> box2[2];

    bubble_sort(box1);
    bubble_sort(box2);

    if(compare(box1,box2)) { out << "Boxes are equal"; return 0; }
    if(larger(box1,box2)) { out << "The first box is larger than the second one"; return 0; }
    if(smaller(box1,box2)) { out << "The first box is smaller than the second one"; return 0; }
    else out << "Boxes are incomparable";

    return 0;
}

