#include <fstream>
using namespace std;
int main()
{
	ifstream f("pinochio.in");
	int n, p, k;
	f >> n >> p >> k;
	f.close();
	ofstream g("pinochio.out");
	g << n + (k/7)*(5*p-2) + (k%7)*p - (k%7 == 6);
	g.close();
	return 0;
}

