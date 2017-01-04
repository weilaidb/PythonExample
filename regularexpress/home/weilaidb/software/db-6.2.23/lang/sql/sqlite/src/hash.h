#define _SQLITE_HASH_H_
typedef struct Hash Hash;
typedef struct HashElem HashElem;
struct Hash ;
struct HashElem ;
void sqlite3HashInit(Hash*);
void *sqlite3HashInsert(Hash*, const char *pKey, void *pData);
void *sqlite3HashFind(const Hash*, const char *pKey);
void sqlite3HashClear(Hash*);
#define sqliteHashFirst(H)  ((H)->first)
#define sqliteHashNext(E)   ((E)->next)
#define sqliteHashData(E)   ((E)->data)
