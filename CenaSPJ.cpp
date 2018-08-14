/*
 * Special Judge Library for Cena          DOCUMENT          Writter:Hatsune Miku from GRYZ
 * Usage: 1. Please include library CenaSPJ.h first. Functions are in namespace "SPJ".
 *        2. Function "main()" must be with 2 arguments, "int argc" and "char *argv[]".
 *        3. Use function "init()" to config file operations before you begin.
 *        4. Use function "close()" to close opened files after everything is done.
 *        4. Functions:
 *           a. init(): To config file operations for Special Judge program.
 *                Syntax:
 *                  init(InputFileName,OutputFileName,argv);
 *                  Input file name is InputFileName, Output file name is OutputFileName.
 *                  Notice the argument "argv" MUST NOT and SHOULD NOT be changed.
 *           b. readFILEtype(): To read something with type from FILE.
 *                Examples:
 *                  readstdunsigned() => read a unsigned integer from std output file.
 *                  readuserint() => Read a interger from user output file.
 *                Supported types:
 *                  (unsigned)short, (unsigned)int, (unsigned)long long, float, double,
 *                  char, string(C-style string --- char*, max length is 1028576 = 1M).
 *           c. give(): To rate a test point.
 *                Synatax:
 *                  give(pts) => Rate this test point as pts points.
 *                  Notice the pts could be a number or just Macro "AC" or "WA".
 *           d. log(): To log something in result.
 *                Example:
 *                  log("some strings.") => "some strings." will be in test point details.
 *                  Notice this is used to display something the result of tests.
 *                  You can use "detail()" to print something more complex in detail page.
 *           e. detail(): To log details in the test point detail page.
 *                Example:
 *                  detail("Your Answer: %f\nStandard: %f\n",userans,stdans);
 *                  Notice this function is very similar to "printf()" that we usually use.
 *           f. close(): To close files the Special Judge program opened.
 * A Special Judge program for "A+B Problem" is below for referance. Have fun!
*/
#include "CenaSPJ.h"
#include <cmath>
using namespace SPJ;
int main(int argc,char *argv[])
{
    init("ab.in","ab.out",argv);
    int userans=readuserdouble();
    int stdans=readstddouble();
    fprintf(freport,"%f %f\n",userans,stdans);
    if(fabs(stdans-userans)<=1e9)give((long long)AC),log("You got the correct answer.");
    else give((long long)5),log("You didn\'t got the correct answer.");
    close();
    return 0;
}
