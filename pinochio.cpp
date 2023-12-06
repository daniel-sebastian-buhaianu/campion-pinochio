#include <fstream>
using namespace std;
int main()
{
	ifstream f("pinochio.in");
	int n, p, k;
	f >> n >> p >> k;
	f.close();
	ofstream g("pinochio.out");
	int r = k%7 < 6 ? k%7*p : 5*p-1;
	g << n + (k/7)*(5*p-2) + r; 
	g.close();
	return 0;
}

