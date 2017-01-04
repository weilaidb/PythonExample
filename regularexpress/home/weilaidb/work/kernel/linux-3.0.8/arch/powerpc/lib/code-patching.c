void patch_instruction(unsigned int *addr, unsigned int instr)
void patch_branch(unsigned int *addr, unsigned long target, int flags)
unsigned int create_branch(const unsigned int *addr,
unsigned long target, int flags)
unsigned int create_cond_branch(const unsigned int *addr,
unsigned long target, int flags)
static unsigned int branch_opcode(unsigned int instr)
static int instr_is_branch_iform(unsigned int instr)
static int instr_is_branch_bform(unsigned int instr)
int instr_is_relative_branch(unsigned int instr)
static unsigned long branch_iform_target(const unsigned int *instr)
static unsigned long branch_bform_target(const unsigned int *instr)
unsigned long branch_target(const unsigned int *instr)
int instr_is_branch_to_addr(const unsigned int *instr, unsigned long addr)
unsigned int translate_branch(const unsigned int *dest, const unsigned int *src)
static void __init test_trampoline(void)
#define check(x)	\
if (!(x)) printk("code-patching: test failed at line %d\n", __LINE__);
static void __init test_branch_iform(void)
static void __init test_create_function_call(void)
static void __init test_branch_bform(void)
static void __init test_translate_branch(void)
static int __init test_code_patching(void)
late_initcall(test_code_patching);
