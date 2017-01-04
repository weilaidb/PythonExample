#define BOOT_COMPRESSED_MISC_H
#undef CONFIG_PARAVIRT
#define _ASM_X86_DESC_H 1
#define BOOT_BOOT_H
extern struct boot_params *real_mode;
void __putstr(int error, const char *s);
#define putstr(__x)  __putstr(0, __x)
#define puts(__x)  __putstr(0, __x)
int cmdline_find_option(const char *option, char *buffer, int bufsize);
int cmdline_find_option_bool(const char *option);
extern int early_serial_base;
void console_init(void);
