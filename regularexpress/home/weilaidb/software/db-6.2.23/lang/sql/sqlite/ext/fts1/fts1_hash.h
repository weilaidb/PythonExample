#define _FTS1_HASH_H_
typedef struct fts1Hash fts1Hash;
typedef struct fts1HashElem fts1HashElem;
struct fts1Hash ;
struct fts1HashElem ;
#define FTS1_HASH_STRING    1
#define FTS1_HASH_BINARY    2
void sqlite3Fts1HashInit(fts1Hash*, int keytype, int copyKey);
void *sqlite3Fts1HashInsert(fts1Hash*, const void *pKey, int nKey, void *pData);
void *sqlite3Fts1HashFind(const fts1Hash*, const void *pKey, int nKey);
void sqlite3Fts1HashClear(fts1Hash*);
#define fts1HashInit   sqlite3Fts1HashInit
#define fts1HashInsert sqlite3Fts1HashInsert
#define fts1HashFind   sqlite3Fts1HashFind
#define fts1HashClear  sqlite3Fts1HashClear
#define fts1HashFirst(H)  ((H)->first)
#define fts1HashNext(E)   ((E)->next)
#define fts1HashData(E)   ((E)->data)
#define fts1HashKey(E)    ((E)->pKey)
#define fts1HashKeysize(E) ((E)->nKey)
#define fts1HashCount(H)  ((H)->count)
