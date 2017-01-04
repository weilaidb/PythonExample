#define MICROBLAZE_ILL_OPCODE_EXCEPTION	0x02
#define MICROBLAZE_IBUS_EXCEPTION	0x03
#define MICROBLAZE_DBUS_EXCEPTION	0x04
#define MICROBLAZE_DIV_ZERO_EXCEPTION	0x05
#define MICROBLAZE_FPU_EXCEPTION	0x06
#define MICROBLAZE_PRIVILEGED_EXCEPTION	0x07
static DEFINE_SPINLOCK(die_lock);
void die(const char *str, struct pt_regs *fp, long err)
asmlinkage void sw_exception(struct pt_regs *regs)
void _exception(int signr, struct pt_regs *regs, int code, unsigned long addr)
asmlinkage void full_exception(struct pt_regs *regs, unsigned int type,
int fsr, int addr)
