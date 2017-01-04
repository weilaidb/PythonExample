#define _GNU_SOURCE
void ui_helpline__pop(void)
void ui_helpline__push(const char *msg)
void ui_helpline__vpush(const char *fmt, va_list ap)
void ui_helpline__fpush(const char *fmt, ...)
void ui_helpline__puts(const char *msg)
void ui_helpline__init(void)
char ui_helpline__last_msg[1024];
int ui_helpline__show_help(const char *format, va_list ap)
