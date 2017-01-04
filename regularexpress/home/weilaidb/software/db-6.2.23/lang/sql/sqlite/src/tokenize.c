# define charMap(X) sqlite3UpperToLower[(unsigned char)X]
# define charMap(X) ebcdicToAscii[(unsigned char)X]
const unsigned char ebcdicToAscii[] = ;
#define IdChar(C)  ((sqlite3CtypeMap[(unsigned char)C]&0x46)!=0)
const char sqlite3IsEbcdicIdChar[] = ;
#define IdChar(C)  (((c=C)>=0x42 && sqlite3IsEbcdicIdChar[c-0x40]))
int sqlite3IsIdChar(u8 c)
int sqlite3GetToken(const unsigned char *z, int *tokenType)
int sqlite3RunParser(Parse *pParse, const char *zSql, char **pzErrMsg)
