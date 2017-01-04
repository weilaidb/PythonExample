#if linux
typedef struct patch  patch_t;
STAILQ_HEAD(patch_list, patch) patches;
static void usage(void);
static void back_patch(void);
static void output_code(void);
static void output_listing(char *ifilename);
static void dump_scope(scope_t *scope);
static void emit_patch(scope_t *scope, int patch);
static int check_patch(patch_t **start_patch, int start_instr,
int *skip_addr, int *func_vals);
struct path_list search_path;
int includes_search_curdir;
char *appname;
char *stock_include_file;
FILE *ofile;
char *ofilename;
char *regfilename;
FILE *regfile;
char *listfilename;
FILE *listfile;
char *regdiagfilename;
FILE *regdiagfile;
int   src_mode;
int   dst_mode;
static STAILQ_HEAD(,instruction) seq_program;
struct cs_tailq cs_tailq;
struct scope_list scope_stack;
symlist_t patch_functions;
#if DEBUG
extern int yy_flex_debug;
extern int mm_flex_debug;
extern int yydebug;
extern int mmdebug;
extern FILE *yyin;
extern int yyparse(void);
int main(int argc, char *argv[]);
int
main(int argc, char *argv[])
static void
usage()
static void
back_patch()
static void
output_code()
static void
dump_scope(scope_t *scope)
void
emit_patch(scope_t *scope, int patch)
void
output_listing(char *ifilename)
static int
check_patch(patch_t **start_patch, int start_instr,
int *skip_addr, int *func_vals)
void
stop(const char *string, int err_code)
struct instruction *
seq_alloc()
critical_section_t *
cs_alloc()
scope_t *
scope_alloc()
void
process_scope(scope_t *scope)
