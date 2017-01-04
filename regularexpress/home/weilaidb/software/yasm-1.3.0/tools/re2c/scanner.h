#define	_scanner_h
typedef struct Scanner  Scanner;
void Scanner_init(Scanner*, FILE *);
static Scanner *Scanner_new(FILE *);
int Scanner_echo(Scanner*, FILE *);
int Scanner_scan(Scanner*);
void Scanner_fatal(Scanner*, const char*);
static SubStr Scanner_token(Scanner*);
static unsigned int Scanner_line(Scanner*);
static SubStr
Scanner_token(Scanner *s)
static unsigned int
Scanner_line(Scanner *s)
static Scanner *
Scanner_new(FILE *i)
