unsigned long acpi_realmode_flags;
#if defined(CONFIG_SMP) && defined(CONFIG_64BIT)
static char temp_stack[4096];
int acpi_suspend_lowlevel(void)
static int __init acpi_sleep_setup(char *str)
__setup("acpi_sleep=", acpi_sleep_setup);
