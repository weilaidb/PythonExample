extern void slb_allocate_realmode(unsigned long ea);
extern void slb_allocate_user(unsigned long ea);
static void slb_allocate(unsigned long ea)
#define slb_esid_mask(ssize)	\
(((ssize) == MMU_SEGSIZE_256M)? ESID_MASK: ESID_MASK_1T)
static inline unsigned long mk_esid_data(unsigned long ea, int ssize,
unsigned long slot)
#define slb_vsid_shift(ssize)	\
((ssize) == MMU_SEGSIZE_256M? SLB_VSID_SHIFT: SLB_VSID_SHIFT_1T)
static inline unsigned long mk_vsid_data(unsigned long ea, int ssize,
unsigned long flags)
static inline void slb_shadow_update(unsigned long ea, int ssize,
unsigned long flags,
unsigned long entry)
static inline void slb_shadow_clear(unsigned long entry)
static inline void create_shadowed_slbe(unsigned long ea, int ssize,
unsigned long flags,
unsigned long entry)
static void __slb_flush_and_rebolt(void)
void slb_flush_and_rebolt(void)
void slb_vmalloc_update(void)
static inline int esids_match(unsigned long addr1, unsigned long addr2)
void switch_slb(struct task_struct *tsk, struct mm_struct *mm)
static inline void patch_slb_encoding(unsigned int *insn_addr,
unsigned int immed)
void slb_set_size(u16 size)
void slb_initialize(void)
