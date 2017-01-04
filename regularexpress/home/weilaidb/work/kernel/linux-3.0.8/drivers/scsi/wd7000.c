#undef  WD7000_DEBUG
#define dprintk printk
#define dprintk(format,args...)
#define OGMB_CNT	16
#define ICMB_CNT	32
#define MAX_SCBS        32
#define WD7000_Q	16
#define WD7000_SG	16
typedef volatile struct mailbox  Mailbox;
typedef struct adapter  Adapter;
static const long wd7000_biosaddr[] = ;
#define NUM_ADDRS ARRAY_SIZE(wd7000_biosaddr)
static const unsigned short wd7000_iobase[] = ;
#define NUM_IOPORTS ARRAY_SIZE(wd7000_iobase)
static const short wd7000_irq[] = ;
#define NUM_IRQS ARRAY_SIZE(wd7000_irq)
static const short wd7000_dma[] = ;
#define NUM_DMAS ARRAY_SIZE(wd7000_dma)
#define UNITS	8
static struct Scsi_Host *wd7000_host[UNITS];
#define BUS_ON    64
#define BUS_OFF   15
typedef struct  Config;
static Config configs[] = ;
#define NUM_CONFIGS ARRAY_SIZE(configs)
typedef struct signature  Signature;
static const Signature signatures[] = ;
#define NUM_SIGNATURES ARRAY_SIZE(signatures)
#define ASC_STAT        0
#define ASC_COMMAND     0
#define ASC_INTR_STAT   1
#define ASC_INTR_ACK    1
#define ASC_CONTROL     2
#define INT_IM		0x80
#define CMD_RDY		0x40
#define CMD_REJ		0x20
#define ASC_INIT        0x10
#define ASC_STATMASK    0xf0
#define NO_OP             0
#define INITIALIZATION    1
#define DISABLE_UNS_INTR  2
#define ENABLE_UNS_INTR   3
#define INTR_ON_FREE_OGMB 4
#define SOFT_RESET        5
#define HARD_RESET_ACK    6
#define START_OGMB        0x80
#define SCAN_OGMBS        0xc0
typedef struct initCmd  InitCmd;
#define MB_INTR    0xC0
#define IMB_INTR   0x40
#define MB_MASK    0x3f
#define INT_EN     0x08
#define DMA_EN     0x04
#define SCSI_RES   0x02
#define ASC_RES    0x01
typedef struct sgb  Sgb;
typedef struct scb  Scb;
#define ICB_OP_MASK           0x80
#define ICB_OP_OPEN_RBUF      0x80
#define ICB_OP_RECV_CMD       0x81
#define ICB_OP_RECV_DATA      0x82
#define ICB_OP_RECV_SDATA     0x83
#define ICB_OP_SEND_DATA      0x84
#define ICB_OP_SEND_STAT      0x86
#define ICB_OP_READ_INIT      0x88
#define ICB_OP_READ_ID        0x89
#define ICB_OP_SET_UMASK      0x8A
#define ICB_OP_GET_UMASK      0x8B
#define ICB_OP_GET_REVISION   0x8C
#define ICB_OP_DIAGNOSTICS    0x8D
#define ICB_OP_SET_EPARMS     0x8E
#define ICB_OP_GET_EPARMS     0x8F
typedef struct icbRecvCmd  IcbRecvCmd;
typedef struct icbSendStat  IcbSendStat;
typedef struct icbRevLvl  IcbRevLvl;
typedef struct icbUnsMask  IcbUnsMask;
typedef struct icbDiag  IcbDiag;
#define ICB_DIAG_POWERUP   0
#define ICB_DIAG_WALKING   1
#define ICB_DIAG_DMA       2
#define ICB_DIAG_FULL      3
typedef struct icbParms  IcbParms;
typedef struct icbAny  IcbAny;
typedef union icb  Icb;
static char *wd7000;
module_param(wd7000, charp, 0);
static Scb scbs[MAX_SCBS];
static Scb *scbfree;
static int freescbs = MAX_SCBS;
static spinlock_t scbpool_lock;
static void __init setup_error(char *mesg, int *ints)
static int __init wd7000_setup(char *str)
__setup("wd7000=", wd7000_setup);
static inline void any2scsi(unchar * scsi, int any)
static inline int scsi2int(unchar * scsi)
static inline void wd7000_enable_intr(Adapter * host)
static inline void wd7000_enable_dma(Adapter * host)
#define WAITnexttimeout 200
static inline short WAIT(unsigned port, unsigned mask, unsigned allof, unsigned noneof)
static inline int command_out(Adapter * host, unchar * cmd, int len)
static inline Scb *alloc_scbs(struct Scsi_Host *host, int needed)
static inline void free_scb(Scb * scb)
static inline void init_scbs(void)
static int mail_out(Adapter * host, Scb * scbptr)
static int make_code(unsigned hosterr, unsigned scsierr)
#define wd7000_intr_ack(host)   outb (0, host->iobase + ASC_INTR_ACK)
static irqreturn_t wd7000_intr(int irq, void *dev_id)
static int wd7000_queuecommand_lck(struct scsi_cmnd *SCpnt,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(wd7000_queuecommand)
static int wd7000_diagnostics(Adapter * host, int code)
static int wd7000_adapter_reset(Adapter * host)
static int wd7000_init(Adapter * host)
static void wd7000_revision(Adapter * host)
#undef SPRINTF
#define SPRINTF(args...)
static int wd7000_set_info(char *buffer, int length, struct Scsi_Host *host)
static int wd7000_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset, int length,  int inout)
static __init int wd7000_detect(struct scsi_host_template *tpnt)
static int wd7000_release(struct Scsi_Host *shost)
static int wd7000_host_reset(struct scsi_cmnd *SCpnt)
static int wd7000_biosparam(struct scsi_device *sdev,
struct block_device *bdev, sector_t capacity, int *ip)
MODULE_AUTHOR("Thomas Wuensche, John Boyd, Miroslav Zagorac");
MODULE_DESCRIPTION("Driver for the WD7000 series ISA controllers");
MODULE_LICENSE("GPL");
static struct scsi_host_template driver_template = ;
