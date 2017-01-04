extern int getopt(int, char * const *, const char *);
#define	DATABASE	"access.db"
int main __P((int, char *[]));
int usage __P((void));
int
main(argc, argv)
int argc;
char *argv[];
int
usage()
