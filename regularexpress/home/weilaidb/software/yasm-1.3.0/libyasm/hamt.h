#define YASM_HAMT_H
#define YASM_LIB_DECL
typedef struct HAMT HAMT;
typedef struct HAMTEntry HAMTEntry;
YASM_LIB_DECL
*HAMT_create
(const char *file, unsigned int line, const char *message));
YASM_LIB_DECL
HAMT_destroy ( void *data));
*HAMT_insert ( void *data));
*HAMT_search;
YASM_LIB_DECL
HAMT_traverse ( void *node, void *d));
YASM_LIB_DECL
*HAMT_first;
*HAMT_next;
YASM_LIB_DECL
*HAMTEntry_get_data;
