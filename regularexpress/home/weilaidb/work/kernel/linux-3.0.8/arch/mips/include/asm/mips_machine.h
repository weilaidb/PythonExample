#define __ASM_MIPS_MACHINE_H
struct mips_machine ;
#define MIPS_MACHINE(_type, _id, _name, _setup)			\
static const char machine_name_##_type[] __initconst		\
__aligned(1) = _name;			\
static const char machine_id_##_type[] __initconst		\
__aligned(1) = _id;			\
static struct mips_machine machine_##_type			\
__used __section(.mips.machines.init) =		\
;
extern long __mips_machines_start;
extern long __mips_machines_end;
int  mips_machtype_setup(char *id) __init;
void mips_machine_setup(void) __init;
void mips_set_machine_name(const char *name) __init;
char *mips_get_machine_name(void);
static inline int mips_machtype_setup(char *id)
static inline void mips_machine_setup(void)
static inline void mips_set_machine_name(const char *name)
static inline char *mips_get_machine_name(void)
