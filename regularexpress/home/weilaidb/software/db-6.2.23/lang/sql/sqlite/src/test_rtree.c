typedef struct Circle Circle;
struct Circle ;
static void circle_del(void *p)
static int circle_geom(
sqlite3_rtree_geometry *p,
int nCoord,
sqlite3_rtree_dbl *aCoord,
int *pRes
)
static int circle_query_func(sqlite3_rtree_query_info *p)
static int bfs_query_func(sqlite3_rtree_query_info *p)
typedef struct Cube Cube;
struct Cube ;
static void cube_context_free(void *p)
static int gHere = 42;
static int cube_geom(
sqlite3_rtree_geometry *p,
int nCoord,
sqlite3_rtree_dbl *aCoord,
int *piRes
)
static int register_cube_geom(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int register_circle_geom(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetestrtree_Init(Tcl_Interp *interp)
