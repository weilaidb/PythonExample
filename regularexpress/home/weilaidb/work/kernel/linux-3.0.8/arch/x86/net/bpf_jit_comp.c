int bpf_jit_enable __read_mostly;
extern u8 sk_load_word[], sk_load_half[], sk_load_byte[], sk_load_byte_msh[];
extern u8 sk_load_word_ind[], sk_load_half_ind[], sk_load_byte_ind[];
static inline u8 *emit_code(u8 *ptr, u32 bytes, unsigned int len)
#define EMIT(bytes, len)	do  while (0)
#define EMIT1(b1)		EMIT(b1, 1)
#define EMIT2(b1, b2)		EMIT((b1) + ((b2) << 8), 2)
#define EMIT3(b1, b2, b3)	EMIT((b1) + ((b2) << 8) + ((b3) << 16), 3)
#define EMIT4(b1, b2, b3, b4)   EMIT((b1) + ((b2) << 8) + ((b3) << 16) + ((b4) << 24), 4)
#define EMIT1_off32(b1, off)	do  while (0)
#define CLEAR_A() EMIT2(0x31, 0xc0)
#define CLEAR_X() EMIT2(0x31, 0xdb)
static inline bool is_imm8(int value)
static inline bool is_near(int offset)
#define EMIT_JMP(offset)						\
do  while (0)
#define X86_JB  0x72
#define X86_JAE 0x73
#define X86_JE  0x74
#define X86_JNE 0x75
#define X86_JBE 0x76
#define X86_JA  0x77
#define EMIT_COND_JMP(op, offset)				\
do  while (0)
#define COND_SEL(CODE, TOP, FOP)	\
case CODE:			\
t_op = TOP;		\
f_op = FOP;		\
goto cond_branch
#define SEEN_DATAREF 1
#define SEEN_XREG    2
#define SEEN_MEM     4
static inline void bpf_flush_icache(void *start, void *end)
void bpf_jit_compile(struct sk_filter *fp)
static void jit_free_defer(struct work_struct *arg)
void bpf_jit_free(struct sk_filter *fp)
