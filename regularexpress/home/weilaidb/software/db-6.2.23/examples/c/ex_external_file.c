#define CMD_LEN 25
extern int getopt(int, char * const *, const char *);
int db_ext_file_example __P((const char *, FILE *, const char *));
int usage __P((void));
const char *progname = "ex_external_file";
int
main(argc, argv)
int argc;
char *argv[];
int
db_ext_file_example(home, errfp, progname)
const char *home;
FILE *errfp;
const char *progname;
int
usage()
