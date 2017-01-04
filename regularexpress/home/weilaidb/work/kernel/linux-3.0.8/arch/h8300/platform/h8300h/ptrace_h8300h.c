#define CCR_MASK 0x6f
#define BREAKINST 0x5730
static const int h8300_register_offset[] = ;
long h8300_get_reg(struct task_struct *task, int regno)
int h8300_put_reg(struct task_struct *task, int regno, unsigned long data)
void user_disable_single_step(struct task_struct *child)
enum jump_type ;
struct optable  __attribute__((aligned(1),packed));
#define OPTABLE(ptn,msk,len,jmp)   \
static const struct optable optable_0[] = ;
static const struct optable optable_1[] = ;
static const struct optable optable_2[] = ;
static const struct optable optable_3[] = ;
static const struct optable optable_4[] = ;
static const struct optables_list  optables[] = ;
const unsigned char condmask[] = ;
static int isbranch(struct task_struct *task,int reson)
static unsigned short *getnextpc(struct task_struct *child, unsigned short *pc)
void user_enable_single_step(struct task_struct *child)
asmlinkage void trace_trap(unsigned long bp)
