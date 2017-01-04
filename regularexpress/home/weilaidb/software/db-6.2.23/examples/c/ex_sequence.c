extern int getopt(int, char * const *, const char *);
#define	DATABASE	"sequence.db"
#define	SEQUENCE	"my_sequence"
int main __P((int, char *[]));
int usage __P((void));
int
main(argc, argv)
int argc;
char *argv[];
int
usage()
