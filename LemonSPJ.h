#ifndef _GLIBCXX_CSTDIO
#include<cstdio>
#endif
#ifndef _GLIBCXX_CCTYPE
#include<cctype>
#endif
#ifndef _GLIBCXX_CSTDLIB
#include<cstdlib>
#endif
#ifndef _GLIBCXX_CSTDARG
#include<cstdarg>
#endif
#ifndef __LEMON_SPJ
#define __LEMON_SPJ
namespace SPJ {
    FILE *fin,*fout,*fstd,*fscore,*freport;
    int fullScore;
#ifndef WIN32
#define lld "%I64d"
#define llu "%I64u"
#else
#define lld "%lld"
#define llu "%llu"
#endif
    inline void give(int pts) {fprintf(fscore,"%d",pts);}
    inline void give(double pts) {fprintf(fscore,"%f",pts);}
    inline void log(const char *str) {fprintf(freport,str);}
    inline void detail(const char *format,...){va_list ap;va_start(ap,format);vfprintf(freport,format,ap);va_end(ap);}
    inline short readshort(FILE *output) {short ret;fscanf(output,"%hd",&ret);return ret;}
    inline unsigned short readunsignedshort(FILE *output) {unsigned short ret;fscanf(output,"%hu",&ret);return ret;}
    inline int readint(FILE *output) {int ret;fscanf(output,"%d",&ret);return ret;}
    inline unsigned readunsigned(FILE *output) {unsigned ret;fscanf(output,"%u",&ret);return ret;}
    inline long long readlonglong(FILE *output) {long long ret;fscanf(output,lld,&ret);return ret;}
    inline unsigned long long readunsignedlonglong(FILE *output) {unsigned long long ret;fscanf(output,llu,&ret);return ret;}
    inline char readchar(FILE *output) {char ret;fscanf(output,"%c",&ret);return ret;}
    char ret[1028577];
    inline char* readstr(FILE *output) {fscanf(output,"%s",ret);return ret;}
    inline float readfloat(FILE *output) {float ret;fscanf(output,"%f",&ret);return ret;}
    inline double readdouble(FILE *output) {double ret;fscanf(output,"%lf",&ret);return ret;}
    inline short readstdshort(){return readshort(fstd);}
    inline short readusershort(){return readshort(fout);}
    inline unsigned short readstdunsignedshort(){return readunsignedshort(fstd);}
    inline unsigned short readuserunsignedshort(){return readunsignedshort(fout);}
    inline int readstdint(){return readint(fstd);}
    inline int readuserint(){return readint(fout);}
    inline unsigned int readstdunsigned(){return readunsigned(fstd);}
    inline unsigned int readuserunsigned(){return readunsigned(fout);}
    inline long long readstdlonglong(){return readlonglong(fstd);}
    inline long long readuserlonglong(){return readlonglong(fout);}
    inline unsigned long long readstdunsignedlonglong(){return readunsignedlonglong(fstd);}
    inline unsigned long long readuserunsignedlonglong(){return readunsignedlonglong(fout);}
    inline char readstdchar(){return readchar(fstd);}
    inline char readuserchar(){return readchar(fout);}
    inline char* readstdstr(){return readstr(fstd);}
    inline char* readuserstr(){return readstr(fout);}
    inline float readstdfloat(){return readfloat(fstd);}
    inline float readuserfloat(){return readfloat(fout);}
    inline double readstddouble(){return readdouble(fstd);}
    inline double readuserdouble(){return readdouble(fout);}
#define AC fullScore
#define WA 0
    inline void close() {
        log("\n\nSPJ LIBRARY PROVIDER: Hatsune Miku.\nGRYZ \'60s\n");
        if(fin)fclose(fin);
        if(fout)fclose(fout);
        if(fstd)fclose(fstd);
        if(fscore)fclose(fscore);
        if(freport)fclose(freport);
    }
    inline void init(char *argv[]) {
        fin=fopen(argv[1],"r");//origin input file
        fout=fopen(argv[2],"r");//output file of user
        fstd=fopen(argv[3],"r");//output of std
        fullScore=atoi(argv[4]);//full mark of this pt
        fscore=fopen(argv[5],"w");
        freport=fopen(argv[6],"w");
        if(!(fin&&fstd&&fout&&fscore&&freport))log("Failed to open your output file. Aborting..."),give(0),close(),exit(0);
    }
}
#endif
