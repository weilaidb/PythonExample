#define YASM_HAMT_H
#define YASM_LIB_DECL
typedef struct HAMT HAMT;
typedef struct HAMTEntry HAMTEntry;
YASM_LIB_DECL
HAMT *HAMT_create(int nocase, void (*error_func)
(const char *file, unsigned int line, const char *message));
YASM_LIB_DECL
void HAMT_destroy( HAMT *hamt,
void (*deletefunc) ( void *data));
YASM_LIB_DECL void *HAMT_insert(HAMT *hamt, const char *str, void *data, int *replace,
void (*deletefunc) ( void *data));
YASM_LIB_DECL void *HAMT_search(HAMT *hamt, const char *str);
YASM_LIB_DECL
int HAMT_traverse(HAMT *hamt, void *d,
int (*func) ( void *node, void *d));
YASM_LIB_DECL
const HAMTEntry *HAMT_first(const HAMT *hamt);
YASM_LIB_DECL const HAMTEntry *HAMT_next(const HAMTEntry *prev);
YASM_LIB_DECL
void *HAMTEntry_get_data(const HAMTEntry *entry);
