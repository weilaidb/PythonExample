#define _ASM_X86_KVM_X86_EMULATE_H
struct x86_emulate_ctxt;
enum x86_intercept;
enum x86_intercept_stage;
struct x86_exception ;
struct x86_instruction_info ;
#define X86EMUL_CONTINUE        0
#define X86EMUL_UNHANDLEABLE    1
#define X86EMUL_PROPAGATE_FAULT 2
#define X86EMUL_RETRY_INSTR     3
#define X86EMUL_CMPXCHG_FAILED  4
#define X86EMUL_IO_NEEDED       5
#define X86EMUL_INTERCEPTED     6
struct x86_emulate_ops ;
typedef u32 __attribute__((vector_size(16))) sse128_t;
struct operand ;
struct fetch_cache ;
struct read_cache ;
struct decode_cache ;
struct x86_emulate_ctxt ;
#define REPE_PREFIX	0xf3
#define REPNE_PREFIX	0xf2
#define X86EMUL_MODE_REAL     0
#define X86EMUL_MODE_VM86     1
#define X86EMUL_MODE_PROT16   2
#define X86EMUL_MODE_PROT32   4
#define X86EMUL_MODE_PROT64   8
#define X86EMUL_MODE_PROT     (X86EMUL_MODE_PROT16|X86EMUL_MODE_PROT32| \
X86EMUL_MODE_PROT64)
enum x86_intercept_stage ;
enum x86_intercept ;
#if defined(CONFIG_X86_32)
#define X86EMUL_MODE_HOST X86EMUL_MODE_PROT32
#elif defined(CONFIG_X86_64)
#define X86EMUL_MODE_HOST X86EMUL_MODE_PROT64
int x86_decode_insn(struct x86_emulate_ctxt *ctxt, void *insn, int insn_len);
#define EMULATION_FAILED -1
#define EMULATION_OK 0
#define EMULATION_RESTART 1
#define EMULATION_INTERCEPTED 2
int x86_emulate_insn(struct x86_emulate_ctxt *ctxt);
int emulator_task_switch(struct x86_emulate_ctxt *ctxt,
u16 tss_selector, int reason,
bool has_error_code, u32 error_code);
int emulate_int_real(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, int irq);
