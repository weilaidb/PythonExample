#	include <locale.h>
#	include <libintl.h>
#	ifdef HAVE_LIBCHARSET_H
#		include <libcharset.h>
#	else
#		include <langinfo.h>
#		define locale_charset() nl_langinfo(CODESET)
#	endif
int use_gettext_poison(void)
static int test_vsnprintf(const char *fmt, ...)
static const char *charset;
static void init_gettext_charset(const char *domain)
void git_setup_gettext(void)
int gettext_width(const char *s)
