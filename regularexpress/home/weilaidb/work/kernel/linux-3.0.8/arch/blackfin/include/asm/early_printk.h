#define __ASM_EARLY_PRINTK_H__
extern int setup_early_printk(char *);
extern void enable_shadow_console(void);
extern int shadow_console_enabled(void);
extern void mark_shadow_error(void);
extern void early_shadow_reg(unsigned long reg, unsigned int n);
extern void early_shadow_write(struct console *con, const char *s,
unsigned int n) __attribute__((nonnull(2)));
#define early_shadow_puts(str) early_shadow_write(NULL, str, strlen(str))
#define early_shadow_stamp() \
do  while (0)
#define setup_early_printk(fmt) do  while (0)
#define enable_shadow_console(fmt)  do  while (0)
#define early_shadow_stamp() do  while (0)
