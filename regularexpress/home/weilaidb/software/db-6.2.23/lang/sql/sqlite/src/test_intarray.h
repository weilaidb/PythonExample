#define _INTARRAY_H_
typedef struct sqlite3_intarray sqlite3_intarray;
SQLITE_API int sqlite3_intarray_create(
sqlite3 *db,
const char *zName,
sqlite3_intarray **ppReturn
);
SQLITE_API int sqlite3_intarray_bind(
sqlite3_intarray *pIntArray,
int nElements,
sqlite3_int64 *aElements,
void (*xFree)(void*)
);
