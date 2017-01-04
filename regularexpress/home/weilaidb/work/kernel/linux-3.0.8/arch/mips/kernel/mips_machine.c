static struct mips_machine *mips_machine __initdata;
static char *mips_machine_name = "Unknown";
#define for_each_machine(mach) \
for ((mach) = (struct mips_machine *)&__mips_machines_start; \
(mach) && \
(unsigned long)(mach) < (unsigned long)&__mips_machines_end; \
(mach)++)
__init void mips_set_machine_name(const char *name)
char *mips_get_machine_name(void)
__init int mips_machtype_setup(char *id)
__setup("machtype=", mips_machtype_setup);
__init void mips_machine_setup(void)
