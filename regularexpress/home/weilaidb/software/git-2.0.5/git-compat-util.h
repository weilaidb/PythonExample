#define GIT_COMPAT_UTIL_H
#define _FILE_OFFSET_BITS 64
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L) && (!defined(__SUNPRO_C) || (__SUNPRO_C > 0x580))
# define FLEX_ARRAY
#elif defined(__GNUC__)
# if (__GNUC__ >= 3)
#  define FLEX_ARRAY
# else
#  define FLEX_ARRAY 0
# endif
# define FLEX_ARRAY 1
#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))
#define bitsizeof(x)  (CHAR_BIT * sizeof(x))
#define maximum_signed_value_of_type(a) \
(INTMAX_MAX >> (bitsizeof(intmax_t) - bitsizeof(a)))
#define maximum_unsigned_value_of_type(a) \
(UINTMAX_MAX >> (bitsizeof(uintmax_t) - bitsizeof(a)))
#define signed_add_overflows(a, b) \
((b) > maximum_signed_value_of_type(a) - (a))
#define unsigned_add_overflows(a, b) \
((b) > maximum_unsigned_value_of_type(a) - (a))
#define TYPEOF(x) (__typeof__(x))
#define TYPEOF(x)
#define MSB(x, bits) ((x) & TYPEOF(x)(~0ULL << (bitsizeof(x) - (bits))))
#define HAS_MULTI_BITS(i)  ((i) & ((i) - 1))
#define DIV_ROUND_UP(n,d) (((n) + (d) - 1) / (d))
#define decimal_length(x)	((int)(sizeof(x) * 2.56 + 0.5) + 1)
#if defined(__sun__)
# if __STDC_VERSION__ - 0 >= 199901L
# define _XOPEN_SOURCE 600
# else
# define _XOPEN_SOURCE 500
# endif
#elif !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__USLC__) && \
!defined(_M_UNIX) && !defined(__sgi) && !defined(__DragonFly__) && \
!defined(__TANDEM) && !defined(__QNX__) && !defined(__MirBSD__)
#define _XOPEN_SOURCE 600
#define _XOPEN_SOURCE_EXTENDED 1
#define _ALL_SOURCE 1
#define _GNU_SOURCE 1
#define _BSD_SOURCE 1
#define _NETBSD_SOURCE 1
#define _SGI_SOURCE 1
#if defined(WIN32) && !defined(__CYGWIN__)
# if defined (_MSC_VER) && !defined(_WIN32_WINNT)
#  define _WIN32_WINNT 0x0502
# endif
#define WIN32_LEAN_AND_MEAN
#define GIT_WINDOWS_NATIVE
#if defined(__MINGW32__)
#elif defined(_MSC_VER)
typedef long intptr_t;
typedef unsigned long uintptr_t;
#if defined(__CYGWIN__)
#undef _XOPEN_SOURCE
#define _XOPEN_SOURCE 600
#undef _ALL_SOURCE
#define _ALL_SOURCE 1
#define precompose_str(in,i_nfd2nfc)
#define precompose_argv(c,v)
#define probe_utf8_pathname_composition(a,b)
#define mkdir(a,b) compat_mkdir_wo_trailing_slash((a),(b))
extern int compat_mkdir_wo_trailing_slash(const char*, mode_t);
struct itimerval
#define setitimer(which,value,ovalue)
#define basename gitbasename
extern char *gitbasename(char *);
#define NI_MAXHOST 1025
#define NI_MAXSERV 32
#define PATH_MAX 4096
#define PRIuMAX "llu"
#define PRIu32 "u"
#define PRIx32 "x"
#define PRIo32 "o"
#define PATH_SEP ':'
#define _PATH_DEFPATH "/usr/local/bin:/usr/bin:/bin"
#define STRIP_EXTENSION ""
#define has_dos_drive_prefix(path) 0
#define is_dir_sep(c) ((c) == '/')
#define find_last_dir_sep(path) strrchr(path, '/')
#if defined(__HP_cc) && (__HP_cc >= 61000)
#define NORETURN __attribute__((noreturn))
#define NORETURN_PTR
#elif defined(__GNUC__) && !defined(NO_NORETURN)
#define NORETURN __attribute__((__noreturn__))
#define NORETURN_PTR __attribute__((__noreturn__))
#elif defined(_MSC_VER)
#define NORETURN __declspec(noreturn)
#define NORETURN_PTR
#define NORETURN
#define NORETURN_PTR
#define __attribute__(x)
#if defined(__GNUC__) && (__GNUC__ >= 4)
#define LAST_ARG_MUST_BE_NULL __attribute__((sentinel))
#define LAST_ARG_MUST_BE_NULL
extern void vreportf(const char *prefix, const char *err, va_list params);
extern void vwritef(int fd, const char *prefix, const char *err, va_list params);
extern NORETURN void usage(const char *err);
extern NORETURN void usagef(const char *err, ...) __attribute__((format (printf, 1, 2)));
extern NORETURN void die(const char *err, ...) __attribute__((format (printf, 1, 2)));
extern NORETURN void die_errno(const char *err, ...) __attribute__((format (printf, 1, 2)));
extern int error(const char *err, ...) __attribute__((format (printf, 1, 2)));
extern void warning(const char *err, ...) __attribute__((format (printf, 1, 2)));
#if defined(__GNUC__) && ! defined(__clang__)
#define error(...) (error(__VA_ARGS__), -1)
extern void set_die_routine(NORETURN_PTR void (*routine)(const char *err, va_list params));
extern void set_error_routine(void (*routine)(const char *err, va_list params));
extern void set_die_is_recursing_routine(int (*routine)(void));
extern int starts_with(const char *str, const char *prefix);
extern int ends_with(const char *str, const char *suffix);
static inline const char *skip_prefix(const char *str, const char *prefix)
#if defined(NO_MMAP) || defined(USE_WIN32_MMAP)
#define PROT_READ 1
#define PROT_WRITE 2
#define MAP_PRIVATE 1
#define mmap git_mmap
#define munmap git_munmap
extern void *git_mmap(void *start, size_t length, int prot, int flags, int fd, off_t offset);
extern int git_munmap(void *start, size_t length);
#define DEFAULT_PACKED_GIT_WINDOW_SIZE (1 * 1024 * 1024)
#define DEFAULT_PACKED_GIT_WINDOW_SIZE \
(sizeof(void*) >= 8 \
?  1 * 1024 * 1024 * 1024 \
: 32 * 1024 * 1024)
#define MAP_FAILED ((void *)-1)
#define on_disk_bytes(st) ((st).st_size)
#define on_disk_bytes(st) ((st).st_blocks * 512)
#define DEFAULT_PACKED_GIT_LIMIT \
((1024L * 1024L) * (sizeof(void*) >= 8 ? 8192 : 256))
#define pread git_pread
extern ssize_t git_pread(int fd, void *buf, size_t count, off_t offset);
extern ssize_t read_in_full(int fd, void *buf, size_t count);
#define setenv gitsetenv
extern int gitsetenv(const char *, const char *, int);
#define mkdtemp gitmkdtemp
extern char *gitmkdtemp(char *);
#define mkstemps gitmkstemps
extern int gitmkstemps(char *, int);
#define unsetenv gitunsetenv
extern void gitunsetenv(const char *);
#define strcasestr gitstrcasestr
extern char *gitstrcasestr(const char *haystack, const char *needle);
#define strlcpy gitstrlcpy
extern size_t gitstrlcpy(char *, const char *, size_t);
#define strtoumax gitstrtoumax
extern uintmax_t gitstrtoumax(const char *, char **, int);
#define strtoimax gitstrtoimax
extern intmax_t gitstrtoimax(const char *, char **, int);
#define hstrerror githstrerror
extern const char *githstrerror(int herror);
#define memmem gitmemmem
void *gitmemmem(const void *haystack, size_t haystacklen,
const void *needle, size_t needlelen);
#define getpagesize() sysconf(_SC_PAGESIZE)
#undef fopen
#define fopen(a,b) git_fopen(a,b)
extern FILE *git_fopen(const char*, const char*);
#undef snprintf
#define snprintf git_snprintf
extern int git_snprintf(char *str, size_t maxsize,
const char *format, ...);
#undef vsnprintf
#define vsnprintf git_vsnprintf
extern int git_vsnprintf(char *str, size_t maxsize,
const char *format, va_list ap);
#if __GLIBC_PREREQ(2, 1)
#define HAVE_STRCHRNUL
#define HAVE_MEMPCPY
#define strchrnul gitstrchrnul
static inline char *gitstrchrnul(const char *s, int c)
#define mempcpy gitmempcpy
static inline void *gitmempcpy(void *dest, const void *src, size_t n)
int inet_pton(int af, const char *src, void *dst);
const char *inet_ntop(int af, const void *src, char *dst, size_t size);
extern void release_pack_memory(size_t);
typedef void (*try_to_free_t)(size_t);
extern try_to_free_t set_try_to_free_routine(try_to_free_t);
extern char *xstrdup(const char *str);
extern void *xmalloc(size_t size);
extern void *xmallocz(size_t size);
extern void *xmemdupz(const void *data, size_t len);
extern char *xstrndup(const char *str, size_t len);
extern void *xrealloc(void *ptr, size_t size);
extern void *xcalloc(size_t nmemb, size_t size);
extern void *xmmap(void *start, size_t length, int prot, int flags, int fd, off_t offset);
extern ssize_t xread(int fd, void *buf, size_t len);
extern ssize_t xwrite(int fd, const void *buf, size_t len);
extern ssize_t xpread(int fd, void *buf, size_t len, off_t offset);
extern int xdup(int fd);
extern FILE *xfdopen(int fd, const char *mode);
extern int xmkstemp(char *template);
extern int xmkstemp_mode(char *template, int mode);
extern int odb_mkstemp(char *template, size_t limit, const char *pattern);
extern int odb_pack_keep(char *name, size_t namesz, const unsigned char *sha1);
static inline size_t xsize_t(off_t len)
static inline int has_extension(const char *filename, const char *ext)
extern const char tolower_trans_tbl[256];
#undef isascii
#undef isspace
#undef isdigit
#undef isalpha
#undef isalnum
#undef isprint
#undef islower
#undef isupper
#undef tolower
#undef toupper
#undef iscntrl
#undef ispunct
#undef isxdigit
extern const unsigned char sane_ctype[256];
#define GIT_SPACE 0x01
#define GIT_DIGIT 0x02
#define GIT_ALPHA 0x04
#define GIT_GLOB_SPECIAL 0x08
#define GIT_REGEX_SPECIAL 0x10
#define GIT_PATHSPEC_MAGIC 0x20
#define GIT_CNTRL 0x40
#define GIT_PUNCT 0x80
#define sane_istest(x,mask) ((sane_ctype[(unsigned char)(x)] & (mask)) != 0)
#define isascii(x) (((x) & ~0x7f) == 0)
#define isspace(x) sane_istest(x,GIT_SPACE)
#define isdigit(x) sane_istest(x,GIT_DIGIT)
#define isalpha(x) sane_istest(x,GIT_ALPHA)
#define isalnum(x) sane_istest(x,GIT_ALPHA | GIT_DIGIT)
#define isprint(x) ((x) >= 0x20 && (x) <= 0x7e)
#define islower(x) sane_iscase(x, 1)
#define isupper(x) sane_iscase(x, 0)
#define is_glob_special(x) sane_istest(x,GIT_GLOB_SPECIAL)
#define is_regex_special(x) sane_istest(x,GIT_GLOB_SPECIAL | GIT_REGEX_SPECIAL)
#define iscntrl(x) (sane_istest(x,GIT_CNTRL))
#define ispunct(x) sane_istest(x, GIT_PUNCT | GIT_REGEX_SPECIAL | \
GIT_GLOB_SPECIAL | GIT_PATHSPEC_MAGIC)
#define isxdigit(x) (hexval_table[x] != -1)
#define tolower(x) sane_case((unsigned char)(x), 0x20)
#define toupper(x) sane_case((unsigned char)(x), 0)
#define is_pathspec_magic(x) sane_istest(x,GIT_PATHSPEC_MAGIC)
static inline int sane_case(int x, int high)
static inline int sane_iscase(int x, int is_lower)
static inline int strtoul_ui(char const *s, int base, unsigned int *result)
static inline int strtol_i(char const *s, int base, int *result)
void git_qsort(void *base, size_t nmemb, size_t size,
int(*compar)(const void *, const void *));
#define qsort git_qsort
# define FORCE_DIR_SET_GID S_ISGID
# define FORCE_DIR_SET_GID 0
#undef USE_NSEC
#define ST_CTIME_NSEC(st) 0
#define ST_MTIME_NSEC(st) 0
#define ST_CTIME_NSEC(st) ((unsigned int)((st).st_ctimespec.tv_nsec))
#define ST_MTIME_NSEC(st) ((unsigned int)((st).st_mtimespec.tv_nsec))
#define ST_CTIME_NSEC(st) ((unsigned int)((st).st_ctim.tv_nsec))
#define ST_MTIME_NSEC(st) ((unsigned int)((st).st_mtim.tv_nsec))
#define fstat_is_reliable() 0
#define fstat_is_reliable() 1
#define va_copy(dst, src) __va_copy(dst, src)
#define va_copy(dst, src) ((dst) = (src))
int unlink_or_warn(const char *path);
int rmdir_or_warn(const char *path);
int remove_or_warn(unsigned int mode, const char *path);
#define ACCESS_EACCES_OK (1U << 0)
int access_or_warn(const char *path, int mode, unsigned flag);
int access_or_die(const char *path, int mode, unsigned flag);
void warn_on_inaccessible(const char *path);
struct passwd *xgetpwuid_self(void);
struct tm *git_gmtime(const time_t *);
struct tm *git_gmtime_r(const time_t *, struct tm *);
#define gmtime git_gmtime
#define gmtime_r git_gmtime_r
