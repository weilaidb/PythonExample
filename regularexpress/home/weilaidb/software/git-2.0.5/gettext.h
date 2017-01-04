#define GETTEXT_H
#if defined(_) || defined(Q_)
#error "namespace conflict: '_' or 'Q_' is pre-defined?"
#	include <libintl.h>
#	ifdef gettext
#		undef gettext
#	endif
#	define gettext(s) (s)
#	ifdef ngettext
#		undef ngettext
#	endif
#	define ngettext(s, p, n) ((n == 1) ? (s) : (p))
#define FORMAT_PRESERVING(n) __attribute__((format_arg(n)))
extern void git_setup_gettext(void);
extern int gettext_width(const char *s);
static inline void git_setup_gettext(void)
static inline int gettext_width(const char *s)
extern int use_gettext_poison(void);
#define use_gettext_poison() 0
static inline FORMAT_PRESERVING(1) const char *_(const char *msgid)
static inline FORMAT_PRESERVING(1) FORMAT_PRESERVING(2)
const char *Q_(const char *msgid, const char *plu, unsigned long n)
#define N_(msgid) msgid
