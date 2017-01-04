#define YASM_UTIL_H
#if defined(HAVE_GNU_C_LIBRARY) || defined(__MINGW32__) || defined(__DJGPP__)
# ifdef __STRICT_ANSI__
#  undef __STRICT_ANSI__
# endif
# ifdef NO_STRING_INLINES
#  define __NO_STRING_INLINES
# endif
#if !defined(lint) && !defined(NDEBUG)
# define NDEBUG
# define _(String)      String
# ifdef HAVE_LOCALE_H
#  include <locale.h>
# endif
# ifdef ENABLE_NLS
#  include <libintl.h>
#  define _(String)     gettext(String)
# else
#  define gettext(Msgid)                            (Msgid)
#  define dgettext(Domainname, Msgid)               (Msgid)
#  define dcgettext(Domainname, Msgid, Category)    (Msgid)
#  define textdomain(Domainname)                    while (0)
#  define bindtextdomain(Domainname, Dirname)       while (0)
#  define _(String)     (String)
# endif
# define N_(String)     gettext_noop(String)
# define N_(String)     (String)
#define yasm__mergesort(a, b, c, d)     mergesort(a, b, c, d)
#define yasm__strsep(a, b)              strsep(a, b)
# define yasm__strcasecmp(x, y)         strcasecmp(x, y)
# define yasm__strncasecmp(x, y, n)     strncasecmp(x, y, n)
#elif HAVE_STRICMP
# define yasm__strcasecmp(x, y)         stricmp(x, y)
# define yasm__strncasecmp(x, y, n)     strnicmp(x, y, n)
#elif HAVE__STRICMP
# define yasm__strcasecmp(x, y)         _stricmp(x, y)
# define yasm__strncasecmp(x, y, n)     _strnicmp(x, y, n)
#elif HAVE_STRCMPI
# define yasm__strcasecmp(x, y)         strcmpi(x, y)
# define yasm__strncasecmp(x, y, n)     strncmpi(x, y, n)
# define USE_OUR_OWN_STRCASECMP
# include <dmalloc.h>
# define yasm__xstrdup(str)             xstrdup(str)
# define yasm_xmalloc(size)             xmalloc(size)
# define yasm_xcalloc(count, size)      xcalloc(count, size)
# define yasm_xrealloc(ptr, size)       xrealloc(ptr, size)
# define yasm_xfree(ptr)                xfree(ptr)
#define BC_TWO(c)       (0x1ul << (c))
#define BC_MSK(c)       (((unsigned long)(-1)) / (BC_TWO(BC_TWO(c)) + 1ul))
#define BC_COUNT(x,c)   ((x) & BC_MSK(c)) + (((x) >> (BC_TWO(c))) & BC_MSK(c))
#define BitCount(d, s)          do  while (0)
#define is_exp2(x)  ((x & (x - 1)) == 0)
#define NELEMS(array)   (sizeof(array) / sizeof(array[0]))
