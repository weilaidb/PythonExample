#define _FTS2_HASH_H_
typedef struct fts2Hash fts2Hash;
typedef struct fts2HashElem fts2HashElem;
struct fts2Hash ;
struct fts2HashElem ;
#define FTS2_HASH_STRING    1
#define FTS2_HASH_BINARY    2
void sqlite3Fts2HashInit(fts2Hash*, int keytype, int copyKey);
void *sqlite3Fts2HashInsert(fts2Hash*, const void *pKey, int nKey, void *pData);
void *sqlite3Fts2HashFind(const fts2Hash*, const void *pKey, int nKey);
void sqlite3Fts2HashClear(fts2Hash*);
#define fts2HashInit   sqlite3Fts2HashInit
#define fts2HashInsert sqlite3Fts2HashInsert
#define fts2HashFind   sqlite3Fts2HashFind
#define fts2HashClear  sqlite3Fts2HashClear
#define fts2HashFirst(H)  ((H)->first)
#define fts2HashNext(E)   ((E)->next)
#define fts2HashData(E)   ((E)->data)
#define fts2HashKey(E)    ((E)->pKey)
#define fts2HashKeysize(E) ((E)->nKey)
#define fts2HashCount(H)  ((H)->count)
