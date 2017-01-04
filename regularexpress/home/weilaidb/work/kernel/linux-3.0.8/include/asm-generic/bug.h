#define _ASM_GENERIC_BUG_H
struct bug_entry ;
#define BUGFLAG_WARNING		(1 << 0)
#define BUGFLAG_TAINT(taint)	(BUGFLAG_WARNING | ((taint) << 8))
#define BUG_GET_TAINT(bug)	((bug)->flags >> 8)
#define BUG() do  while (0)
#define BUG_ON(condition) do  while(0)
extern void warn_slowpath_fmt(const char *file, const int line,
const char *fmt, ...) __attribute__((format(printf, 3, 4)));
extern void warn_slowpath_fmt_taint(const char *file, const int line,
unsigned taint, const char *fmt, ...)
__attribute__((format(printf, 4, 5)));
extern void warn_slowpath_null(const char *file, const int line);
#define WANT_WARN_ON_SLOWPATH
#define __WARN()		warn_slowpath_null(__FILE__, __LINE__)
#define __WARN_printf(arg...)	warn_slowpath_fmt(__FILE__, __LINE__, arg)
#define __WARN_printf_taint(taint, arg...)				\
warn_slowpath_fmt_taint(__FILE__, __LINE__, taint, arg)
#define __WARN()		__WARN_TAINT(TAINT_WARN)
#define __WARN_printf(arg...)	do  while (0)
#define __WARN_printf_taint(taint, arg...)				\
do  while (0)
#define WARN_ON(condition) ()
#define WARN(condition, format...) ()
#define WARN_TAINT(condition, taint, format...) ()
#define BUG() do  while(0)
#define BUG_ON(condition) do  while(0)
#define WARN_ON(condition) ()
#define WARN(condition, format...) ()
#define WARN_TAINT(condition, taint, format...) WARN_ON(condition)
#define WARN_ON_ONCE(condition)	()
#define WARN_ONCE(condition, format...)	()
#define WARN_TAINT_ONCE(condition, taint, format...)	()
# define WARN_ON_SMP(x)			WARN_ON(x)
# define WARN_ON_SMP(x)			()
