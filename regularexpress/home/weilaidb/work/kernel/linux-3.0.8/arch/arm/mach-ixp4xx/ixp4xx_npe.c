#define DEBUG_MSG			0
#define DEBUG_FW			0
#define NPE_COUNT			3
#define MAX_RETRIES			1000
#define NPE_42X_DATA_SIZE		0x800
#define NPE_46X_DATA_SIZE		0x1000
#define NPE_A_42X_INSTR_SIZE		0x1000
#define NPE_B_AND_C_42X_INSTR_SIZE	0x800
#define NPE_46X_INSTR_SIZE		0x1000
#define REGS_SIZE			0x1000
#define NPE_PHYS_REG			32
#define FW_MAGIC			0xFEEDF00D
#define FW_BLOCK_TYPE_INSTR		0x0
#define FW_BLOCK_TYPE_DATA		0x1
#define FW_BLOCK_TYPE_EOF		0xF
#define CMD_NPE_STEP			0x01
#define CMD_NPE_START			0x02
#define CMD_NPE_STOP			0x03
#define CMD_NPE_CLR_PIPE		0x04
#define CMD_CLR_PROFILE_CNT		0x0C
#define CMD_RD_INS_MEM			0x10
#define CMD_WR_INS_MEM			0x11
#define CMD_RD_DATA_MEM			0x12
#define CMD_WR_DATA_MEM			0x13
#define CMD_RD_ECS_REG			0x14
#define CMD_WR_ECS_REG			0x15
#define STAT_RUN			0x80000000
#define STAT_STOP			0x40000000
#define STAT_CLEAR			0x20000000
#define STAT_ECS_K			0x00800000
#define NPE_STEVT			0x1B
#define NPE_STARTPC			0x1C
#define NPE_REGMAP			0x1E
#define NPE_CINDEX			0x1F
#define INSTR_WR_REG_SHORT		0x0000C000
#define INSTR_WR_REG_BYTE		0x00004000
#define INSTR_RD_FIFO			0x0F888220
#define INSTR_RESET_MBOX		0x0FAC8210
#define ECS_BG_CTXT_REG_0		0x00
#define ECS_BG_CTXT_REG_1		0x01
#define ECS_BG_CTXT_REG_2		0x02
#define ECS_PRI_1_CTXT_REG_0		0x04
#define ECS_PRI_1_CTXT_REG_1		0x05
#define ECS_PRI_1_CTXT_REG_2		0x06
#define ECS_PRI_2_CTXT_REG_0		0x08
#define ECS_PRI_2_CTXT_REG_1		0x09
#define ECS_PRI_2_CTXT_REG_2		0x0A
#define ECS_DBG_CTXT_REG_0		0x0C
#define ECS_DBG_CTXT_REG_1		0x0D
#define ECS_DBG_CTXT_REG_2		0x0E
#define ECS_INSTRUCT_REG		0x11
#define ECS_REG_0_ACTIVE		0x80000000
#define ECS_REG_0_NEXTPC_MASK		0x1FFF0000
#define ECS_REG_0_LDUR_BITS		8
#define ECS_REG_0_LDUR_MASK		0x00000700
#define ECS_REG_1_CCTXT_BITS		16
#define ECS_REG_1_CCTXT_MASK		0x000F0000
#define ECS_REG_1_SELCTXT_BITS		0
#define ECS_REG_1_SELCTXT_MASK		0x0000000F
#define ECS_DBG_REG_2_IF		0x00100000
#define ECS_DBG_REG_2_IE		0x00080000
#define WFIFO_VALID			0x80000000
#define MSGSTAT_OFNE	0x00010000
#define MSGSTAT_IFNF	0x00020000
#define MSGSTAT_OFNF	0x00040000
#define MSGSTAT_IFNE	0x00080000
#define MSGSTAT_MBINT	0x00100000
#define MSGSTAT_IFINT	0x00200000
#define MSGSTAT_OFINT	0x00400000
#define MSGSTAT_WFINT	0x00800000
#define MSGCTL_OUT_FIFO			0x00010000
#define MSGCTL_IN_FIFO			0x00020000
#define MSGCTL_OUT_FIFO_WRITE		0x01000000
#define MSGCTL_IN_FIFO_WRITE		0x02000000
#define RESET_MBOX_STAT			0x0000F0F0
const char *npe_names[] = ;
#define print_npe(pri, npe, fmt, ...)					\
printk(pri "%s: " fmt, npe_name(npe), ## __VA_ARGS__)
#if DEBUG_MSG
#define debug_msg(npe, fmt, ...)					\
print_npe(KERN_DEBUG, npe, fmt, ## __VA_ARGS__)
#define debug_msg(npe, fmt, ...)
static struct  ecs_reset[] = ;
static struct npe npe_tab[NPE_COUNT] = ;
int npe_running(struct npe *npe)
static void npe_cmd_write(struct npe *npe, u32 addr, int cmd, u32 data)
static u32 npe_cmd_read(struct npe *npe, u32 addr, int cmd)
static void npe_clear_active(struct npe *npe, u32 reg)
static void npe_start(struct npe *npe)
static void npe_stop(struct npe *npe)
static int __must_check npe_debug_instr(struct npe *npe, u32 instr, u32 ctx,
u32 ldur)
static int __must_check npe_logical_reg_write8(struct npe *npe, u32 addr,
u8 val, u32 ctx)
static int __must_check npe_logical_reg_write16(struct npe *npe, u32 addr,
u16 val, u32 ctx)
static int __must_check npe_logical_reg_write32(struct npe *npe, u32 addr,
u32 val, u32 ctx)
static int npe_reset(struct npe *npe)
int npe_send_message(struct npe *npe, const void *msg, const char *what)
int npe_recv_message(struct npe *npe, void *msg, const char *what)
int npe_send_recv_message(struct npe *npe, void *msg, const char *what)
int npe_load_firmware(struct npe *npe, const char *name, struct device *dev)
struct npe *npe_request(unsigned id)
void npe_release(struct npe *npe)
static int __init npe_init_module(void)
static void __exit npe_cleanup_module(void)
module_init(npe_init_module);
module_exit(npe_cleanup_module);
MODULE_AUTHOR("Krzysztof Halasa");
MODULE_LICENSE("GPL v2");
EXPORT_SYMBOL(npe_names);
EXPORT_SYMBOL(npe_running);
EXPORT_SYMBOL(npe_request);
EXPORT_SYMBOL(npe_release);
EXPORT_SYMBOL(npe_load_firmware);
EXPORT_SYMBOL(npe_send_message);
EXPORT_SYMBOL(npe_recv_message);
EXPORT_SYMBOL(npe_send_recv_message);
