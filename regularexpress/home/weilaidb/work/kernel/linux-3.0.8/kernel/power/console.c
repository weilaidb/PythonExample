#if defined(CONFIG_VT) && defined(CONFIG_VT_CONSOLE)
#define SUSPEND_CONSOLE	(MAX_NR_CONSOLES-1)
static int orig_fgconsole, orig_kmsg;
int pm_prepare_console(void)
void pm_restore_console(void)
