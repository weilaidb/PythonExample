extern FILE *yyin;
extern int yyparse(void);
struct boot_info *the_boot_info;
int treesource_error;
struct boot_info *dt_from_source(const char *fname)
static void write_prefix(FILE *f, int level)
static int isstring(char c)
static void write_propval_string(FILE *f, struct data val)
static void write_propval_cells(FILE *f, struct data val)
static void write_propval_bytes(FILE *f, struct data val)
static void write_propval(FILE *f, struct property *prop)
static void write_tree_source_node(FILE *f, struct node *tree, int level)
{
struct property *prop;
struct node *child;
struct label *l;
write_prefix(f, level);
for_each_label(tree->labels, l)
fprintf(f, "%s: ", l->label);
if (tree->name && (*tree->name))
fprintf(f, "%s
void dt_to_source(FILE *f, struct boot_info *bi)
