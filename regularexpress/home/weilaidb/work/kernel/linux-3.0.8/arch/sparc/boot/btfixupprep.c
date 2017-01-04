#define MAXSYMS 1024
static char *symtab = "SYMBOL TABLE:";
static char *relrec = "RELOCATION RECORDS FOR [";
static int rellen;
static int symlen;
int mode;
struct _btfixup;
typedef struct _btfixuprel  btfixuprel;
typedef struct _btfixup  btfixup;
btfixup array[MAXSYMS];
int last = 0;
char buffer[1024];
unsigned long lastfoffset = -1;
unsigned long lastfrelno;
btfixup *lastf;
static void fatal(void) __attribute__((noreturn));
static void fatal(void)
static btfixup *find(int type, char *name)
static void set_mode (char *buffer)
int main(int argc,char **argv)
