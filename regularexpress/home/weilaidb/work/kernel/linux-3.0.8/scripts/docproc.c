#define _GNU_SOURCE
int exitstatus = 0;
typedef void DFL(char *);
DFL *defaultline;
typedef void FILEONLY(char * file);
FILEONLY *internalfunctions;
FILEONLY *externalfunctions;
FILEONLY *symbolsonly;
FILEONLY *findall;
typedef void FILELINE(char * file, char * line);
FILELINE * singlefunctions;
FILELINE * entity_system;
FILELINE * docsection;
#define MAXLINESZ     2048
#define MAXFILES      250
#define KERNELDOCPATH "scripts/"
#define KERNELDOC     "kernel-doc"
#define DOCBOOK       "-docbook"
#define LIST          "-list"
#define FUNCTION      "-function"
#define NOFUNCTION    "-nofunction"
#define NODOCSECTIONS "-no-doc-sections"
static char *srctree, *kernsrctree;
static char **all_list = NULL;
static int all_list_len = 0;
static void consume_symbol(const char *sym)
static void usage (void)
static void exec_kernel_doc(char **svec)
struct symbols
;
struct symfile
;
struct symfile symfilelist[MAXFILES];
int symfilecnt = 0;
static void add_new_symbol(struct symfile *sym, char * symname)
static struct symfile * add_new_file(char * filename)
static struct symfile * filename_exist(char * filename)
static void adddep(char * file)
static void adddep2(char * file, char * line)
static void noaction(char * line)
static void noaction2(char * file, char * line)
static void printline(char * line)
static void find_export_symbols(char * filename)
static void docfunctions(char * filename, char * type)
static void intfunc(char * filename)
static void extfunc(char * filename)
static void singfunc(char * filename, char * line)
static void docsect(char *filename, char *line)
static void find_all_symbols(char *filename)
static void parse_file(FILE *infile)
int main(int argc, char *argv[])
