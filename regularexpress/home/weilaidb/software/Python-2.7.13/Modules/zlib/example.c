#  include <string.h>
#  include <stdlib.h>
#if defined(VMS) || defined(RISCOS)
#  define TESTFILE
#  define TESTFILE
#define CHECK_ERR(err, msg)
z_const char hello[] = ;
const char dictionary[] = ;
uLong dictId;
void test_deflate       OF((Byte *compr, uLong comprLen));
void test_inflate       OF((Byte *compr, uLong comprLen,
Byte *uncompr, uLong uncomprLen));
void test_large_deflate OF((Byte *compr, uLong comprLen,
Byte *uncompr, uLong uncomprLen));
void test_large_inflate OF((Byte *compr, uLong comprLen,
Byte *uncompr, uLong uncomprLen));
void test_flush         OF((Byte *compr, uLong *comprLen));
void test_sync          OF((Byte *compr, uLong comprLen,
Byte *uncompr, uLong uncomprLen));
void test_dict_deflate  OF((Byte *compr, uLong comprLen));
void test_dict_inflate  OF((Byte *compr, uLong comprLen,
Byte *uncompr, uLong uncomprLen));
int  main               OF((int argc, char *argv[]));
void *myalloc OF((void *, unsigned, unsigned));
void myfree OF((void *, void *));
void *myalloc(q, n, m)
void *q;
unsigned n, m;
void myfree(void *q, void *p)
static alloc_func zalloc = myalloc;
static free_func zfree = myfree;
static alloc_func zalloc = (alloc_func)0;
static free_func zfree = (free_func)0;
void test_compress      OF((Byte *compr, uLong comprLen,
Byte *uncompr, uLong uncomprLen));
void test_gzio          OF((const char *fname,
Byte *uncompr, uLong uncomprLen));
void test_compress(compr, comprLen, uncompr, uncomprLen)
Byte *compr, *uncompr;
uLong comprLen, uncomprLen;
void test_gzio(fname, uncompr, uncomprLen)
const char *fname;
Byte *uncompr;
uLong uncomprLen;
void test_deflate(compr, comprLen)
Byte *compr;
uLong comprLen;
void test_inflate(compr, comprLen, uncompr, uncomprLen)
Byte *compr, *uncompr;
uLong comprLen, uncomprLen;
void test_large_deflate(compr, comprLen, uncompr, uncomprLen)
Byte *compr, *uncompr;
uLong comprLen, uncomprLen;
void test_large_inflate(compr, comprLen, uncompr, uncomprLen)
Byte *compr, *uncompr;
uLong comprLen, uncomprLen;
void test_flush(compr, comprLen)
Byte *compr;
uLong *comprLen;
void test_sync(compr, comprLen, uncompr, uncomprLen)
Byte *compr, *uncompr;
uLong comprLen, uncomprLen;
void test_dict_deflate(compr, comprLen)
Byte *compr;
uLong comprLen;
void test_dict_inflate(compr, comprLen, uncompr, uncomprLen)
Byte *compr, *uncompr;
uLong comprLen, uncomprLen;
int main(argc, argv)
int argc;
char *argv[];
