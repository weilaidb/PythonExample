extern int getopt(int, char * const *, const char *);
#define	DATABASE	"stream.db"
#define	CHUNK_SIZE	500
#define	DATA_SIZE	CHUNK_SIZE * 100
int main __P((int, char *[]));
int usage __P((void));
int invarg __P((const char *, int, const char *));
int
main(argc, argv)
int argc;
char *argv[];
int
invarg(progname, arg, str)
const char *progname;
int arg;
const char *str;
int
usage()
