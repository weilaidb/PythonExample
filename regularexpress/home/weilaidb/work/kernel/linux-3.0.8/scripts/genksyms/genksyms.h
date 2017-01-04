#define MODUTILS_GENKSYMS_H 1
enum symbol_type ;
enum symbol_status ;
struct string_list ;
struct symbol ;
typedef struct string_list **yystype;
#define YYSTYPE yystype
extern int cur_line;
extern char *cur_filename;
struct symbol *find_symbol(const char *name, enum symbol_type ns, int exact);
struct symbol *add_symbol(const char *name, enum symbol_type type,
struct string_list *defn, int is_extern);
void export_symbol(const char *);
void free_node(struct string_list *list);
void free_list(struct string_list *s, struct string_list *e);
struct string_list *copy_node(struct string_list *);
struct string_list *copy_list_range(struct string_list *start,
struct string_list *end);
int yylex(void);
int yyparse(void);
void error_with_pos(const char *, ...);
#define xmalloc(size) ()
#define xstrdup(str)  ()
