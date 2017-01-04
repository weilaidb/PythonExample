#define _SQLITE3RTREE_H_
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;
typedef sqlite3_int64 sqlite3_rtree_dbl;
typedef double sqlite3_rtree_dbl;
int sqlite3_rtree_geometry_callback(
sqlite3 *db,
const char *zGeom,
int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
void *pContext
);
struct sqlite3_rtree_geometry ;
int sqlite3_rtree_query_callback(
sqlite3 *db,
const char *zQueryFunc,
int (*xQueryFunc)(sqlite3_rtree_query_info*),
void *pContext,
void (*xDestructor)(void*)
);
struct sqlite3_rtree_query_info ;
#define NOT_WITHIN       0
#define PARTLY_WITHIN    1
#define FULLY_WITHIN     2
