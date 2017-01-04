#define UNW_LOG_CACHE_SIZE	7
#define UNW_CACHE_SIZE		(1 << UNW_LOG_CACHE_SIZE)
#define UNW_LOG_HASH_SIZE	(UNW_LOG_CACHE_SIZE + 1)
#define UNW_HASH_SIZE		(1 << UNW_LOG_HASH_SIZE)
#define UNW_STATS	0
static unsigned int unw_debug_level = UNW_DEBUG;
#  define UNW_DEBUG_ON(n)	unw_debug_level >= n
#  define UNW_DPRINT(n, ...)  if (UNW_DEBUG_ON(n)) printk(__VA_ARGS__)
#  undef inline
#  define inline
#  define UNW_DEBUG_ON(n)  0
#  define UNW_DPRINT(n, ...)
#if UNW_STATS
# define STAT(x...)	x
# define STAT(x...)
#define alloc_reg_state()	kmalloc(sizeof(struct unw_reg_state), GFP_ATOMIC)
#define free_reg_state(usr)	kfree(usr)
#define alloc_labeled_state()	kmalloc(sizeof(struct unw_labeled_state), GFP_ATOMIC)
#define free_labeled_state(usr)	kfree(usr)
typedef unsigned long unw_word;
typedef unsigned char unw_hash_index_t;
static struct  unw = ;
static inline int
read_only (void *addr)
static inline unsigned long
pt_regs_off (unsigned long reg)
static inline struct pt_regs *
get_scratch_regs (struct unw_frame_info *info)
int
unw_access_gr (struct unw_frame_info *info, int regnum, unsigned long *val, char *nat, int write)
EXPORT_SYMBOL(unw_access_gr);
int
unw_access_br (struct unw_frame_info *info, int regnum, unsigned long *val, int write)
EXPORT_SYMBOL(unw_access_br);
int
unw_access_fr (struct unw_frame_info *info, int regnum, struct ia64_fpreg *val, int write)
EXPORT_SYMBOL(unw_access_fr);
int
unw_access_ar (struct unw_frame_info *info, int regnum, unsigned long *val, int write)
EXPORT_SYMBOL(unw_access_ar);
int
unw_access_pr (struct unw_frame_info *info, unsigned long *val, int write)
EXPORT_SYMBOL(unw_access_pr);
static inline void
push (struct unw_state_record *sr)
static void
pop (struct unw_state_record *sr)
static struct unw_reg_state *
dup_state_stack (struct unw_reg_state *rs)
static void
free_state_stack (struct unw_reg_state *rs)
static enum unw_register_index __attribute_const__
decode_abreg (unsigned char abreg, int memory)
static void
set_reg (struct unw_reg_info *reg, enum unw_where where, int when, unsigned long val)
static void
alloc_spill_area (unsigned long *offp, unsigned long regsize,
struct unw_reg_info *lo, struct unw_reg_info *hi)
static inline void
spill_next_when (struct unw_reg_info **regp, struct unw_reg_info *lim, unw_word t)
static inline void
finish_prologue (struct unw_state_record *sr)
static void
desc_prologue (int body, unw_word rlen, unsigned char mask, unsigned char grsave,
struct unw_state_record *sr)
static inline void
desc_abi (unsigned char abi, unsigned char context, struct unw_state_record *sr)
static inline void
desc_br_gr (unsigned char brmask, unsigned char gr, struct unw_state_record *sr)
static inline void
desc_br_mem (unsigned char brmask, struct unw_state_record *sr)
static inline void
desc_frgr_mem (unsigned char grmask, unw_word frmask, struct unw_state_record *sr)
static inline void
desc_fr_mem (unsigned char frmask, struct unw_state_record *sr)
static inline void
desc_gr_gr (unsigned char grmask, unsigned char gr, struct unw_state_record *sr)
static inline void
desc_gr_mem (unsigned char grmask, struct unw_state_record *sr)
static inline void
desc_mem_stack_f (unw_word t, unw_word size, struct unw_state_record *sr)
static inline void
desc_mem_stack_v (unw_word t, struct unw_state_record *sr)
static inline void
desc_reg_gr (unsigned char reg, unsigned char dst, struct unw_state_record *sr)
static inline void
desc_reg_psprel (unsigned char reg, unw_word pspoff, struct unw_state_record *sr)
static inline void
desc_reg_sprel (unsigned char reg, unw_word spoff, struct unw_state_record *sr)
static inline void
desc_rp_br (unsigned char dst, struct unw_state_record *sr)
static inline void
desc_reg_when (unsigned char regnum, unw_word t, struct unw_state_record *sr)
static inline void
desc_spill_base (unw_word pspoff, struct unw_state_record *sr)
static inline unsigned char *
desc_spill_mask (unsigned char *imaskp, struct unw_state_record *sr)
static inline void
desc_epilogue (unw_word t, unw_word ecount, struct unw_state_record *sr)
static inline void
desc_copy_state (unw_word label, struct unw_state_record *sr)
static inline void
desc_label_state (unw_word label, struct unw_state_record *sr)
static inline int
desc_is_active (unsigned char qp, unw_word t, struct unw_state_record *sr)
static inline void
desc_restore_p (unsigned char qp, unw_word t, unsigned char abreg, struct unw_state_record *sr)
static inline void
desc_spill_reg_p (unsigned char qp, unw_word t, unsigned char abreg, unsigned char x,
unsigned char ytreg, struct unw_state_record *sr)
static inline void
desc_spill_psprel_p (unsigned char qp, unw_word t, unsigned char abreg, unw_word pspoff,
struct unw_state_record *sr)
static inline void
desc_spill_sprel_p (unsigned char qp, unw_word t, unsigned char abreg, unw_word spoff,
struct unw_state_record *sr)
#define UNW_DEC_BAD_CODE(code)			printk(KERN_ERR "unwind: unknown code 0x%02x\n", \
code);
#define UNW_DEC_PROLOGUE_GR(fmt,r,m,gr,arg)	desc_prologue(0,r,m,gr,arg)
#define UNW_DEC_PROLOGUE(fmt,b,r,arg)		desc_prologue(b,r,0,32,arg)
#define UNW_DEC_ABI(fmt,a,c,arg)		desc_abi(a,c,arg)
#define UNW_DEC_BR_GR(fmt,b,g,arg)		desc_br_gr(b,g,arg)
#define UNW_DEC_BR_MEM(fmt,b,arg)		desc_br_mem(b,arg)
#define UNW_DEC_FRGR_MEM(fmt,g,f,arg)		desc_frgr_mem(g,f,arg)
#define UNW_DEC_FR_MEM(fmt,f,arg)		desc_fr_mem(f,arg)
#define UNW_DEC_GR_GR(fmt,m,g,arg)		desc_gr_gr(m,g,arg)
#define UNW_DEC_GR_MEM(fmt,m,arg)		desc_gr_mem(m,arg)
#define UNW_DEC_MEM_STACK_F(fmt,t,s,arg)	desc_mem_stack_f(t,s,arg)
#define UNW_DEC_MEM_STACK_V(fmt,t,arg)		desc_mem_stack_v(t,arg)
#define UNW_DEC_REG_GR(fmt,r,d,arg)		desc_reg_gr(r,d,arg)
#define UNW_DEC_REG_PSPREL(fmt,r,o,arg)		desc_reg_psprel(r,o,arg)
#define UNW_DEC_REG_SPREL(fmt,r,o,arg)		desc_reg_sprel(r,o,arg)
#define UNW_DEC_REG_WHEN(fmt,r,t,arg)		desc_reg_when(r,t,arg)
#define UNW_DEC_PRIUNAT_WHEN_GR(fmt,t,arg)	desc_reg_when(UNW_REG_PRI_UNAT_GR,t,arg)
#define UNW_DEC_PRIUNAT_WHEN_MEM(fmt,t,arg)	desc_reg_when(UNW_REG_PRI_UNAT_MEM,t,arg)
#define UNW_DEC_PRIUNAT_GR(fmt,r,arg)		desc_reg_gr(UNW_REG_PRI_UNAT_GR,r,arg)
#define UNW_DEC_PRIUNAT_PSPREL(fmt,o,arg)	desc_reg_psprel(UNW_REG_PRI_UNAT_MEM,o,arg)
#define UNW_DEC_PRIUNAT_SPREL(fmt,o,arg)	desc_reg_sprel(UNW_REG_PRI_UNAT_MEM,o,arg)
#define UNW_DEC_RP_BR(fmt,d,arg)		desc_rp_br(d,arg)
#define UNW_DEC_SPILL_BASE(fmt,o,arg)		desc_spill_base(o,arg)
#define UNW_DEC_SPILL_MASK(fmt,m,arg)		(m = desc_spill_mask(m,arg))
#define UNW_DEC_EPILOGUE(fmt,t,c,arg)		desc_epilogue(t,c,arg)
#define UNW_DEC_COPY_STATE(fmt,l,arg)		desc_copy_state(l,arg)
#define UNW_DEC_LABEL_STATE(fmt,l,arg)		desc_label_state(l,arg)
#define UNW_DEC_SPILL_REG_P(f,p,t,a,x,y,arg)	desc_spill_reg_p(p,t,a,x,y,arg)
#define UNW_DEC_SPILL_REG(f,t,a,x,y,arg)	desc_spill_reg_p(0,t,a,x,y,arg)
#define UNW_DEC_SPILL_PSPREL_P(f,p,t,a,o,arg)	desc_spill_psprel_p(p,t,a,o,arg)
#define UNW_DEC_SPILL_PSPREL(f,t,a,o,arg)	desc_spill_psprel_p(0,t,a,o,arg)
#define UNW_DEC_SPILL_SPREL_P(f,p,t,a,o,arg)	desc_spill_sprel_p(p,t,a,o,arg)
#define UNW_DEC_SPILL_SPREL(f,t,a,o,arg)	desc_spill_sprel_p(0,t,a,o,arg)
#define UNW_DEC_RESTORE_P(f,p,t,a,arg)		desc_restore_p(p,t,a,arg)
#define UNW_DEC_RESTORE(f,t,a,arg)		desc_restore_p(0,t,a,arg)
static inline unw_hash_index_t
hash (unsigned long ip)
static inline long
cache_match (struct unw_script *script, unsigned long ip, unsigned long pr)
static inline struct unw_script *
script_lookup (struct unw_frame_info *info)
static inline struct unw_script *
script_new (unsigned long ip)
static void
script_finalize (struct unw_script *script, struct unw_state_record *sr)
static inline void
script_emit (struct unw_script *script, struct unw_insn insn)
static inline void
emit_nat_info (struct unw_state_record *sr, int i, struct unw_script *script)
static void
compile_reg (struct unw_state_record *sr, int i, struct unw_script *script)
static inline const struct unw_table_entry *
lookup (struct unw_table *table, unsigned long rel_ip)
static inline struct unw_script *
build_script (struct unw_frame_info *info)
static inline void
run_script (struct unw_script *script, struct unw_frame_info *state)
static int
find_save_locs (struct unw_frame_info *info)
static int
unw_valid(const struct unw_frame_info *info, unsigned long* p)
int
unw_unwind (struct unw_frame_info *info)
EXPORT_SYMBOL(unw_unwind);
int
unw_unwind_to_user (struct unw_frame_info *info)
EXPORT_SYMBOL(unw_unwind_to_user);
static void
init_frame_info (struct unw_frame_info *info, struct task_struct *t,
struct switch_stack *sw, unsigned long stktop)
void
unw_init_frame_info (struct unw_frame_info *info, struct task_struct *t, struct switch_stack *sw)
EXPORT_SYMBOL(unw_init_frame_info);
void
unw_init_from_blocked_task (struct unw_frame_info *info, struct task_struct *t)
EXPORT_SYMBOL(unw_init_from_blocked_task);
static void
init_unwind_table (struct unw_table *table, const char *name, unsigned long segment_base,
unsigned long gp, const void *table_start, const void *table_end)
void *
unw_add_unwind_table (const char *name, unsigned long segment_base, unsigned long gp,
const void *table_start, const void *table_end)
void
unw_remove_unwind_table (void *handle)
static int __init
create_gate_table (void)
__initcall(create_gate_table);
void __init
unw_init (void)
asmlinkage long
sys_getunwind (void __user *buf, size_t buf_size)
