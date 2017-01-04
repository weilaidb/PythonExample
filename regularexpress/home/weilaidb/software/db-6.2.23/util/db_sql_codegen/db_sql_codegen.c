extern int getopt(int, char *const [], const char *);
static int usage(char *);
static char * change_extension(char *path, char *extension);
static int read_and_parse(FILE *fp);
char *progname = "db_sql";
int line_number = 0;
int debug = 0;
int txnflag = 0;
int
main(argc,argv)
int argc;
char **argv;
static char *
scan_for_rightmost_semicolon(p)
char *p;
static int
read_and_parse(fp)
FILE *fp;
static char *
final_component_of(path)
char *path;
static char *
change_extension(path, extension)
char *path, *extension;
static int
usage(char *error_tag)
