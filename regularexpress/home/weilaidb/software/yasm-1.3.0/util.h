#define YASM_UTIL_H
defined || defined(__MINGW32__) || defined(__DJGPP__)
# ifdef __STRICT_ANSI__
#  undef __STRICT_ANSI__
# endif
# ifdef NO_STRING_INLINES
#  define __NO_STRING_INLINES
# endif
#if !defined(lint) && !defined(NDEBUG)
# define NDEBUG
_      String
# ifdef HAVE_LOCALE_H
#  include <locale.h>
# endif
# ifdef ENABLE_NLS
#  include <libintl.h>
_     gettext(String)
# else
gettext                            (Msgid)
dgettext               (Msgid)
dcgettext    (Msgid)
textdomain                    while (0)
bindtextdomain       while (0)
_     (String)
# endif
N_     gettext_noop(String)
N_     (String)
yasm__mergesort     mergesort(a, b, c, d)
yasm__strsep              strsep(a, b)
yasm__strcasecmp         strcasecmp(x, y)
yasm__strncasecmp     strncasecmp(x, y, n)
#elif HAVE_STRICMP
yasm__strcasecmp         stricmp(x, y)
yasm__strncasecmp     strnicmp(x, y, n)
#elif HAVE__STRICMP
yasm__strcasecmp         _stricmp(x, y)
yasm__strncasecmp     _strnicmp(x, y, n)
#elif HAVE_STRCMPI
yasm__strcasecmp         strcmpi(x, y)
yasm__strncasecmp     strncmpi(x, y, n)
# define USE_OUR_OWN_STRCASECMP
# include <dmalloc.h>
yasm__xstrdup             xstrdup(str)
yasm_xmalloc             xmalloc(size)
yasm_xcalloc      xcalloc(count, size)
yasm_xrealloc       xrealloc(ptr, size)
yasm_xfree                xfree(ptr)
BC_TWO       (0x1ul << (c))
BC_MSK       (((unsigned long)(-1)) / (BC_TWO(BC_TWO(c)) + 1ul))
BC_MSK)
BitCount          do  while (0)
is_exp2  ((x & (x - 1)) == 0)
NELEMS   (sizeof(array) / sizeof(array[0]))
