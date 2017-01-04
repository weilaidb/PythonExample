#define SHADOW_CONSOLE_START		(0x500)
#define SHADOW_CONSOLE_END		(0x1000)
#define SHADOW_CONSOLE_MAGIC_LOC	(0x4F0)
#define SHADOW_CONSOLE_MAGIC		(0xDEADBEEF)
static __initdata char *shadow_console_buffer = (char *)SHADOW_CONSOLE_START;
__init void early_shadow_write(struct console *con, const char *s,
unsigned int n)
static __initdata struct console early_shadow_console = ;
__init int shadow_console_enabled(void)
__init void mark_shadow_error(void)
__init void enable_shadow_console(void)
static __init int disable_shadow_console(void)
pure_initcall(disable_shadow_console);
__init void early_shadow_reg(unsigned long reg, unsigned int n)
