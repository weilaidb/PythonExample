#define MSG_MAXSIZE     1024
#if !defined(HAVE_TOASCII) || defined(lint)
toascii ((c) & 0x7F)
static void def_internal_error_
(const char *file, unsigned int line, const char *message);
def_fatal;
*def_gettext_hook; void (*yasm_internal_error_)
(const char *file, unsigned int line, const char *message)
= def_internal_error_; void (*yasm_fatal) (const char *message, va_list va) = def_fatal;
const char * (*yasm_gettext_hook) (const char *msgid) = def_gettext_hook;
yasm_error_class yasm_eclass;
static char *yasm_estr;
static unsigned long yasm_exrefline;
static char *yasm_exrefstr;
typedef struct warn  warn;
STAILQ_HEAD yasm_warns;
static unsigned long warn_class_enabled;
typedef struct errwarn_data  errwarn_data;
struct yasm_errwarns ;
static char unprint[5];
def_gettext_hook
yasm_errwarn_initialize
yasm_errwarn_cleanup
yasm__conv_unprint
def_internal_error_
def_fatal
errwarn_data_new
yasm_error_clear
yasm_error_matches
yasm_error_set_va
yasm_error_set
yasm_error_set_xref_va
yasm_error_set_xref
yasm_error_fetch
yasm_warn_clear
yasm_warn_occurred
yasm_warn_set_va
yasm_warn_set
yasm_warn_fetch
yasm_warn_enable
yasm_warn_disable
yasm_warn_disable_all
yasm_errwarns_create
yasm_errwarns_destroy
yasm_errwarn_propagate
yasm_errwarns_num_errors
yasm_errwarns_output_all
yasm__fatal
