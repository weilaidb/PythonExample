typedef unsigned char u8;
typedef struct GState GState;
#define ArraySize(X)   (sizeof(X)/sizeof(X[0]))
struct GState ;
static void ofstError(GState *p, const char *zFormat, ...)
static void ofstTrace(GState *p, const char *zFormat, ...)
static void ofstRootAndColumn(
GState *p,
const char *zFile,
const char *zTable,
const char *zColumn
)", sqlite3_errmsg(db), zSql);
sqlite3_free(zSql);
if( p->zErr ) goto rootAndColumn_exit;
while( sqlite3_step(pStmt)==SQLITE_ROW )
sqlite3_finalize(pStmt);
if( p->iCol<0 )
zSql = sqlite3_mprintf("PRAGMA page_size");
rc = sqlite3_prepare_v2(db, zSql, -1, &pStmt, 0);
if( rc )  ofstError(p, "%s: [%s]", sqlite3_errmsg(db), zSql);
sqlite3_free(zSql);
if( p->zErr ) goto rootAndColumn_exit;
if( sqlite3_step(pStmt)!=SQLITE_ROW )else
sqlite3_finalize(pStmt);
rootAndColumn_exit:
sqlite3_close(db);
return;
}
static void ofstPopPage(GState *p)
static void ofstPushPage(GState *p, int pgno)
static int ofst2byte(GState *p, int ofst)
static int ofst4byte(GState *p, int ofst)
static sqlite3_int64 ofstVarint(GState *p, int *pOfst)
static int ofstInFile(GState *p, int ofst)
static int ofstSerialSize(int scode)
static void ofstWalkPage(GState*, int);
static void ofstWalkInteriorPage(GState *p)
static void ofstWalkLeafPage(GState *p)
static void ofstWalkPage(GState *p, int pgno)
int main(int argc, char **argv)
