#define YASM_CORETYPE_H
#define YASM_LIB_DECL
typedef struct yasm_arch yasm_arch;
typedef struct yasm_preproc yasm_preproc;
typedef struct yasm_parser yasm_parser;
typedef struct yasm_objfmt yasm_objfmt;
typedef struct yasm_dbgfmt yasm_dbgfmt;
typedef struct yasm_listfmt yasm_listfmt;
typedef struct yasm_objfmt_module yasm_objfmt_module;
typedef struct yasm_dbgfmt_module yasm_dbgfmt_module;
typedef struct yasm_stdmac  yasm_stdmac;
typedef struct yasm_assoc_data_callback  yasm_assoc_data_callback;
typedef struct yasm_errwarns yasm_errwarns;
typedef struct yasm_bytecode yasm_bytecode;
typedef struct yasm_object yasm_object;
typedef struct yasm_section yasm_section;
typedef struct yasm_symtab yasm_symtab;
typedef struct yasm_symrec yasm_symrec;
typedef struct yasm_expr yasm_expr;
typedef struct yasm_intnum yasm_intnum;
typedef struct yasm_floatnum yasm_floatnum;
typedef struct yasm_value  yasm_value;
#define YASM_VALUE_RSHIFT_MAX   127
typedef struct yasm_linemap yasm_linemap;
typedef struct yasm_valparam yasm_valparam;
typedef struct yasm_valparamhead yasm_valparamhead;
typedef struct yasm_directive yasm_directive;
typedef struct yasm_effaddr yasm_effaddr;
typedef struct yasm_insn yasm_insn;
typedef enum yasm_expr_op  yasm_expr_op;
typedef int (*yasm_output_value_func)
(yasm_value *value, unsigned char *buf, unsigned int destsize,
unsigned long offset, yasm_bytecode *bc, int warn, void *d);
typedef int (*yasm_output_reloc_func)
(yasm_symrec *sym, yasm_bytecode *bc, unsigned char *buf,
unsigned int destsize, unsigned int valsize, int warn, void *d);
YASM_LIB_DECL
int yasm__mergesort(void *base, size_t nmemb, size_t size,
int (*compar)(const void *, const void *));
YASM_LIB_DECL char *yasm__strsep(char **stringp, const char *delim);
YASM_LIB_DECL
int yasm__strcasecmp(const char *s1, const char *s2);
YASM_LIB_DECL
int yasm__strncasecmp(const char *s1, const char *s2, size_t n);
YASM_LIB_DECL char *yasm__xstrdup(const char *str);
YASM_LIB_DECL char *yasm__xstrndup(const char *str, size_t max);
YASM_LIB_DECL
extern void * (*yasm_xmalloc) (size_t size);
YASM_LIB_DECL
extern void * (*yasm_xcalloc) (size_t nelem, size_t elsize);
YASM_LIB_DECL
extern void * (*yasm_xrealloc)
( void *oldmem, size_t size);
YASM_LIB_DECL
extern void (*yasm_xfree) ( void *p);
