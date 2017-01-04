#define HASH_BUCKETS  4096
static struct symbol *symtab[HASH_BUCKETS];
static FILE *debugfile;
int cur_line = 1;
char *cur_filename;
static int flag_debug, flag_dump_defs, flag_reference, flag_dump_types,
flag_preserve, flag_warnings;
static const char *arch = "";
static const char *mod_prefix = "";
static int errors;
static int nsyms;
static struct symbol *expansion_trail;
static struct symbol *visited_symbols;
static const struct  symbol_types[] = ;
static int equal_list(struct string_list *a, struct string_list *b);
static void print_list(FILE * f, struct string_list *list);
static struct string_list *concat_list(struct string_list *start, ...);
static struct string_list *mk_node(const char *string);
static void print_location(void);
static void print_type_name(enum symbol_type type, const char *name);
static const unsigned int crctab32[] = ;
static unsigned long partial_crc32_one(unsigned char c, unsigned long crc)
static unsigned long partial_crc32(const char *s, unsigned long crc)
static unsigned long crc32(const char *s)
static enum symbol_type map_to_ns(enum symbol_type t)
struct symbol *find_symbol(const char *name, enum symbol_type ns, int exact)
static int is_unknown_symbol(struct symbol *sym)
") == 0 &&
(defn = defn->next) && defn->tag == SYM_NORMAL &&
strcmp(defn->string, "UNKNOWN") == 0 &&
(defn = defn->next) && defn->tag == SYM_NORMAL &&
strcmp(defn->string, "
static struct symbol *__add_symbol(const char *name, enum symbol_type type,
struct string_list *defn, int is_extern,
int is_reference)
struct symbol *add_symbol(const char *name, enum symbol_type type,
struct string_list *defn, int is_extern)
static struct symbol *add_reference_symbol(const char *name, enum symbol_type type,
struct string_list *defn, int is_extern)
void free_node(struct string_list *node)
void free_list(struct string_list *s, struct string_list *e)
static struct string_list *mk_node(const char *string)
static struct string_list *concat_list(struct string_list *start, ...)
struct string_list *copy_node(struct string_list *node)
struct string_list *copy_list_range(struct string_list *start,
struct string_list *end)
static int equal_list(struct string_list *a, struct string_list *b)
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
static struct string_list *read_node(FILE *f)
static void read_reference(FILE *f)
static void print_node(FILE * f, struct string_list *list)
static void print_list(FILE * f, struct string_list *list)
static unsigned long expand_and_crc_sym(struct symbol *sym, unsigned long crc)
void export_symbol(const char *name)
static void print_location(void)
static void print_type_name(enum symbol_type type, const char *name)
void error_with_pos(const char *fmt, ...)
static void genksyms_usage(void)
int main(int argc, char **argv)
