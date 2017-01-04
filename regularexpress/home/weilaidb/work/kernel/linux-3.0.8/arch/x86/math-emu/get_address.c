#define FPU_WRITE_BIT 0x10
static int reg_offset[] = ;
#define REG_(x) (*(long *)(reg_offset[(x)] + (u_char *)FPU_info->regs))
static int reg_offset_vm86[] = ;
#define VM86_REG_(x) (*(unsigned short *) \
(reg_offset_vm86[((unsigned)x)] + (u_char *)FPU_info->regs))
static int reg_offset_pm[] = ;
#define PM_REG_(x) (*(unsigned short *) \
(reg_offset_pm[((unsigned)x)] + (u_char *)FPU_info->regs))
static int sib(int mod, unsigned long *fpu_eip)
static unsigned long vm86_segment(u_char segment, struct address *addr)
static long pm_address(u_char FPU_modrm, u_char segment,
struct address *addr, long offset)
void __user *FPU_get_address(u_char FPU_modrm, unsigned long *fpu_eip,
struct address *addr, fpu_addr_modes addr_modes)
void __user *FPU_get_address_16(u_char FPU_modrm, unsigned long *fpu_eip,
struct address *addr, fpu_addr_modes addr_modes)
