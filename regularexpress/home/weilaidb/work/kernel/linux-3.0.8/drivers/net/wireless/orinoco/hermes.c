#define CMD_BUSY_TIMEOUT (100)
#define CMD_INIT_TIMEOUT (50000)
#define CMD_COMPL_TIMEOUT (20000)
#define ALLOC_COMPL_TIMEOUT (1000)
#define HERMES_AUX_ENABLE	0x8000
#define HERMES_AUX_DISABLE	0x4000
#define HERMES_AUX_ENABLED	0xC000
#define HERMES_AUX_DISABLED	0x0000
#define HERMES_AUX_PW0	0xFE01
#define HERMES_AUX_PW1	0xDC23
#define HERMES_AUX_PW2	0xBA45
#define HERMES_PROGRAM_DISABLE             (0x0000 | HERMES_CMD_DOWNLD)
#define HERMES_PROGRAM_ENABLE_VOLATILE     (0x0100 | HERMES_CMD_DOWNLD)
#define HERMES_PROGRAM_ENABLE_NON_VOLATILE (0x0200 | HERMES_CMD_DOWNLD)
#define HERMES_PROGRAM_NON_VOLATILE        (0x0300 | HERMES_CMD_DOWNLD)
#define DMSG(stuff...) do  while (0)
#undef HERMES_DEBUG
#define DEBUG(lvl, stuff...) if ((lvl) <= HERMES_DEBUG) DMSG(stuff)
#define DEBUG(lvl, stuff...) do  while (0)
static const struct hermes_ops hermes_ops_local;
static int hermes_issue_cmd(hermes_t *hw, u16 cmd, u16 param0,
u16 param1, u16 param2)
static int hermes_doicmd_wait(hermes_t *hw, u16 cmd,
u16 parm0, u16 parm1, u16 parm2,
struct hermes_response *resp)
void hermes_struct_init(hermes_t *hw, void __iomem *address, int reg_spacing)
EXPORT_SYMBOL(hermes_struct_init);
static int hermes_init(hermes_t *hw)
static int hermes_docmd_wait(hermes_t *hw, u16 cmd, u16 parm0,
struct hermes_response *resp)
static int hermes_allocate(hermes_t *hw, u16 size, u16 *fid)
static int hermes_bap_seek(hermes_t *hw, int bap, u16 id, u16 offset)
static int hermes_bap_pread(hermes_t *hw, int bap, void *buf, int len,
u16 id, u16 offset)
static int hermes_bap_pwrite(hermes_t *hw, int bap, const void *buf, int len,
u16 id, u16 offset)
static int hermes_read_ltv(hermes_t *hw, int bap, u16 rid, unsigned bufsize,
u16 *length, void *buf)
static int hermes_write_ltv(hermes_t *hw, int bap, u16 rid,
u16 length, const void *value)
static inline void
hermes_aux_setaddr(hermes_t *hw, u32 addr)
static inline int
hermes_aux_control(hermes_t *hw, int enabled)
static int hermesi_program_init(hermes_t *hw, u32 offset)
static int hermesi_program_end(hermes_t *hw)
static int hermes_program_bytes(struct hermes *hw, const char *data,
u32 addr, u32 len)
static int hermes_read_pda(hermes_t *hw, __le16 *pda, u32 pda_addr, u16 pda_len)
static void hermes_lock_irqsave(spinlock_t *lock,
unsigned long *flags) __acquires(lock)
static void hermes_unlock_irqrestore(spinlock_t *lock,
unsigned long *flags) __releases(lock)
static void hermes_lock_irq(spinlock_t *lock) __acquires(lock)
static void hermes_unlock_irq(spinlock_t *lock) __releases(lock)
static const struct hermes_ops hermes_ops_local = ;
