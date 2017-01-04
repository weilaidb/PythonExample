static int to_debug = 0;
#define debug_polling(fmt, arg...)	do  while (0)
#define CMD_COMPLETE_TOUT_SEC	60
#define HPC_CTLR_WORKING_TOUT	60
#define HPC_GETACCESS_TIMEOUT	60
#define POLL_INTERVAL_SEC	2
#define POLL_LATCH_CNT		5
#define WPG_I2CMBUFL_OFFSET	0x08
#define WPG_I2CMOSUP_OFFSET	0x10
#define WPG_I2CMCNTL_OFFSET	0x20
#define WPG_I2CPARM_OFFSET	0x40
#define WPG_I2CSTAT_OFFSET	0x70
#define WPG_I2C_AND		0x1000
#define WPG_I2C_OR		0x2000
#define WPG_READATADDR_MASK	0x00010000
#define WPG_WRITEATADDR_MASK	0x40010000
#define WPG_READDIRECT_MASK	0x10010000
#define WPG_WRITEDIRECT_MASK	0x60010000
#define WPG_I2CMCNTL_STARTOP_MASK	0x00000002
#define WPG_I2C_IOREMAP_SIZE	0x2044
#define WPG_1ST_SLOT_INDEX	0x01
#define WPG_CTLR_INDEX		0x0F
#define WPG_1ST_EXTSLOT_INDEX	0x10
#define WPG_1ST_BUS_INDEX	0x1F
#define HPC_I2CSTATUS_CHECK(s)	((u8)((s & 0x00000A76) ? 0 : 1))
static struct mutex sem_hpcaccess;
static struct semaphore semOperations;
static struct semaphore sem_exit;
static struct task_struct *ibmphp_poll_thread;
static u8 i2c_ctrl_read (struct controller *, void __iomem *, u8);
static u8 i2c_ctrl_write (struct controller *, void __iomem *, u8, u8);
static u8 hpc_writecmdtoindex (u8, u8);
static u8 hpc_readcmdtoindex (u8, u8);
static void get_hpc_access (void);
static void free_hpc_access (void);
static int poll_hpc(void *data);
static int process_changeinstatus (struct slot *, struct slot *);
static int process_changeinlatch (u8, u8, struct controller *);
static int hpc_wait_ctlr_notworking (int, struct controller *, void __iomem *, u8 *);
void __init ibmphp_hpc_initvars (void)
static u8 i2c_ctrl_read (struct controller *ctlr_ptr, void __iomem *WPGBbar, u8 index)
static u8 i2c_ctrl_write (struct controller *ctlr_ptr, void __iomem *WPGBbar, u8 index, u8 cmd)
static u8 isa_ctrl_read (struct controller *ctlr_ptr, u8 offset)
static void isa_ctrl_write (struct controller *ctlr_ptr, u8 offset, u8 data)
static u8 pci_ctrl_read (struct controller *ctrl, u8 offset)
static u8 pci_ctrl_write (struct controller *ctrl, u8 offset, u8 data)
static u8 ctrl_read (struct controller *ctlr, void __iomem *base, u8 offset)
static u8 ctrl_write (struct controller *ctlr, void __iomem *base, u8 offset, u8 data)
static u8 hpc_writecmdtoindex (u8 cmd, u8 index)
static u8 hpc_readcmdtoindex (u8 cmd, u8 index)
int ibmphp_hpc_readslot (struct slot * pslot, u8 cmd, u8 * pstatus)
int ibmphp_hpc_writeslot (struct slot * pslot, u8 cmd)
static void get_hpc_access (void)
void free_hpc_access (void)
void ibmphp_lock_operations (void)
void ibmphp_unlock_operations (void)
#define POLL_LATCH_REGISTER	0
#define POLL_SLOTS		1
#define POLL_SLEEP		2
static int poll_hpc(void *data)
static int process_changeinstatus (struct slot *pslot, struct slot *poldslot)
static int process_changeinlatch (u8 old, u8 new, struct controller *ctrl)
int __init ibmphp_hpc_start_poll_thread (void)
void __exit ibmphp_hpc_stop_poll_thread (void)
static int hpc_wait_ctlr_notworking (int timeout, struct controller *ctlr_ptr, void __iomem *wpg_bbar,
u8 * pstatus)
