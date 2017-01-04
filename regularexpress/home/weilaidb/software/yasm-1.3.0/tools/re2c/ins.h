#define re2c_ins_h
#define nChars 256
typedef unsigned char Char;
#define CHAR 0
#define GOTO 1
#define FORK 2
#define TERM 3
#define CTXT 4
typedef union Ins  Ins;
static int isMarked(Ins *i)
static void mark(Ins *i)
static void unmark(Ins *i)
