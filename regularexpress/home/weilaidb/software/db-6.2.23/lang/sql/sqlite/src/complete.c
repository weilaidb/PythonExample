#define IdChar(C)  ((sqlite3CtypeMap[(unsigned char)C]&0x46)!=0)
extern const char sqlite3IsEbcdicIdChar[];
#define IdChar(C)  (((c=C)>=0x42 && sqlite3IsEbcdicIdChar[c-0x40]))
#define tkSEMI    0
#define tkWS      1
#define tkOTHER   2
#define tkEXPLAIN 3
#define tkCREATE  4
#define tkTEMP    5
#define tkTRIGGER 6
#define tkEND     7
int sqlite3_complete(const char *zSql)
int sqlite3_complete16(const void *zSql)
