struct tag;
struct meminfo;
struct sys_timer;
struct machine_desc ;
extern struct machine_desc *machine_desc;
extern struct machine_desc __arch_info_begin[], __arch_info_end[];
#define for_each_machine_desc(p)			\
for (p = __arch_info_begin; p < __arch_info_end; p++)
#define MACHINE_START(_type,_name)			\
static const struct machine_desc __mach_desc_##_type	\
__used							\
__attribute__((__section__(".arch.info.init"))) = ;
