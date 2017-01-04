#define MSG_MAXSIZE     1024
#if !defined(HAVE_TOASCII) || defined(lint)
# define toascii(c) ((c) & 0x7F)
static void def_internal_error_
(const char *file, unsigned int line, const char *message);
static void def_fatal(const char *message, va_list va);
static const char *def_gettext_hook(const char *msgid); void (*yasm_internal_error_)
(const char *file, unsigned int line, const char *message)
= def_internal_error_; void (*yasm_fatal) (const char *message, va_list va) = def_fatal;
const char * (*yasm_gettext_hook) (const char *msgid) = def_gettext_hook;
yasm_error_class yasm_eclass;
static char *yasm_estr;
static unsigned long yasm_exrefline;
static char *yasm_exrefstr;
typedef struct warn  warn;
static STAILQ_HEAD(warn_head, warn) yasm_warns;
static unsigned long warn_class_enabled;
typedef struct errwarn_data  errwarn_data;
struct yasm_errwarns ;
static char unprint[5];
static const char *
def_gettext_hook(const char *msgid)
void
yasm_errwarn_initialize(void)
void
yasm_errwarn_cleanup(void)
char *
yasm__conv_unprint(int ch)
static void
def_internal_error_(const char *file, unsigned int line, const char *message)
static void
def_fatal(const char *fmt, va_list va)
static errwarn_data *
errwarn_data_new(yasm_errwarns *errwarns, unsigned long line,
int replace_parser_error)
void
yasm_error_clear(void)
int
yasm_error_matches(yasm_error_class eclass)
void
yasm_error_set_va(yasm_error_class eclass, const char *format, va_list va)
void
yasm_error_set(yasm_error_class eclass, const char *format, ...)
void
yasm_error_set_xref_va(unsigned long xrefline, const char *format, va_list va)
void
yasm_error_set_xref(unsigned long xrefline, const char *format, ...)
void
yasm_error_fetch(yasm_error_class *eclass, char **str, unsigned long *xrefline,
char **xrefstr)
void yasm_warn_clear(void)
yasm_warn_class
yasm_warn_occurred(void)
void
yasm_warn_set_va(yasm_warn_class wclass, const char *format, va_list va)
void
yasm_warn_set(yasm_warn_class wclass, const char *format, ...)
void
yasm_warn_fetch(yasm_warn_class *wclass, char **str)
void
yasm_warn_enable(yasm_warn_class num)
void
yasm_warn_disable(yasm_warn_class num)
void
yasm_warn_disable_all(void)
yasm_errwarns *
yasm_errwarns_create(void)
void
yasm_errwarns_destroy(yasm_errwarns *errwarns)
void
yasm_errwarn_propagate(yasm_errwarns *errwarns, unsigned long line)
unsigned int
yasm_errwarns_num_errors(yasm_errwarns *errwarns, int warning_as_error)
void
yasm_errwarns_output_all(yasm_errwarns *errwarns, yasm_linemap *lm,
int warning_as_error,
yasm_print_error_func print_error,
yasm_print_warning_func print_warning)
void
yasm__fatal(const char *message, ...)
