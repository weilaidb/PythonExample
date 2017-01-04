# define charMap(X) sqlite3UpperToLower[(unsigned char)X]
# define charMap(X) ebcdicToAscii[(unsigned char)X]
const unsigned char ebcdicToAscii[] = ;
const char sqlite3IsAsciiIdChar[] = ;
#define	IdChar(C)  (((c=C)&0x80)!=0 || (c>0x1f && sqlite3IsAsciiIdChar[c-0x20]))
const char sqlite3IsEbcdicIdChar[] = ;
#define	IdChar(C)  (((c=C)>=0x42 && sqlite3IsEbcdicIdChar[c-0x40]))
static int getToken(const unsigned char *z, int *tokenType)
static int
bdb_run_parser(Parse *pParse, const char *zSql, char **pzErrMsg)
int do_parse(const char *zSql, char **pzErrMsg)
