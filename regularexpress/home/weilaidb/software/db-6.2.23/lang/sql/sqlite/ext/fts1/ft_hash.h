#define _HASH_H_
typedef struct Hash Hash;
typedef struct HashElem HashElem;
struct Hash ;
struct HashElem ;
void HashInit(Hash*, int keytype, int copyKey);
void *HashInsert(Hash*, const void *pKey, int nKey, void *pData);
void *HashFind(const Hash*, const void *pKey, int nKey);
void HashClear(Hash*);
#define HashFirst(H)  ((H)->first)
#define HashNext(E)   ((E)->next)
#define HashData(E)   ((E)->data)
#define HashKey(E)    ((E)->pKey)
#define HashKeysize(E) ((E)->nKey)
#define HashCount(H)  ((H)->count)
