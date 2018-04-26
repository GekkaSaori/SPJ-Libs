#include "CenaSPJ.h"
#include <cmath>
using namespace SPJ;
int main(int argc,char *argv[])
{
	init("ab.in","ab.out",argv);
	long double userans=readuserlongdouble();
	long double stdans=readstdlongdouble();
	fprintf(freport,"Your Answer:%Lf\nStandard: %Lf\n",userans,stdans);
	if(fabs(stdans-userans)<=1e-9)give((long long)AC),log("You got the correct answer.");
	else give(5ll),log("You didn\'t got the correct answer.");
	close();
	return 0;
}
