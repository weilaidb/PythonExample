#define VERSION_STRING        "Version 1.0.0-ac"
#define TC_LOW       0x00
#define TC_MID       0x01
#define SCSI_FIFO    0x02
#define COMMAND_REG  0x03
#define STATUS_REG   0x04
#define DEST_BUS_ID  0x04
#define INT_REG      0x05
#define TOM          0x05
#define STP          0x06
#define SYNC_OFFSET  0x07
#define CONF_REG_1   0x08
#define CONF_REG_2   0x0B
#define CONF_REG_3   0x0C
#define CONF_REG_4   0x0D
#define TC_HIGH      0x0E
#define PIO_FIFO_1   0x10
#define PIO_FIFO_2   0x11
#define PIO_FIFO_3   0x12
#define PIO_FIFO_4   0x13
#define PIO_FIFO_CNT 0x14
#define PIO_INT_REG  0x15
#define CONF_REG_5   0x16
#define FEATURE_EN   0x1D
#define SCM    0x80
#define SRID   0x40
#define PTM    0x20
#define EPC    0x10
#define CTME   0x08
#define FE     0x40
#define SCSI2  0x08
#define TBPA   0x04
#define IDMRC  0x80
#define QTE    0x40
#define CDB10  0x20
#define FSCSI  0x10
#define FCLK   0x08
#define RBS    0x08
#define EAN    0x04
#define LPSR   0x80
#define IE     0x20
#define LPM    0x02
#define WSE0   0x01
#define SRST   0x80
#define ILCMD  0x40
#define DIS    0x20
#define BS     0x10
#define FC     0x08
#define RESEL  0x04
#define SI     0x03
#define SCI    0x80
#define GE     0x40
#define PE     0x20
#define TC     0x10
#define VGC    0x08
#define PHBITS 0x07
#define SCI    0x80
#define PFI    0x40
#define FULL   0x20
#define EMPTY  0x10
#define CE     0x08
#define OUE    0x04
#define FIE    0x02
#define EIE    0x01
#define PHASE_DATA_OUT    0x00
#define PHASE_DATA_IN     0x01
#define PHASE_COMMAND     0x02
#define PHASE_STATUS      0x03
#define PHASE_RESERVED_1  0x04
#define PHASE_RESERVED_2  0x05
#define PHASE_MESSAGE_OUT 0x06
#define PHASE_MESSAGE_IN  0x07
#define NOOP                      0x00
#define FLUSH_FIFO                0x01
#define RESET_CHIP                0x02
#define RESET_SCSI_BUS            0x03
#define DISABLE_SEL_RESEL         0x45
#define RESEL_SEQ                 0x40
#define SEL_WITHOUT_ATN_SEQ       0x41
#define SEL_WITH_ATN_SEQ          0x42
#define SEL_WITH_ATN_AND_STOP_SEQ 0x43
#define ENABLE_SEL_RESEL          0x44
#define SEL_WITH_ATN3_SEQ         0x46
#define RESEL3_SEQ                0x47
#define SND_MSG                   0x20
#define SND_STAT                  0x21
#define SND_DATA                  0x22
#define DISCONNECT_SEQ            0x23
#define TERMINATE_SEQ             0x24
#define TARGET_COMM_COMPLETE_SEQ  0x25
#define DISCONN                   0x27
#define RECV_MSG_SEQ              0x28
#define RECV_CMD                  0x29
#define RECV_DATA                 0x2A
#define RECV_CMD_SEQ              0x2B
#define TARGET_ABORT_PIO          0x04
#define TRANSFER_INFORMATION      0x10
#define INIT_COMM_COMPLETE_SEQ    0x11
#define MSG_ACCEPTED              0x12
#define TRANSFER_PAD              0x18
#define SET_ATN                   0x1A
#define RESET_ATN                 0x1B
#define ILLEGAL                   0xFF
#define PIO_MODE                  0x80
#define IO_RANGE 0x20
#define ID       "sym53c416"
#define PIO_SIZE 128
#define READ_TIMEOUT              150
#define WRITE_TIMEOUT             150
#define sym53c416_base sym53c416
#define sym53c416_base_1 sym53c416_1
#define sym53c416_base_2 sym53c416_2
#define sym53c416_base_3 sym53c416_3
static unsigned int sym53c416_base[2];
static unsigned int sym53c416_base_1[2];
static unsigned int sym53c416_base_2[2];
static unsigned int sym53c416_base_3[2];
#define MAXHOSTS 4
#define SG_ADDRESS(buffer)     ((char *) sg_virt((buffer)))
enum phases
;
typedef struct
host;
static host hosts[MAXHOSTS] = ;
static int host_index = 0;
static char info[120];
static Scsi_Cmnd *current_command = NULL;
static int fastpio = 1;
static int probeaddrs[] = ;
static void sym53c416_set_transfer_counter(int base, unsigned int len)
static DEFINE_SPINLOCK(sym53c416_lock);
static __inline__ unsigned int sym53c416_read(int base, unsigned char *buffer, unsigned int len)
static __inline__ unsigned int sym53c416_write(int base, unsigned char *buffer, unsigned int len)
static irqreturn_t sym53c416_intr_handle(int irq, void *dev_id)
static void sym53c416_init(int base, int scsi_id)
static int sym53c416_probeirq(int base, int scsi_id)
void sym53c416_setup(char *str, int *ints)
static int sym53c416_test(int base)
static struct isapnp_device_id id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(isapnp, id_table);
static void sym53c416_probe(void)
int __init sym53c416_detect(struct scsi_host_template *tpnt)
const char *sym53c416_info(struct Scsi_Host *SChost)
static int sym53c416_queuecommand_lck(Scsi_Cmnd *SCpnt, void (*done)(Scsi_Cmnd *))
DEF_SCSI_QCMD(sym53c416_queuecommand)
static int sym53c416_host_reset(Scsi_Cmnd *SCpnt)
static int sym53c416_release(struct Scsi_Host *shost)
static int sym53c416_bios_param(struct scsi_device *sdev,
struct block_device *dev,
sector_t capacity, int *ip)
MODULE_AUTHOR("Lieven Willems");
MODULE_LICENSE("GPL");
module_param_array(sym53c416, uint, NULL, 0);
module_param_array(sym53c416_1, uint, NULL, 0);
module_param_array(sym53c416_2, uint, NULL, 0);
module_param_array(sym53c416_3, uint, NULL, 0);
static struct scsi_host_template driver_template = ;
