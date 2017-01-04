#define scanhex	xmon_scanhex
#define skipbl	xmon_skipbl
static cpumask_t cpus_in_xmon = CPU_MASK_NONE;
static unsigned long xmon_taken = 1;
static int xmon_owner;
static int xmon_gate;
static unsigned long in_xmon __read_mostly = 0;
static unsigned long adrs;
static int size = 1;
#define MAX_DUMP (128 * 1024)
static unsigned long ndump = 64;
static unsigned long nidump = 16;
static unsigned long ncsum = 4096;
static int termch;
static char tmpstr[128];
static long bus_error_jmp[JMP_BUF_LEN];
static int catch_memory_errors;
static long *xmon_fault_jmp[NR_CPUS];
struct bpt ;
#define BP_IABR_TE	1
#define BP_IABR		2
#define BP_TRAP		8
#define BP_DABR		0x10
#define NBPTS	256
static struct bpt bpts[NBPTS];
static struct bpt dabr;
static struct bpt *iabr;
static unsigned bpinstr = 0x7fe00008;
#define BP_NUM(bp)	((bp) - bpts + 1)
static int cmds(struct pt_regs *);
static int mread(unsigned long, void *, int);
static int mwrite(unsigned long, void *, int);
static int handle_fault(struct pt_regs *);
static void byterev(unsigned char *, int);
static void memex(void);
static int bsesc(void);
static void dump(void);
static void prdump(unsigned long, long);
static int ppc_inst_dump(unsigned long, long, int);
static void dump_log_buf(void);
static void backtrace(struct pt_regs *);
static void excprint(struct pt_regs *);
static void prregs(struct pt_regs *);
static void memops(int);
static void memlocate(void);
static void memzcan(void);
static void memdiffs(unsigned char *, unsigned char *, unsigned, unsigned);
int skipbl(void);
int scanhex(unsigned long *valp);
static void scannl(void);
static int hexdigit(int);
void getstring(char *, int);
static void flush_input(void);
static int inchar(void);
static void take_input(char *);
static unsigned long read_spr(int);
static void write_spr(int, unsigned long);
static void super_regs(void);
static void remove_bpts(void);
static void insert_bpts(void);
static void remove_cpu_bpts(void);
static void insert_cpu_bpts(void);
static struct bpt *at_breakpoint(unsigned long pc);
static struct bpt *in_breakpoint_table(unsigned long pc, unsigned long *offp);
static int  do_step(struct pt_regs *);
static void bpt_cmds(void);
static void cacheflush(void);
static int  cpu_cmd(void);
static void csum(void);
static void bootcmds(void);
static void proccall(void);
void dump_segments(void);
static void symbol_lookup(void);
static void xmon_show_stack(unsigned long sp, unsigned long lr,
unsigned long pc);
static void xmon_print_symbol(unsigned long address, const char *mid,
const char *after);
static const char *getvecname(unsigned long vec);
static int do_spu_cmd(void);
static void dump_tlb_44x(void);
static void dump_tlb_book3e(void);
static int xmon_no_auto_backtrace;
extern void xmon_enter(void);
extern void xmon_leave(void);
#define REG		"%.16lx"
#define REGS_PER_LINE	4
#define LAST_VOLATILE	13
#define REG		"%.8lx"
#define REGS_PER_LINE	8
#define LAST_VOLATILE	12
#define GETWORD(v)	(((v)[0] << 24) + ((v)[1] << 16) + ((v)[2] << 8) + (v)[3])
#define isxdigit(c)	(('0' <= (c) && (c) <= '9') \
|| ('a' <= (c) && (c) <= 'f') \
|| ('A' <= (c) && (c) <= 'F'))
#define isalnum(c)	(('0' <= (c) && (c) <= '9') \
|| ('a' <= (c) && (c) <= 'z') \
|| ('A' <= (c) && (c) <= 'Z'))
#define isspace(c)	(c == ' ' || c == '\t' || c == 10 || c == 13 || c == 0)
static char *help_string = "\
Commands:\n\
b	show breakpoints\n\
bd	set data breakpoint\n\
bi	set instruction breakpoint\n\
bc	clear breakpoint\n"
"\
c	print cpus stopped in xmon\n\
c#	try to switch to cpu number h (in hex)\n"
"\
C	checksum\n\
d	dump bytes\n\
di	dump instructions\n\
df	dump float values\n\
dd	dump double values\n\
dl    dump the kernel log buffer\n\
dr	dump stream of raw bytes\n\
e	print exception information\n\
f	flush cache\n\
la	lookup symbol+offset of specified address\n\
ls	lookup address of specified symbol\n\
m	examine/change memory\n\
mm	move a block of memory\n\
ms	set a block of memory\n\
md	compare two blocks of memory\n\
ml	locate a block of memory\n\
mz	zero a block of memory\n\
mi	show information about memory allocation\n\
p 	call a procedure\n\
r	print registers\n\
s	single step\n"
"  ss	stop execution on all spus\n\
sr	restore execution on stopped spus\n\
sf  #	dump spu fields for spu # (in hex)\n\
sd  #	dump spu local store for spu # (in hex)\n\
sdi #	disassemble spu local store for spu # (in hex)\n"
"  S	print special registers\n\
t	print backtrace\n\
x	exit monitor and recover\n\
X	exit monitor and dont recover\n"
"  u	dump segment table or SLB\n"
"  u	dump segment registers\n"
"  u	dump TLB\n"
"  ?	help\n"
"  zr	reboot\n\
zh	halt\n"
;
static struct pt_regs *xmon_regs;
static inline void sync(void)
static inline void store_inst(void *p)
static inline void cflush(void *p)
static inline void cinval(void *p)
#define SURVEILLANCE_TOKEN	9000
static inline void disable_surveillance(void)
static int xmon_speaker;
static void get_output_lock(void)
static void release_output_lock(void)
int cpus_are_in_xmon(void)
static inline int unrecoverable_excp(struct pt_regs *regs)
static int xmon_core(struct pt_regs *regs, int fromipi)
int xmon(struct pt_regs *excp)
EXPORT_SYMBOL(xmon);
irqreturn_t xmon_irq(int irq, void *d)
static int xmon_bpt(struct pt_regs *regs)
static int xmon_sstep(struct pt_regs *regs)
static int xmon_dabr_match(struct pt_regs *regs)
static int xmon_iabr_match(struct pt_regs *regs)
static int xmon_ipi(struct pt_regs *regs)
static int xmon_fault_handler(struct pt_regs *regs)
static struct bpt *at_breakpoint(unsigned long pc)
static struct bpt *in_breakpoint_table(unsigned long nip, unsigned long *offp)
static struct bpt *new_breakpoint(unsigned long a)
static void insert_bpts(void)
static void insert_cpu_bpts(void)
static void remove_bpts(void)
static void remove_cpu_bpts(void)
static char *last_cmd;
static int
cmds(struct pt_regs *excp)
static int do_step(struct pt_regs *regs)
static int do_step(struct pt_regs *regs)
static void bootcmds(void)
static int cpu_cmd(void)
static unsigned short fcstab[256] = ;
#define FCS(fcs, c)	(((fcs) >> 8) ^ fcstab[((fcs) ^ (c)) & 0xff])
static void
csum(void)
static long check_bp_loc(unsigned long addr)
static char *breakpoint_help_string =
"Breakpoint command usage:\n"
"b                show breakpoints\n"
"b <addr> [cnt]   set breakpoint at given instr addr\n"
"bc               clear all breakpoints\n"
"bc <n/addr>      clear breakpoint number n or at addr\n"
"bi <addr> [cnt]  set hardware instr breakpoint (POWER3/RS64 only)\n"
"bd <addr> [cnt]  set hardware data breakpoint\n"
"";
static void
bpt_cmds(void)
static
const char *getvecname(unsigned long vec)
static void get_function_bounds(unsigned long pc, unsigned long *startp,
unsigned long *endp)
static int xmon_depth_to_print = 64;
#define LRSAVE_OFFSET		(STACK_FRAME_LR_SAVE * sizeof(unsigned long))
#define MARKER_OFFSET		(STACK_FRAME_MARKER * sizeof(unsigned long))
#define REGS_OFFSET		0x70
#define REGS_OFFSET		16
static void xmon_show_stack(unsigned long sp, unsigned long lr,
unsigned long pc)
static void backtrace(struct pt_regs *excp)
static void print_bug_trap(struct pt_regs *regs)
static void excprint(struct pt_regs *fp)
static void prregs(struct pt_regs *fp)
static void cacheflush(void)
static unsigned long
read_spr(int n)
static void
write_spr(int n, unsigned long val)
static unsigned long regno;
extern char exc_prolog;
extern char dec_exc;
static void super_regs(void)
static int
mread(unsigned long adrs, void *buf, int size)
static int
mwrite(unsigned long adrs, void *buf, int size)
static int fault_type;
static int fault_except;
static char *fault_chars[] = ;
static int handle_fault(struct pt_regs *regs)
#define SWAP(a, b, t)	((t) = (a), (a) = (b), (b) = (t))
static void
byterev(unsigned char *val, int size)
static int brev;
static int mnoread;
static char *memex_help_string =
"Memory examine command usage:\n"
"m [addr] [flags] examine/change memory\n"
"  addr is optional.  will start where left off.\n"
"  flags may include chars from this set:\n"
"    b   modify by bytes (default)\n"
"    w   modify by words (2 byte)\n"
"    l   modify by longs (4 byte)\n"
"    d   modify by doubleword (8 byte)\n"
"    r   toggle reverse byte order mode\n"
"    n   do not read memory (for i/o spaces)\n"
"    .   ok to read (default)\n"
"NOTE: flags are saved as defaults\n"
"";
static char *memex_subcmd_help_string =
"Memory examine subcommands:\n"
"  hexval   write this val to current location\n"
"  'string' write chars from string to this location\n"
"  '        increment address\n"
"  ^        decrement address\n"
"  /        increment addr by 0x10.
"  \\        decrement addr by 0x10.  \\\\=0x100, \\\\\\=0x1000, etc\n"
"  `        clear no-read flag\n"
"  ;        stay at this addr\n"
"  v        change to byte mode\n"
"  w        change to word (2 byte) mode\n"
"  l        change to long (4 byte) mode\n"
"  u        change to doubleword (8 byte) mode\n"
"  m addr   change current addr\n"
"  n        toggle no-read flag\n"
"  r        toggle byte reverse flag\n"
"  < count  back up count bytes\n"
"  > count  skip forward count bytes\n"
"  x        exit this mode\n"
"";
static void
memex(void)
static int
bsesc(void)
static void xmon_rawdump (unsigned long adrs, long ndump)
#define isxdigit(c)	(('0' <= (c) && (c) <= '9') \
|| ('a' <= (c) && (c) <= 'f') \
|| ('A' <= (c) && (c) <= 'F'))
static void
dump(void)
static void
prdump(unsigned long adrs, long ndump)
typedef int (*instruction_dump_func)(unsigned long inst, unsigned long addr);
static int
generic_inst_dump(unsigned long adr, long count, int praddr,
instruction_dump_func dump_func)
static int
ppc_inst_dump(unsigned long adr, long count, int praddr)
void
print_address(unsigned long addr)
void
dump_log_buf(void)
static unsigned long mdest;
static unsigned long msrc;
static unsigned long mval;
static unsigned long mcount;
static unsigned long mdiffs;
static void
memops(int cmd)
static void
memdiffs(unsigned char *p1, unsigned char *p2, unsigned nb, unsigned maxpr)
static unsigned mend;
static unsigned mask;
static void
memlocate(void)
static unsigned long mskip = 0x1000;
static unsigned long mlim = 0xffffffff;
static void
memzcan(void)
static void proccall(void)
int
skipbl(void)
#define N_PTREGS	44
static char *regnames[N_PTREGS] = ;
int
scanhex(unsigned long *vp)
static void
scannl(void)
static int hexdigit(int c)
void
getstring(char *s, int size)
static char line[256];
static char *lineptr;
static void
flush_input(void)
static int
inchar(void)
static void
take_input(char *str)
static void
symbol_lookup(void)
static void xmon_print_symbol(unsigned long address, const char *mid,
const char *after)
static void dump_slb(void)
static void dump_stab(void)
void dump_segments(void)
void dump_segments(void)
static void dump_tlb_44x(void)
static void dump_tlb_book3e(void)
static void xmon_init(int enable)
static void sysrq_handle_xmon(int key)
static struct sysrq_key_op sysrq_xmon_op = ;
static int __init setup_xmon_sysrq(void)
__initcall(setup_xmon_sysrq);
static int __initdata xmon_early, xmon_off;
static int __init early_parse_xmon(char *p)
early_param("xmon", early_parse_xmon);
void __init xmon_setup(void)
struct spu_info ;
#define XMON_NUM_SPUS	16
static struct spu_info spu_info[XMON_NUM_SPUS];
void xmon_register_spus(struct list_head *list)
static void stop_spus(void)
static void restart_spus(void)
#define DUMP_WIDTH	23
#define DUMP_VALUE(format, field, value)				\
do  while (0)
#define DUMP_FIELD(obj, format, field)	\
DUMP_VALUE(format, field, obj->field)
static void dump_spu_fields(struct spu *spu)
int
spu_inst_dump(unsigned long adr, long count, int praddr)
static void dump_spu_ls(unsigned long num, int subcmd)
static int do_spu_cmd(void)
static int do_spu_cmd(void)
