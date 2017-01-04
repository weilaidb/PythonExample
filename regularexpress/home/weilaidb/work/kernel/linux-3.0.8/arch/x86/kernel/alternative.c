#define MAX_PATCH_LEN (255-1)
static int smp_alt_once;
static int __init bootonly(char *str)
__setup("smp-alt-boot", bootonly);
#define smp_alt_once 1
static int __initdata_or_module debug_alternative;
static int __init debug_alt(char *str)
__setup("debug-alternative", debug_alt);
static int noreplace_smp;
static int __init setup_noreplace_smp(char *str)
__setup("noreplace-smp", setup_noreplace_smp);
static int __initdata_or_module noreplace_paravirt = 0;
static int __init setup_noreplace_paravirt(char *str)
__setup("noreplace-paravirt", setup_noreplace_paravirt);
#define DPRINTK(fmt, args...) if (debug_alternative) \
printk(KERN_DEBUG fmt, args)
#if defined(GENERIC_NOP1) && !defined(CONFIG_X86_64)
static const unsigned char intelnops[] =
;
static const unsigned char * const intel_nops[ASM_NOP_MAX+2] =
;
static const unsigned char k8nops[] =
;
static const unsigned char * const k8_nops[ASM_NOP_MAX+2] =
;
#if defined(K7_NOP1) && !defined(CONFIG_X86_64)
static const unsigned char k7nops[] =
;
static const unsigned char * const k7_nops[ASM_NOP_MAX+2] =
;
static const unsigned char  __initconst_or_module p6nops[] =
;
static const unsigned char * const p6_nops[ASM_NOP_MAX+2] =
;
const unsigned char * const *ideal_nops = p6_nops;
const unsigned char * const *ideal_nops = intel_nops;
void __init arch_init_ideal_nops(void)
static void __init_or_module add_nops(void *insns, unsigned int len)
extern struct alt_instr __alt_instructions[], __alt_instructions_end[];
extern s32 __smp_locks[], __smp_locks_end[];
extern char __vsyscall_0;
void *text_poke_early(void *addr, const void *opcode, size_t len);
void __init_or_module apply_alternatives(struct alt_instr *start,
struct alt_instr *end)
static void alternatives_smp_lock(const s32 *start, const s32 *end,
u8 *text, u8 *text_end)
static void alternatives_smp_unlock(const s32 *start, const s32 *end,
u8 *text, u8 *text_end)
struct smp_alt_module ;
static LIST_HEAD(smp_alt_modules);
static DEFINE_MUTEX(smp_alt);
static int smp_mode = 1;
void __init_or_module alternatives_smp_module_add(struct module *mod,
char *name,
void *locks, void *locks_end,
void *text,  void *text_end)
void __init_or_module alternatives_smp_module_del(struct module *mod)
bool skip_smp_alternatives;
void alternatives_smp_switch(int smp)
int alternatives_text_reserved(void *start, void *end)
void __init_or_module apply_paravirt(struct paravirt_patch_site *start,
struct paravirt_patch_site *end)
extern struct paravirt_patch_site __start_parainstructions[],
__stop_parainstructions[];
void __init alternative_instructions(void)
void *__init_or_module text_poke_early(void *addr, const void *opcode,
size_t len)
void *__kprobes text_poke(void *addr, const void *opcode, size_t len)
static atomic_t stop_machine_first;
static int wrote_text;
struct text_poke_params ;
static int __kprobes stop_machine_text_poke(void *data)
void *__kprobes text_poke_smp(void *addr, const void *opcode, size_t len)
void __kprobes text_poke_smp_batch(struct text_poke_param *params, int n)
