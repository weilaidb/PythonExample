#define DS		0x0
#define DS_ST_STOP	0x0
#define DS_ST_EXEC	0x1
#define DS_ST_CMISS	0x2
#define DS_ST_UPDTPC	0x3
#define DS_ST_WFE	0x4
#define DS_ST_ATBRR	0x5
#define DS_ST_QBUSY	0x6
#define DS_ST_WFP	0x7
#define DS_ST_KILL	0x8
#define DS_ST_CMPLT	0x9
#define DS_ST_FLTCMP	0xe
#define DS_ST_FAULT	0xf
#define DPC		0x4
#define INTEN		0x20
#define ES		0x24
#define INTSTATUS	0x28
#define INTCLR		0x2c
#define FSM		0x30
#define FSC		0x34
#define FTM		0x38
#define _FTC		0x40
#define FTC(n)		(_FTC + (n)*0x4)
#define _CS		0x100
#define CS(n)		(_CS + (n)*0x8)
#define CS_CNS		(1 << 21)
#define _CPC		0x104
#define CPC(n)		(_CPC + (n)*0x8)
#define _SA		0x400
#define SA(n)		(_SA + (n)*0x20)
#define _DA		0x404
#define DA(n)		(_DA + (n)*0x20)
#define _CC		0x408
#define CC(n)		(_CC + (n)*0x20)
#define CC_SRCINC	(1 << 0)
#define CC_DSTINC	(1 << 14)
#define CC_SRCPRI	(1 << 8)
#define CC_DSTPRI	(1 << 22)
#define CC_SRCNS	(1 << 9)
#define CC_DSTNS	(1 << 23)
#define CC_SRCIA	(1 << 10)
#define CC_DSTIA	(1 << 24)
#define CC_SRCBRSTLEN_SHFT	4
#define CC_DSTBRSTLEN_SHFT	18
#define CC_SRCBRSTSIZE_SHFT	1
#define CC_DSTBRSTSIZE_SHFT	15
#define CC_SRCCCTRL_SHFT	11
#define CC_SRCCCTRL_MASK	0x7
#define CC_DSTCCTRL_SHFT	25
#define CC_DRCCCTRL_MASK	0x7
#define CC_SWAP_SHFT	28
#define _LC0		0x40c
#define LC0(n)		(_LC0 + (n)*0x20)
#define _LC1		0x410
#define LC1(n)		(_LC1 + (n)*0x20)
#define DBGSTATUS	0xd00
#define DBG_BUSY	(1 << 0)
#define DBGCMD		0xd04
#define DBGINST0	0xd08
#define DBGINST1	0xd0c
#define CR0		0xe00
#define CR1		0xe04
#define CR2		0xe08
#define CR3		0xe0c
#define CR4		0xe10
#define CRD		0xe14
#define PERIPH_ID	0xfe0
#define PCELL_ID	0xff0
#define CR0_PERIPH_REQ_SET	(1 << 0)
#define CR0_BOOT_EN_SET		(1 << 1)
#define CR0_BOOT_MAN_NS		(1 << 2)
#define CR0_NUM_CHANS_SHIFT	4
#define CR0_NUM_CHANS_MASK	0x7
#define CR0_NUM_PERIPH_SHIFT	12
#define CR0_NUM_PERIPH_MASK	0x1f
#define CR0_NUM_EVENTS_SHIFT	17
#define CR0_NUM_EVENTS_MASK	0x1f
#define CR1_ICACHE_LEN_SHIFT	0
#define CR1_ICACHE_LEN_MASK	0x7
#define CR1_NUM_ICACHELINES_SHIFT	4
#define CR1_NUM_ICACHELINES_MASK	0xf
#define CRD_DATA_WIDTH_SHIFT	0
#define CRD_DATA_WIDTH_MASK	0x7
#define CRD_WR_CAP_SHIFT	4
#define CRD_WR_CAP_MASK		0x7
#define CRD_WR_Q_DEP_SHIFT	8
#define CRD_WR_Q_DEP_MASK	0xf
#define CRD_RD_CAP_SHIFT	12
#define CRD_RD_CAP_MASK		0x7
#define CRD_RD_Q_DEP_SHIFT	16
#define CRD_RD_Q_DEP_MASK	0xf
#define CRD_DATA_BUFF_SHIFT	20
#define CRD_DATA_BUFF_MASK	0x3ff
#define	PART		0x330
#define DESIGNER	0x41
#define REVISION	0x0
#define INTEG_CFG	0x0
#define PERIPH_ID_VAL	((PART << 0) | (DESIGNER << 12))
#define PCELL_ID_VAL	0xb105f00d
#define PL330_STATE_STOPPED		(1 << 0)
#define PL330_STATE_EXECUTING		(1 << 1)
#define PL330_STATE_WFE			(1 << 2)
#define PL330_STATE_FAULTING		(1 << 3)
#define PL330_STATE_COMPLETING		(1 << 4)
#define PL330_STATE_WFP			(1 << 5)
#define PL330_STATE_KILLING		(1 << 6)
#define PL330_STATE_FAULT_COMPLETING	(1 << 7)
#define PL330_STATE_CACHEMISS		(1 << 8)
#define PL330_STATE_UPDTPC		(1 << 9)
#define PL330_STATE_ATBARRIER		(1 << 10)
#define PL330_STATE_QUEUEBUSY		(1 << 11)
#define PL330_STATE_INVALID		(1 << 15)
#define PL330_STABLE_STATES (PL330_STATE_STOPPED | PL330_STATE_EXECUTING \
| PL330_STATE_WFE | PL330_STATE_FAULTING)
#define CMD_DMAADDH	0x54
#define CMD_DMAEND	0x00
#define CMD_DMAFLUSHP	0x35
#define CMD_DMAGO	0xa0
#define CMD_DMALD	0x04
#define CMD_DMALDP	0x25
#define CMD_DMALP	0x20
#define CMD_DMALPEND	0x28
#define CMD_DMAKILL	0x01
#define CMD_DMAMOV	0xbc
#define CMD_DMANOP	0x18
#define CMD_DMARMB	0x12
#define CMD_DMASEV	0x34
#define CMD_DMAST	0x08
#define CMD_DMASTP	0x29
#define CMD_DMASTZ	0x0c
#define CMD_DMAWFE	0x36
#define CMD_DMAWFP	0x30
#define CMD_DMAWMB	0x13
#define SZ_DMAADDH	3
#define SZ_DMAEND	1
#define SZ_DMAFLUSHP	2
#define SZ_DMALD	1
#define SZ_DMALDP	2
#define SZ_DMALP	2
#define SZ_DMALPEND	2
#define SZ_DMAKILL	1
#define SZ_DMAMOV	6
#define SZ_DMANOP	1
#define SZ_DMARMB	1
#define SZ_DMASEV	2
#define SZ_DMAST	1
#define SZ_DMASTP	2
#define SZ_DMASTZ	1
#define SZ_DMAWFE	2
#define SZ_DMAWFP	2
#define SZ_DMAWMB	1
#define SZ_DMAGO	6
#define BRST_LEN(ccr)	((((ccr) >> CC_SRCBRSTLEN_SHFT) & 0xf) + 1)
#define BRST_SIZE(ccr)	(1 << (((ccr) >> CC_SRCBRSTSIZE_SHFT) & 0x7))
#define BYTE_TO_BURST(b, ccr)  ((b) / BRST_SIZE(ccr) / BRST_LEN(ccr))
#define BURST_TO_BYTE(c, ccr)  ((c) * BRST_SIZE(ccr) * BRST_LEN(ccr))
#define MCODE_BUFF_PER_REQ	256
#define MARK_FREE(req)	do  while (0)
#define IS_FREE(req)	(*((u8 *)((req)->mc_cpu)) == CMD_DMAEND)
#define UNTIL(t, s)	while (!(_state(t) & (s))) cpu_relax();
static unsigned cmd_line;
#define PL330_DBGCMD_DUMP(off, x...)	do  while (0)
#define PL330_DBGMC_START(addr)		(cmd_line = addr)
#define PL330_DBGCMD_DUMP(off, x...)	do  while (0)
#define PL330_DBGMC_START(addr)		do  while (0)
struct _xfer_spec ;
enum dmamov_dst ;
enum pl330_dst ;
enum pl330_cond ;
struct _pl330_req ;
struct _pl330_tbd ;
struct pl330_thread ;
enum pl330_dmac_state ;
struct pl330_dmac ;
static inline void _callback(struct pl330_req *r, enum pl330_op_err err)
static inline bool _queue_empty(struct pl330_thread *thrd)
static inline bool _queue_full(struct pl330_thread *thrd)
static inline bool is_manager(struct pl330_thread *thrd)
static inline bool _manager_ns(struct pl330_thread *thrd)
static inline u32 get_id(struct pl330_info *pi, u32 off)
static inline u32 _emit_ADDH(unsigned dry_run, u8 buf[],
enum pl330_dst da, u16 val)
static inline u32 _emit_END(unsigned dry_run, u8 buf[])
static inline u32 _emit_FLUSHP(unsigned dry_run, u8 buf[], u8 peri)
static inline u32 _emit_LD(unsigned dry_run, u8 buf[],	enum pl330_cond cond)
static inline u32 _emit_LDP(unsigned dry_run, u8 buf[],
enum pl330_cond cond, u8 peri)
static inline u32 _emit_LP(unsigned dry_run, u8 buf[],
unsigned loop, u8 cnt)
struct _arg_LPEND ;
static inline u32 _emit_LPEND(unsigned dry_run, u8 buf[],
const struct _arg_LPEND *arg)
static inline u32 _emit_KILL(unsigned dry_run, u8 buf[])
static inline u32 _emit_MOV(unsigned dry_run, u8 buf[],
enum dmamov_dst dst, u32 val)
static inline u32 _emit_NOP(unsigned dry_run, u8 buf[])
static inline u32 _emit_RMB(unsigned dry_run, u8 buf[])
static inline u32 _emit_SEV(unsigned dry_run, u8 buf[], u8 ev)
static inline u32 _emit_ST(unsigned dry_run, u8 buf[], enum pl330_cond cond)
static inline u32 _emit_STP(unsigned dry_run, u8 buf[],
enum pl330_cond cond, u8 peri)
static inline u32 _emit_STZ(unsigned dry_run, u8 buf[])
static inline u32 _emit_WFE(unsigned dry_run, u8 buf[], u8 ev,
unsigned invalidate)
static inline u32 _emit_WFP(unsigned dry_run, u8 buf[],
enum pl330_cond cond, u8 peri)
static inline u32 _emit_WMB(unsigned dry_run, u8 buf[])
struct _arg_GO ;
static inline u32 _emit_GO(unsigned dry_run, u8 buf[],
const struct _arg_GO *arg)
#define msecs_to_loops(t) (loops_per_jiffy / 1000 * HZ * t)
static bool _until_dmac_idle(struct pl330_thread *thrd)
static inline void _execute_DBGINSN(struct pl330_thread *thrd,
u8 insn[], bool as_manager)
static inline u32 _state(struct pl330_thread *thrd)
static inline bool _req_active(struct pl330_thread *thrd,
struct _pl330_req *req)
static inline unsigned _thrd_active(struct pl330_thread *thrd)
static void _stop(struct pl330_thread *thrd)
static bool _trigger(struct pl330_thread *thrd)
static bool _start(struct pl330_thread *thrd)
static inline int _ldst_memtomem(unsigned dry_run, u8 buf[],
const struct _xfer_spec *pxs, int cyc)
static inline int _ldst_devtomem(unsigned dry_run, u8 buf[],
const struct _xfer_spec *pxs, int cyc)
static inline int _ldst_memtodev(unsigned dry_run, u8 buf[],
const struct _xfer_spec *pxs, int cyc)
static int _bursts(unsigned dry_run, u8 buf[],
const struct _xfer_spec *pxs, int cyc)
static inline int _loop(unsigned dry_run, u8 buf[],
unsigned long *bursts, const struct _xfer_spec *pxs)
static inline int _setup_loops(unsigned dry_run, u8 buf[],
const struct _xfer_spec *pxs)
static inline int _setup_xfer(unsigned dry_run, u8 buf[],
const struct _xfer_spec *pxs)
static int _setup_req(unsigned dry_run, struct pl330_thread *thrd,
unsigned index, struct _xfer_spec *pxs)
static inline u32 _prepare_ccr(const struct pl330_reqcfg *rqc)
static inline bool _is_valid(u32 ccr)
int pl330_submit_req(void *ch_id, struct pl330_req *r)
EXPORT_SYMBOL(pl330_submit_req);
static void pl330_dotask(unsigned long data)
int pl330_update(const struct pl330_info *pi)
EXPORT_SYMBOL(pl330_update);
int pl330_chan_ctrl(void *ch_id, enum pl330_chan_op op)
EXPORT_SYMBOL(pl330_chan_ctrl);
int pl330_chan_status(void *ch_id, struct pl330_chanstatus *pstatus)
EXPORT_SYMBOL(pl330_chan_status);
static inline int _alloc_event(struct pl330_thread *thrd)
void *pl330_request_channel(const struct pl330_info *pi)
EXPORT_SYMBOL(pl330_request_channel);
static inline void _free_event(struct pl330_thread *thrd, int ev)
void pl330_release_channel(void *ch_id)
EXPORT_SYMBOL(pl330_release_channel);
static void read_dmac_config(struct pl330_info *pi)
static inline void _reset_thread(struct pl330_thread *thrd)
static int dmac_alloc_threads(struct pl330_dmac *pl330)
static int dmac_alloc_resources(struct pl330_dmac *pl330)
int pl330_add(struct pl330_info *pi)
EXPORT_SYMBOL(pl330_add);
static int dmac_free_threads(struct pl330_dmac *pl330)
static void dmac_free_resources(struct pl330_dmac *pl330)
void pl330_del(struct pl330_info *pi)
EXPORT_SYMBOL(pl330_del);
