#define TRUE 1
#define FALSE 0
typedef struct path_entry  *path_entry_t;
typedef enum  include_type;
SLIST_HEAD(path_list, path_entry);
extern struct path_list search_path;
extern struct cs_tailq cs_tailq;
extern struct scope_list scope_stack;
extern struct symlist patch_functions;
extern int includes_search_curdir;
extern char *appname;
extern char *stock_include_file;
extern int yylineno;
extern char *yyfilename;
extern char *prefix;
extern char *patch_arg_list;
extern char *versions;
extern int   src_mode;
extern int   dst_mode;
struct symbol;
void stop(const char *errstring, int err_code);
void include_file(char *file_name, include_type type);
void expand_macro(struct symbol *macro_symbol);
struct instruction *seq_alloc(void);
struct critical_section *cs_alloc(void);
struct scope *scope_alloc(void);
void process_scope(struct scope *);
