static int misalignment_addr(unsigned long *registers, unsigned long sp,
unsigned params, unsigned opcode,
unsigned long disp,
void **_address, unsigned long **_postinc,
unsigned long *_inc);
static int misalignment_reg(unsigned long *registers, unsigned params,
unsigned opcode, unsigned long disp,
unsigned long **_register);
static void misalignment_MOV_Lcc(struct pt_regs *regs, uint32_t opcode);
static const unsigned Dreg_index[] = ;
static const unsigned Areg_index[] = ;
static const unsigned Rreg_index[] = ;
enum format_id ;
static const struct  format_tbl[16] = ;
enum value_id ;
struct mn10300_opcode ;
static const struct mn10300_opcode mn10300_opcodes[] = ;
asmlinkage void misalignment(struct pt_regs *regs, enum exception_code code)
static int misalignment_addr(unsigned long *registers, unsigned long sp,
unsigned params, unsigned opcode,
unsigned long disp,
void **_address, unsigned long **_postinc,
unsigned long *_inc)
static int misalignment_reg(unsigned long *registers, unsigned params,
unsigned opcode, unsigned long disp,
unsigned long **_register)
static void misalignment_MOV_Lcc(struct pt_regs *regs, uint32_t opcode)
static u8 __initdata testbuf[512] __attribute__((aligned(16))) = ;
#define ASSERTCMP(X, OP, Y)						\
do  while(0)
static int __init test_misalignment(void)
arch_initcall(test_misalignment);
