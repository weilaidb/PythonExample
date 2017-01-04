#define s_space "%%sr1"
#define d_space "%%sr2"
#define s_space "%%sr0"
#define d_space "%%sr0"
#define pa_memcpy new2_copy
DECLARE_PER_CPU(struct exception_data, exception_data);
#define preserve_branch(label)	do  while (0)
#define get_user_space() (segment_eq(get_fs(), KERNEL_DS) ? 0 : mfsp(3))
#define get_kernel_space() (0)
#define MERGE(w0, sh_1, w1, sh_2)  ()
#define THRESHOLD	16
#define DPRINTF(fmt, args...) do  while (0)
#define DPRINTF(fmt, args...)
#define def_load_ai_insn(_insn,_sz,_tt,_s,_a,_t,_e)	\
__asm__ __volatile__ (				\
"1:\t" #_insn ",ma " #_sz "(" _s ",%1), %0\n\t"	\
ASM_EXCEPTIONTABLE_ENTRY(1b,_e)			\
: _tt(_t), "+r"(_a)				\
: 						\
: "r8")
#define def_store_ai_insn(_insn,_sz,_tt,_s,_a,_t,_e) 	\
__asm__ __volatile__ (				\
"1:\t" #_insn ",ma %1, " #_sz "(" _s ",%0)\n\t"	\
ASM_EXCEPTIONTABLE_ENTRY(1b,_e)			\
: "+r"(_a) 					\
: _tt(_t)					\
: "r8")
#define ldbma(_s, _a, _t, _e) def_load_ai_insn(ldbs,1,"=r",_s,_a,_t,_e)
#define stbma(_s, _t, _a, _e) def_store_ai_insn(stbs,1,"r",_s,_a,_t,_e)
#define ldwma(_s, _a, _t, _e) def_load_ai_insn(ldw,4,"=r",_s,_a,_t,_e)
#define stwma(_s, _t, _a, _e) def_store_ai_insn(stw,4,"r",_s,_a,_t,_e)
#define flddma(_s, _a, _t, _e) def_load_ai_insn(fldd,8,"=f",_s,_a,_t,_e)
#define fstdma(_s, _t, _a, _e) def_store_ai_insn(fstd,8,"f",_s,_a,_t,_e)
#define def_load_insn(_insn,_tt,_s,_o,_a,_t,_e) 	\
__asm__ __volatile__ (				\
"1:\t" #_insn " " #_o "(" _s ",%1), %0\n\t"	\
ASM_EXCEPTIONTABLE_ENTRY(1b,_e)			\
: _tt(_t) 					\
: "r"(_a)					\
: "r8")
#define def_store_insn(_insn,_tt,_s,_t,_o,_a,_e) 	\
__asm__ __volatile__ (				\
"1:\t" #_insn " %0, " #_o "(" _s ",%1)\n\t" 	\
ASM_EXCEPTIONTABLE_ENTRY(1b,_e)			\
: 						\
: _tt(_t), "r"(_a)				\
: "r8")
#define ldw(_s,_o,_a,_t,_e)	def_load_insn(ldw,"=r",_s,_o,_a,_t,_e)
#define stw(_s,_t,_o,_a,_e) 	def_store_insn(stw,"r",_s,_t,_o,_a,_e)
static inline void prefetch_src(const void *addr)
static inline void prefetch_dst(const void *addr)
#define prefetch_src(addr) do  while(0)
#define prefetch_dst(addr) do  while(0)
static inline unsigned long copy_dstaligned(unsigned long dst, unsigned long src, unsigned long len, unsigned long o_dst, unsigned long o_src, unsigned long o_len)
static unsigned long pa_memcpy(void *dstp, const void *srcp, unsigned long len)
pws = (unsigned int *)pds;
pwd = (unsigned int *)pdd;
word_copy:
while (len >= 8*sizeof(unsigned int))
while (len >= 4*sizeof(unsigned int))
pcs = (unsigned char *)pws;
pcd = (unsigned char *)pwd;
byte_copy:
while (len)
return 0;
unaligned_copy:
if (likely((t1 & (sizeof(unsigned int)-1)) == 0))
if (unlikely((dst & (sizeof(unsigned int) - 1)) != 0))
ret = copy_dstaligned(dst, src, len / sizeof(unsigned int),
o_dst, o_src, o_len);
if (ret)
return ret;
pcs += (len & -sizeof(unsigned int));
pcd += (len & -sizeof(unsigned int));
len %= sizeof(unsigned int);
preserve_branch(handle_load_error);
preserve_branch(handle_store_error);
goto byte_copy;
handle_load_error:
__asm__ __volatile__ ("pmc_load_exc:\n");
d = &__get_cpu_var(exception_data);
DPRINTF("pmc_load_exc: o_len=%lu fault_addr=%lu o_src=%lu ret=%lu\n",
o_len, d->fault_addr, o_src, o_len - d->fault_addr + o_src);
return o_len - d->fault_addr + o_src;
handle_store_error:
__asm__ __volatile__ ("pmc_store_exc:\n");
d = &__get_cpu_var(exception_data);
DPRINTF("pmc_store_exc: o_len=%lu fault_addr=%lu o_dst=%lu ret=%lu\n",
o_len, d->fault_addr, o_dst, o_len - d->fault_addr + o_dst);
return o_len - d->fault_addr + o_dst;
}
unsigned long copy_to_user(void __user *dst, const void *src, unsigned long len)
EXPORT_SYMBOL(__copy_from_user);
unsigned long __copy_from_user(void *dst, const void __user *src, unsigned long len)
unsigned long copy_in_user(void __user *dst, const void __user *src, unsigned long len)
void * memcpy(void * dst,const void *src, size_t count)
EXPORT_SYMBOL(copy_to_user);
EXPORT_SYMBOL(copy_from_user);
EXPORT_SYMBOL(copy_in_user);
EXPORT_SYMBOL(memcpy);
