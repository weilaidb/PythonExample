#define ByteOp      (1<<0)
#define ImplicitOps (1<<1)
#define DstReg      (2<<1)
#define DstMem      (3<<1)
#define DstAcc      (4<<1)
#define DstDI       (5<<1)
#define DstMem64    (6<<1)
#define DstImmUByte (7<<1)
#define DstDX       (8<<1)
#define DstMask     (0xf<<1)
#define SrcNone     (0<<5)
#define SrcReg      (1<<5)
#define SrcMem      (2<<5)
#define SrcMem16    (3<<5)
#define SrcMem32    (4<<5)
#define SrcImm      (5<<5)
#define SrcImmByte  (6<<5)
#define SrcOne      (7<<5)
#define SrcImmUByte (8<<5)
#define SrcImmU     (9<<5)
#define SrcSI       (0xa<<5)
#define SrcImmFAddr (0xb<<5)
#define SrcMemFAddr (0xc<<5)
#define SrcAcc      (0xd<<5)
#define SrcImmU16   (0xe<<5)
#define SrcDX       (0xf<<5)
#define SrcMask     (0xf<<5)
#define ModRM       (1<<9)
#define Mov         (1<<10)
#define BitOp       (1<<11)
#define MemAbs      (1<<12)
#define String      (1<<13)
#define Stack       (1<<14)
#define GroupMask   (7<<15)
#define Group       (1<<15)
#define GroupDual   (2<<15)
#define Prefix      (3<<15)
#define RMExt       (4<<15)
#define Sse         (1<<18)
#define Prot        (1<<21)
#define VendorSpecific (1<<22)
#define NoAccess    (1<<23)
#define Op3264      (1<<24)
#define Undefined   (1<<25)
#define Lock        (1<<26)
#define Priv        (1<<27)
#define No64	    (1<<28)
#define Src2None    (0<<29)
#define Src2CL      (1<<29)
#define Src2ImmByte (2<<29)
#define Src2One     (3<<29)
#define Src2Imm     (4<<29)
#define Src2Mask    (7<<29)
#define X2(x...) x, x
#define X3(x...) X2(x), x
#define X4(x...) X2(x), X2(x)
#define X5(x...) X4(x), x
#define X6(x...) X4(x), X2(x)
#define X7(x...) X4(x), X3(x)
#define X8(x...) X4(x), X4(x)
#define X16(x...) X8(x), X8(x)
struct opcode ;
struct group_dual ;
struct gprefix ;
#define EFLG_ID (1<<21)
#define EFLG_VIP (1<<20)
#define EFLG_VIF (1<<19)
#define EFLG_AC (1<<18)
#define EFLG_VM (1<<17)
#define EFLG_RF (1<<16)
#define EFLG_IOPL (3<<12)
#define EFLG_NT (1<<14)
#define EFLG_OF (1<<11)
#define EFLG_DF (1<<10)
#define EFLG_IF (1<<9)
#define EFLG_TF (1<<8)
#define EFLG_SF (1<<7)
#define EFLG_ZF (1<<6)
#define EFLG_AF (1<<4)
#define EFLG_PF (1<<2)
#define EFLG_CF (1<<0)
#define EFLG_RESERVED_ZEROS_MASK 0xffc0802a
#define EFLG_RESERVED_ONE_MASK 2
#if defined(CONFIG_X86_64)
#define _LO32 "k"
#define _STK  "%%rsp"
#elif defined(__i386__)
#define _LO32 ""
#define _STK  "%%esp"
#define EFLAGS_MASK (EFLG_OF|EFLG_SF|EFLG_ZF|EFLG_AF|EFLG_PF|EFLG_CF)
#define _PRE_EFLAGS(_sav, _msk, _tmp)					\ \
"movl %"_sav",%"_LO32 _tmp"; "                                  \
"push %"_tmp"; "                                                \
"push %"_tmp"; "                                                \
"movl %"_msk",%"_LO32 _tmp"; "                                  \
"andl %"_LO32 _tmp",("_STK"); "                                 \
"pushf; "                                                       \
"notl %"_LO32 _tmp"; "                                          \
"andl %"_LO32 _tmp",("_STK"); "                                 \
"andl %"_LO32 _tmp","__stringify(BITS_PER_LONG/4)"("_STK"); "	\
"pop  %"_tmp"; "                                                \
"orl  %"_LO32 _tmp",("_STK"); "                                 \
"popf; "                                                        \
"pop  %"_sav"; "
#define _POST_EFLAGS(_sav, _msk, _tmp) \		\
"pushf; "				\
"pop  %"_tmp"; "			\
"andl %"_msk",%"_LO32 _tmp"; "		\
"orl  %"_LO32 _tmp",%"_sav"; "
#define ON64(x) x
#define ON64(x)
#define ____emulate_2op(_op, _src, _dst, _eflags, _x, _y, _suffix, _dsttype) \
do  while (0)
#define __emulate_2op_nobyte(_op,_src,_dst,_eflags,_wx,_wy,_lx,_ly,_qx,_qy) \
do  while (0)
#define __emulate_2op(_op,_src,_dst,_eflags,_bx,_by,_wx,_wy,_lx,_ly,_qx,_qy) \
do  while (0)
#define emulate_2op_SrcB(_op, _src, _dst, _eflags)                      \
__emulate_2op(_op, _src, _dst, _eflags,				\
"b", "c", "b", "c", "b", "c", "b", "c")
#define emulate_2op_SrcV(_op, _src, _dst, _eflags)                      \
__emulate_2op(_op, _src, _dst, _eflags,				\
"b", "q", "w", "r", _LO32, "r", "", "r")
#define emulate_2op_SrcV_nobyte(_op, _src, _dst, _eflags)               \
__emulate_2op_nobyte(_op, _src, _dst, _eflags,			\
"w", "r", _LO32, "r", "", "r")
#define __emulate_2op_cl(_op, _cl, _src, _dst, _eflags, _suffix, _type)	\
do  while (0)
#define emulate_2op_cl(_op, _cl, _src, _dst, _eflags)			\
do  while (0)
#define __emulate_1op(_op, _dst, _eflags, _suffix)			\
do  while (0)
#define emulate_1op(_op, _dst, _eflags)                                    \
do  while (0)
#define __emulate_1op_rax_rdx(_op, _src, _rax, _rdx, _eflags, _suffix)		\
do  while (0)
#define __emulate_1op_rax_rdx_ex(_op, _src, _rax, _rdx, _eflags, _suffix, _ex) \
do  while (0)
#define emulate_1op_rax_rdx(_op, _src, _rax, _rdx, _eflags)		\
do  while (0)
#define emulate_1op_rax_rdx_ex(_op, _src, _rax, _rdx, _eflags, _ex)	\
do  while (0)
#define insn_fetch(_type, _size, _eip)                                  \
()
#define insn_fetch_arr(_arr, _size, _eip)				\
()
static int emulator_check_intercept(struct x86_emulate_ctxt *ctxt,
enum x86_intercept intercept,
enum x86_intercept_stage stage)
static inline unsigned long ad_mask(struct decode_cache *c)
static inline unsigned long
address_mask(struct decode_cache *c, unsigned long reg)
static inline unsigned long
register_address(struct decode_cache *c, unsigned long reg)
static inline void
register_address_increment(struct decode_cache *c, unsigned long *reg, int inc)
static inline void jmp_rel(struct decode_cache *c, int rel)
static u32 desc_limit_scaled(struct desc_struct *desc)
static void set_seg_override(struct decode_cache *c, int seg)
static unsigned long seg_base(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, int seg)
static unsigned seg_override(struct x86_emulate_ctxt *ctxt,
struct decode_cache *c)
static int emulate_exception(struct x86_emulate_ctxt *ctxt, int vec,
u32 error, bool valid)
static int emulate_db(struct x86_emulate_ctxt *ctxt)
static int emulate_gp(struct x86_emulate_ctxt *ctxt, int err)
static int emulate_ss(struct x86_emulate_ctxt *ctxt, int err)
static int emulate_ud(struct x86_emulate_ctxt *ctxt)
static int emulate_ts(struct x86_emulate_ctxt *ctxt, int err)
static int emulate_de(struct x86_emulate_ctxt *ctxt)
static int emulate_nm(struct x86_emulate_ctxt *ctxt)
static u16 get_segment_selector(struct x86_emulate_ctxt *ctxt, unsigned seg)
static void set_segment_selector(struct x86_emulate_ctxt *ctxt, u16 selector,
unsigned seg)
static int __linearize(struct x86_emulate_ctxt *ctxt,
struct segmented_address addr,
unsigned size, bool write, bool fetch,
ulong *linear)
static int linearize(struct x86_emulate_ctxt *ctxt,
struct segmented_address addr,
unsigned size, bool write,
ulong *linear)
static int segmented_read_std(struct x86_emulate_ctxt *ctxt,
struct segmented_address addr,
void *data,
unsigned size)
static int do_fetch_insn_byte(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
unsigned long eip, u8 *dest)
static int do_insn_fetch(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
unsigned long eip, void *dest, unsigned size)
static void *decode_register(u8 modrm_reg, unsigned long *regs,
int highbyte_regs)
static int read_descriptor(struct x86_emulate_ctxt *ctxt,
struct segmented_address addr,
u16 *size, unsigned long *address, int op_bytes)
static int test_cc(unsigned int condition, unsigned int flags)
static void fetch_register_operand(struct operand *op)
static void read_sse_reg(struct x86_emulate_ctxt *ctxt, sse128_t *data, int reg)
static void write_sse_reg(struct x86_emulate_ctxt *ctxt, sse128_t *data,
int reg)
static void decode_register_operand(struct x86_emulate_ctxt *ctxt,
struct operand *op,
struct decode_cache *c,
int inhibit_bytereg)
static int decode_modrm(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
struct operand *op)
static int decode_abs(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
struct operand *op)
static void fetch_bit_operand(struct decode_cache *c)
static int read_emulated(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
unsigned long addr, void *dest, unsigned size)
static int segmented_read(struct x86_emulate_ctxt *ctxt,
struct segmented_address addr,
void *data,
unsigned size)
static int segmented_write(struct x86_emulate_ctxt *ctxt,
struct segmented_address addr,
const void *data,
unsigned size)
static int segmented_cmpxchg(struct x86_emulate_ctxt *ctxt,
struct segmented_address addr,
const void *orig_data, const void *data,
unsigned size)
static int pio_in_emulated(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
unsigned int size, unsigned short port,
void *dest)
static void get_descriptor_table_ptr(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 selector, struct desc_ptr *dt)
static int read_segment_descriptor(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 selector, struct desc_struct *desc)
static int write_segment_descriptor(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 selector, struct desc_struct *desc)
static int load_segment_descriptor(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 selector, int seg)
static void write_register_operand(struct operand *op)
static int writeback(struct x86_emulate_ctxt *ctxt)
static int em_push(struct x86_emulate_ctxt *ctxt)
static int emulate_pop(struct x86_emulate_ctxt *ctxt,
void *dest, int len)
static int em_pop(struct x86_emulate_ctxt *ctxt)
static int emulate_popf(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
void *dest, int len)
static int em_popf(struct x86_emulate_ctxt *ctxt)
static int emulate_push_sreg(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, int seg)
static int emulate_pop_sreg(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, int seg)
static int em_pusha(struct x86_emulate_ctxt *ctxt)
static int em_pushf(struct x86_emulate_ctxt *ctxt)
static int em_popa(struct x86_emulate_ctxt *ctxt)
int emulate_int_real(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, int irq)
static int emulate_int(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, int irq)
static int emulate_iret_real(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops)
static inline int emulate_iret(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops* ops)
static int em_jmp_far(struct x86_emulate_ctxt *ctxt)
static int em_grp1a(struct x86_emulate_ctxt *ctxt)
static int em_grp2(struct x86_emulate_ctxt *ctxt)
static int em_grp3(struct x86_emulate_ctxt *ctxt)
static int em_grp45(struct x86_emulate_ctxt *ctxt)
static int em_grp9(struct x86_emulate_ctxt *ctxt)
static int emulate_ret_far(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops)
static int emulate_load_segment(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, int seg)
static inline void
setup_syscalls_segments(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops, struct desc_struct *cs,
struct desc_struct *ss)
static int
emulate_syscall(struct x86_emulate_ctxt *ctxt, struct x86_emulate_ops *ops)
static int
emulate_sysenter(struct x86_emulate_ctxt *ctxt, struct x86_emulate_ops *ops)
static int
emulate_sysexit(struct x86_emulate_ctxt *ctxt, struct x86_emulate_ops *ops)
static bool emulator_bad_iopl(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops)
static bool emulator_io_port_access_allowed(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 port, u16 len)
static bool emulator_io_permited(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 port, u16 len)
static void save_state_to_tss16(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
struct tss_segment_16 *tss)
static int load_state_from_tss16(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
struct tss_segment_16 *tss)
static int task_switch_16(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 tss_selector, u16 old_tss_sel,
ulong old_tss_base, struct desc_struct *new_desc)
static void save_state_to_tss32(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
struct tss_segment_32 *tss)
static int load_state_from_tss32(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
struct tss_segment_32 *tss)
static int task_switch_32(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 tss_selector, u16 old_tss_sel,
ulong old_tss_base, struct desc_struct *new_desc)
static int emulator_do_task_switch(struct x86_emulate_ctxt *ctxt,
struct x86_emulate_ops *ops,
u16 tss_selector, int reason,
bool has_error_code, u32 error_code)
int emulator_task_switch(struct x86_emulate_ctxt *ctxt,
u16 tss_selector, int reason,
bool has_error_code, u32 error_code)
static void string_addr_inc(struct x86_emulate_ctxt *ctxt, unsigned seg,
int reg, struct operand *op)
static int em_das(struct x86_emulate_ctxt *ctxt)
static int em_call_far(struct x86_emulate_ctxt *ctxt)
static int em_ret_near_imm(struct x86_emulate_ctxt *ctxt)
static int em_add(struct x86_emulate_ctxt *ctxt)
static int em_or(struct x86_emulate_ctxt *ctxt)
static int em_adc(struct x86_emulate_ctxt *ctxt)
static int em_sbb(struct x86_emulate_ctxt *ctxt)
static int em_and(struct x86_emulate_ctxt *ctxt)
static int em_sub(struct x86_emulate_ctxt *ctxt)
static int em_xor(struct x86_emulate_ctxt *ctxt)
static int em_cmp(struct x86_emulate_ctxt *ctxt)
static int em_imul(struct x86_emulate_ctxt *ctxt)
static int em_imul_3op(struct x86_emulate_ctxt *ctxt)
static int em_cwd(struct x86_emulate_ctxt *ctxt)
static int em_rdtsc(struct x86_emulate_ctxt *ctxt)
static int em_mov(struct x86_emulate_ctxt *ctxt)
static int em_movdqu(struct x86_emulate_ctxt *ctxt)
static int em_invlpg(struct x86_emulate_ctxt *ctxt)
static int em_clts(struct x86_emulate_ctxt *ctxt)
static int em_vmcall(struct x86_emulate_ctxt *ctxt)
static int em_lgdt(struct x86_emulate_ctxt *ctxt)
static int em_vmmcall(struct x86_emulate_ctxt *ctxt)
static int em_lidt(struct x86_emulate_ctxt *ctxt)
static int em_smsw(struct x86_emulate_ctxt *ctxt)
static int em_lmsw(struct x86_emulate_ctxt *ctxt)
static bool valid_cr(int nr)
static int check_cr_read(struct x86_emulate_ctxt *ctxt)
static int check_cr_write(struct x86_emulate_ctxt *ctxt)
static int check_dr7_gd(struct x86_emulate_ctxt *ctxt)
static int check_dr_read(struct x86_emulate_ctxt *ctxt)
static int check_dr_write(struct x86_emulate_ctxt *ctxt)
static int check_svme(struct x86_emulate_ctxt *ctxt)
static int check_svme_pa(struct x86_emulate_ctxt *ctxt)
static int check_rdtsc(struct x86_emulate_ctxt *ctxt)
static int check_rdpmc(struct x86_emulate_ctxt *ctxt)
static int check_perm_in(struct x86_emulate_ctxt *ctxt)
static int check_perm_out(struct x86_emulate_ctxt *ctxt)
#define D(_y)
#define DI(_y, _i)
#define DIP(_y, _i, _p)
#define N    D(0)
#define EXT(_f, _e)
#define G(_f, _g)
#define GD(_f, _g)
#define I(_f, _e)
#define II(_f, _e, _i) \
#define IIP(_f, _e, _i, _p) \
#define GP(_f, _g)
#define D2bv(_f)      D((_f) | ByteOp), D(_f)
#define D2bvIP(_f, _i, _p) DIP((_f) | ByteOp, _i, _p), DIP(_f, _i, _p)
#define I2bv(_f, _e)  I((_f) | ByteOp, _e), I(_f, _e)
#define I6ALU(_f, _e) I2bv((_f) | DstMem | SrcReg | ModRM, _e),		\
I2bv(((_f) | DstReg | SrcMem | ModRM) & ~Lock, _e),	\
I2bv(((_f) & ~Lock) | DstAcc | SrcImm, _e)
static struct opcode group7_rm1[] = ;
static struct opcode group7_rm3[] = ;
static struct opcode group7_rm7[] = ;
static struct opcode group1[] = ;
static struct opcode group1A[] = ;
static struct opcode group3[] = ;
static struct opcode group4[] = ;
static struct opcode group5[] = ;
static struct opcode group6[] = ;
static struct group_dual group7 = ;
static struct opcode group8[] = ;
static struct group_dual group9 = ;
static struct opcode group11[] = ;
static struct gprefix pfx_0f_6f_0f_7f = ;
static struct opcode opcode_table[256] = ;
static struct opcode twobyte_table[256] = ;
#undef D
#undef N
#undef G
#undef GD
#undef I
#undef GP
#undef EXT
#undef D2bv
#undef D2bvIP
#undef I2bv
#undef I6ALU
static unsigned imm_size(struct decode_cache *c)
static int decode_imm(struct x86_emulate_ctxt *ctxt, struct operand *op,
unsigned size, bool sign_extension)
int
x86_decode_insn(struct x86_emulate_ctxt *ctxt, void *insn, int insn_len)
static bool string_insn_completed(struct x86_emulate_ctxt *ctxt)
int
x86_emulate_insn(struct x86_emulate_ctxt *ctxt)
