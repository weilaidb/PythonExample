typedef unsigned char uchar;
#define NEGATE_CLASS	'!'
#define NEGATE_CLASS2	'^'
#define CC_EQ(class, len, litmatch) ((len) == sizeof (litmatch)-1 \
&& *(class) == *(litmatch) \
&& strncmp((char*)class, litmatch, len) == 0)
#if defined STDC_HEADERS || !defined isascii
# define ISASCII(c) 1
# define ISASCII(c) isascii(c)
# define ISBLANK(c) (ISASCII(c) && isblank(c))
# define ISBLANK(c) ((c) == ' ' || (c) == '\t')
# define ISGRAPH(c) (ISASCII(c) && isgraph(c))
# define ISGRAPH(c) (ISASCII(c) && isprint(c) && !isspace(c))
#define ISPRINT(c) (ISASCII(c) && isprint(c))
#define ISDIGIT(c) (ISASCII(c) && isdigit(c))
#define ISALNUM(c) (ISASCII(c) && isalnum(c))
#define ISALPHA(c) (ISASCII(c) && isalpha(c))
#define ISCNTRL(c) (ISASCII(c) && iscntrl(c))
#define ISLOWER(c) (ISASCII(c) && islower(c))
#define ISPUNCT(c) (ISASCII(c) && ispunct(c))
#define ISSPACE(c) (ISASCII(c) && isspace(c))
#define ISUPPER(c) (ISASCII(c) && isupper(c))
#define ISXDIGIT(c) (ISASCII(c) && isxdigit(c))
static int dowild(const uchar *p, const uchar *text, unsigned int flags)
int wildmatch(const char *pattern, const char *text,
unsigned int flags, struct wildopts *wo)
