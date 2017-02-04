#define YASM_ERRWARN_H
#define YASM_LIB_DECL
typedef enum yasm_warn_class  yasm_warn_class;
typedef enum yasm_error_class  yasm_error_class;
YASM_LIB_DECL
yasm_errwarn_initialize;
YASM_LIB_DECL
yasm_errwarn_cleanup;
YASM_LIB_DECL
extern void (*yasm_internal_error_)
(const char *file, unsigned int line, const char *message);
yasm_internal_error \
yasm_internal_error_(__FILE__, __LINE__, message)
YASM_LIB_DECL
extern void (*yasm_fatal) (const char *message, va_list va);
yasm__fatal;
YASM_LIB_DECL
yasm_error_clear;
yasm_error_occurred;
YASM_LIB_DECL
yasm_error_matches;
YASM_LIB_DECL
extern yasm_error_class yasm_eclass;
yasm_error_occurred       yasm_eclass
YASM_LIB_DECL
yasm_error_set_va;
YASM_LIB_DECL
yasm_error_set;
YASM_LIB_DECL
yasm_error_set_xref_va;
YASM_LIB_DECL
yasm_error_set_xref;
YASM_LIB_DECL
yasm_error_fetch;
YASM_LIB_DECL
yasm_warn_clear;
YASM_LIB_DECL
yasm_warn_occurred;
YASM_LIB_DECL
yasm_warn_set_va;
YASM_LIB_DECL
yasm_warn_set;
YASM_LIB_DECL
yasm_warn_fetch;
YASM_LIB_DECL
yasm_warn_enable;
YASM_LIB_DECL
yasm_warn_disable;
YASM_LIB_DECL
yasm_warn_disable_all;
*yasm_errwarns_create;
YASM_LIB_DECL
yasm_errwarns_destroy;
YASM_LIB_DECL
yasm_errwarn_propagate;
YASM_LIB_DECL
yasm_errwarns_num_errors;
typedef void (*yasm_print_error_func)
(const char *fn, unsigned long line, const char *msg, const char *xref_fn, unsigned long xref_line, const char *xref_msg);
typedef void (*yasm_print_warning_func)
(const char *fn, unsigned long line, const char *msg);
YASM_LIB_DECL
void yasm_errwarns_output_all
(yasm_errwarns *errwarns, yasm_linemap *lm, int warning_as_error,
yasm_print_error_func print_error, yasm_print_warning_func print_warning);
YASM_LIB_DECL
*yasm__conv_unprint;
YASM_LIB_DECL
extern const char * (*yasm_gettext_hook) (const char *msgid);
