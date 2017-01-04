#define YASM_ERRWARN_H
#define YASM_LIB_DECL
typedef enum yasm_warn_class  yasm_warn_class;
typedef enum yasm_error_class  yasm_error_class;
YASM_LIB_DECL
void yasm_errwarn_initialize(void);
YASM_LIB_DECL
void yasm_errwarn_cleanup(void);
YASM_LIB_DECL
extern void (*yasm_internal_error_)
(const char *file, unsigned int line, const char *message);
#define yasm_internal_error(message) \
yasm_internal_error_(__FILE__, __LINE__, message)
YASM_LIB_DECL
extern void (*yasm_fatal) (const char *message, va_list va);
YASM_LIB_DECL void yasm__fatal(const char *message, ...);
YASM_LIB_DECL
void yasm_error_clear(void);
yasm_error_class yasm_error_occurred(void);
YASM_LIB_DECL
int yasm_error_matches(yasm_error_class eclass);
YASM_LIB_DECL
extern yasm_error_class yasm_eclass;
#define yasm_error_occurred()       yasm_eclass
YASM_LIB_DECL
void yasm_error_set_va(yasm_error_class eclass, const char *format, va_list va);
YASM_LIB_DECL
void yasm_error_set(yasm_error_class eclass, const char *format, ...);
YASM_LIB_DECL
void yasm_error_set_xref_va(unsigned long xrefline, const char *format,
va_list va);
YASM_LIB_DECL
void yasm_error_set_xref(unsigned long xrefline, const char *format, ...);
YASM_LIB_DECL
void yasm_error_fetch( yasm_error_class *eclass, char **str, unsigned long *xrefline, char **xrefstr);
YASM_LIB_DECL
void yasm_warn_clear(void);
YASM_LIB_DECL
yasm_warn_class yasm_warn_occurred(void);
YASM_LIB_DECL
void yasm_warn_set_va(yasm_warn_class wclass, const char *format, va_list va);
YASM_LIB_DECL
void yasm_warn_set(yasm_warn_class wclass, const char *format, ...);
YASM_LIB_DECL
void yasm_warn_fetch( yasm_warn_class *wclass, char **str);
YASM_LIB_DECL
void yasm_warn_enable(yasm_warn_class wclass);
YASM_LIB_DECL
void yasm_warn_disable(yasm_warn_class wclass);
YASM_LIB_DECL
void yasm_warn_disable_all(void);
YASM_LIB_DECL yasm_errwarns *yasm_errwarns_create(void);
YASM_LIB_DECL
void yasm_errwarns_destroy( yasm_errwarns *errwarns);
YASM_LIB_DECL
void yasm_errwarn_propagate(yasm_errwarns *errwarns, unsigned long line);
YASM_LIB_DECL
unsigned int yasm_errwarns_num_errors(yasm_errwarns *errwarns,
int warning_as_error);
typedef void (*yasm_print_error_func)
(const char *fn, unsigned long line, const char *msg, const char *xref_fn, unsigned long xref_line, const char *xref_msg);
typedef void (*yasm_print_warning_func)
(const char *fn, unsigned long line, const char *msg);
YASM_LIB_DECL
void yasm_errwarns_output_all
(yasm_errwarns *errwarns, yasm_linemap *lm, int warning_as_error,
yasm_print_error_func print_error, yasm_print_warning_func print_warning);
YASM_LIB_DECL
char *yasm__conv_unprint(int ch);
YASM_LIB_DECL
extern const char * (*yasm_gettext_hook) (const char *msgid);
