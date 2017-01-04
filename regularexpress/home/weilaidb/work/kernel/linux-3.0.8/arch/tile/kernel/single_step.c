#define signExtend17(val) sign_extend((val), 17)
#define TILE_X1_MASK (0xffffffffULL << 31)
int unaligned_printk;
static int __init setup_unaligned_printk(char *str)
__setup("unaligned_printk=", setup_unaligned_printk);
unsigned int unaligned_fixup_count;
enum mem_op ;
static inline tile_bundle_bits set_BrOff_X1(tile_bundle_bits n, s32 offset)
static inline tile_bundle_bits move_X1(tile_bundle_bits n, int dest, int src)
static inline tile_bundle_bits nop_X1(tile_bundle_bits n)
static inline tile_bundle_bits addi_X1(
tile_bundle_bits n, int dest, int src, int imm)
static tile_bundle_bits rewrite_load_store_unaligned(
struct single_step_state *state,
tile_bundle_bits bundle,
struct pt_regs *regs,
enum mem_op mem_op,
int size, int sign_ext)
void single_step_execve(void)
void single_step_once(struct pt_regs *regs)
static DEFINE_PER_CPU(unsigned long, ss_saved_pc);
void gx_singlestep_handle(struct pt_regs *regs, int fault_num)
void single_step_once(struct pt_regs *regs)
void single_step_execve(void)
