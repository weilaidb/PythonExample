typedef enum  symtype;
typedef enum amode_t;
typedef SLIST_HEAD(symlist, symbol_node) symlist_t;
struct reg_info ;
struct field_info ;
struct const_info ;
struct alias_info ;
struct label_info ;
struct cond_info ;
struct macro_arg ;
STAILQ_HEAD(macro_arg_list, macro_arg) args;
struct macro_info ;
typedef struct expression_info  expression_t;
typedef struct symbol  symbol_t;
typedef struct symbol_ref  symbol_ref_t;
typedef struct symbol_node  symbol_node_t;
typedef struct critical_section  critical_section_t;
typedef enum  scope_type;
typedef struct patch_info  patch_info_t;
typedef struct scope  scope_t;
TAILQ_HEAD(cs_tailq, critical_section);
SLIST_HEAD(scope_list, scope);
TAILQ_HEAD(scope_tailq, scope);
void	symbol_delete(symbol_t *symbol);
void	symtable_open(void);
void	symtable_close(void);
symbol_t *
symtable_get(char *name);
symbol_node_t *
symlist_search(symlist_t *symlist, char *symname);
void
symlist_add(symlist_t *symlist, symbol_t *symbol, int how);
#define SYMLIST_INSERT_HEAD	0x00
#define SYMLIST_SORT		0x01
void	symlist_free(symlist_t *symlist);
void	symlist_merge(symlist_t *symlist_dest, symlist_t *symlist_src1,
symlist_t *symlist_src2);
void	symtable_dump(FILE *ofile, FILE *dfile);
