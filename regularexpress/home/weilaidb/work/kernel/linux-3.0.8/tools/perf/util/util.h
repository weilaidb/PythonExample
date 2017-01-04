#define GIT_COMPAT_UTIL_H
#define _FILE_OFFSET_BITS 64
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
# define FLEX_ARRAY
#elif defined(__GNUC__)
# if (__GNUC__ >= 3)
#  define FLEX_ARRAY
# else
#  define FLEX_ARRAY 0
# endif
# define FLEX_ARRAY 1
#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))
#define TYPEOF(x) (__typeof__(x))
#define TYPEOF(x)
#define MSB(x, bits) ((x) & TYPEOF(x)(~0ULL << (sizeof(x) * 8 - (bits))))
#define HAS_MULTI_BITS(i)  ((i) & ((i) - 1))
#define decimal_length(x)	((int)(sizeof(x) * 2.56 + 0.5) + 1)
#define _ALL_SOURCE 1
#define _GNU_SOURCE 1
#define _BSD_SOURCE 1
#define HAS_BOOL
extern const char *graph_line;
extern const char *graph_dotted_line;
extern char buildid_dir[];
#define PATH_MAX 4096
#define PRIuMAX "llu"
#define PRIu32 "u"
#define PRIx32 "x"
#define PATH_SEP ':'
#define STRIP_EXTENSION ""
#define has_dos_drive_prefix(path) 0
#define is_dir_sep(c) ((c) == '/')
#define NORETURN __attribute__((__noreturn__))
#define NORETURN
#define __attribute__(x)
extern void usage(const char *err) NORETURN;
extern void die(const char *err, ...) NORETURN __attribute__((format (printf, 1, 2)));
extern int error(const char *err, ...) __attribute__((format (printf, 1, 2)));
extern void warning(const char *err, ...) __attribute__((format (printf, 1, 2)));
#define DIE_IF(cnd)	\
do  while (0)
extern void set_die_routine(void (*routine)(const char *err, va_list params) NORETURN);
extern int prefixcmp(const char *str, const char *prefix);
extern void set_buildid_dir(void);
extern void disable_buildid_cache(void);
static inline const char *skip_prefix(const char *str, const char *prefix)
#if __GLIBC_PREREQ(2, 1)
#define HAVE_STRCHRNUL
#define strchrnul gitstrchrnul
static inline char *gitstrchrnul(const char *s, int c)
extern char *xstrdup(const char *str);
extern void *xrealloc(void *ptr, size_t size) __attribute__((weak));
static inline void *zalloc(size_t size)
static inline int has_extension(const char *filename, const char *ext)
#undef isascii
#undef isspace
#undef isdigit
#undef isxdigit
#undef isalpha
#undef isprint
#undef isalnum
#undef tolower
#undef toupper
extern unsigned char sane_ctype[256];
#define GIT_SPACE		0x01
#define GIT_DIGIT		0x02
#define GIT_ALPHA		0x04
#define GIT_GLOB_SPECIAL	0x08
#define GIT_REGEX_SPECIAL	0x10
#define GIT_PRINT_EXTRA		0x20
#define GIT_PRINT		0x3E
#define sane_istest(x,mask) ((sane_ctype[(unsigned char)(x)] & (mask)) != 0)
#define isascii(x) (((x) & ~0x7f) == 0)
#define isspace(x) sane_istest(x,GIT_SPACE)
#define isdigit(x) sane_istest(x,GIT_DIGIT)
#define isxdigit(x)	\
(sane_istest(toupper(x), GIT_ALPHA | GIT_DIGIT) && toupper(x) < 'G')
#define isalpha(x) sane_istest(x,GIT_ALPHA)
#define isalnum(x) sane_istest(x,GIT_ALPHA | GIT_DIGIT)
#define isprint(x) sane_istest(x,GIT_PRINT)
#define tolower(x) sane_case((unsigned char)(x), 0x20)
#define toupper(x) sane_case((unsigned char)(x), 0)
static inline int sane_case(int x, int high)
int mkdir_p(char *path, mode_t mode);
int copyfile(const char *from, const char *to);
s64 perf_atoll(const char *str);
char **argv_split(const char *str, int *argcp);
void argv_free(char **argv);
bool strglobmatch(const char *str, const char *pat);
bool strlazymatch(const char *str, const char *pat);
unsigned long convert_unit(unsigned long value, char *unit);
int readn(int fd, void *buf, size_t size);
#define _STR(x) #x
#define STR(x) _STR(x)
