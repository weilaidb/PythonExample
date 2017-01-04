extern int getopt(int, char * const *, const char *);
#define	DATABASE	"access.db"
int dbdemo_main __P((int, char *[]));
int dbdemo_usage __P((void));
int
dbdemo(args)
char *args;
#define	ERROR_RETURN	ERROR
int
dbdemo_main(argc, argv)
int argc;
char *argv[];
int
dbdemo_usage()
