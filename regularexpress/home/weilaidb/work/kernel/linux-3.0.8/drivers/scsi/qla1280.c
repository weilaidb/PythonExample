#define QLA1280_VERSION      "3.27.1"
#if defined(CONFIG_IA64_GENERIC) || defined(CONFIG_IA64_SGI_SN2)
#define  DEBUG_QLA1280_INTR	0
#define  DEBUG_PRINT_NVRAM	0
#define  DEBUG_QLA1280		0
#define	MEMORY_MAPPED_IO	0
#define	MEMORY_MAPPED_IO	1
#error "BITS_PER_LONG not defined!"
#if (BITS_PER_LONG == 64) || defined CONFIG_HIGHMEM
#define QLA_64BIT_PTR	1
#define pci_dma_hi32(a)			((a >> 16) >> 16)
#define pci_dma_hi32(a)			0
#define pci_dma_lo32(a)			(a & 0xffffffff)
#define NVRAM_DELAY()			udelay(500)
#if defined(__ia64__) && !defined(ia64_platform_is)
#define ia64_platform_is(foo)		(!strcmp(x, platform_name))
#define IS_ISP1040(ha) (ha->pdev->device == PCI_DEVICE_ID_QLOGIC_ISP1020)
#define IS_ISP1x40(ha) (ha->pdev->device == PCI_DEVICE_ID_QLOGIC_ISP1020 || \
ha->pdev->device == PCI_DEVICE_ID_QLOGIC_ISP1240)
#define IS_ISP1x160(ha)        (ha->pdev->device == PCI_DEVICE_ID_QLOGIC_ISP10160 || \
ha->pdev->device == PCI_DEVICE_ID_QLOGIC_ISP12160)
static int qla1280_probe_one(struct pci_dev *, const struct pci_device_id *);
static void qla1280_remove_one(struct pci_dev *);
static void qla1280_done(struct scsi_qla_host *);
static int qla1280_get_token(char *);
static int qla1280_setup(char *s) __init;
static int qla1280_load_firmware(struct scsi_qla_host *);
static int qla1280_init_rings(struct scsi_qla_host *);
static int qla1280_nvram_config(struct scsi_qla_host *);
static int qla1280_mailbox_command(struct scsi_qla_host *,
uint8_t, uint16_t *);
static int qla1280_bus_reset(struct scsi_qla_host *, int);
static int qla1280_device_reset(struct scsi_qla_host *, int, int);
static int qla1280_abort_command(struct scsi_qla_host *, struct srb *, int);
static int qla1280_abort_isp(struct scsi_qla_host *);
static int qla1280_64bit_start_scsi(struct scsi_qla_host *, struct srb *);
static int qla1280_32bit_start_scsi(struct scsi_qla_host *, struct srb *);
static void qla1280_nv_write(struct scsi_qla_host *, uint16_t);
static void qla1280_poll(struct scsi_qla_host *);
static void qla1280_reset_adapter(struct scsi_qla_host *);
static void qla1280_marker(struct scsi_qla_host *, int, int, int, u8);
static void qla1280_isp_cmd(struct scsi_qla_host *);
static void qla1280_isr(struct scsi_qla_host *, struct list_head *);
static void qla1280_rst_aen(struct scsi_qla_host *);
static void qla1280_status_entry(struct scsi_qla_host *, struct response *,
struct list_head *);
static void qla1280_error_entry(struct scsi_qla_host *, struct response *,
struct list_head *);
static uint16_t qla1280_get_nvram_word(struct scsi_qla_host *, uint32_t);
static uint16_t qla1280_nvram_request(struct scsi_qla_host *, uint32_t);
static uint16_t qla1280_debounce_register(volatile uint16_t __iomem *);
static request_t *qla1280_req_pkt(struct scsi_qla_host *);
static int qla1280_check_for_dead_scsi_bus(struct scsi_qla_host *,
unsigned int);
static void qla1280_get_target_parameters(struct scsi_qla_host *,
struct scsi_device *);
static int qla1280_set_target_parameters(struct scsi_qla_host *, int, int);
static struct qla_driver_setup driver_setup;
static inline uint16_t
qla1280_data_direction(struct scsi_cmnd *cmnd)
#if DEBUG_QLA1280
static void __qla1280_print_scsi_cmd(struct scsi_cmnd * cmd);
static void __qla1280_dump_buffer(char *, int);
static char *qla1280;
module_param(qla1280, charp, 0);
__setup("qla1280=", qla1280_setup);
#define	CMD_SP(Cmnd)		&Cmnd->SCp
#define	CMD_CDBLEN(Cmnd)	Cmnd->cmd_len
#define	CMD_CDBP(Cmnd)		Cmnd->cmnd
#define	CMD_SNSP(Cmnd)		Cmnd->sense_buffer
#define	CMD_SNSLEN(Cmnd)	SCSI_SENSE_BUFFERSIZE
#define	CMD_RESULT(Cmnd)	Cmnd->result
#define	CMD_HANDLE(Cmnd)	Cmnd->host_scribble
#define CMD_REQUEST(Cmnd)	Cmnd->request->cmd
#define CMD_HOST(Cmnd)		Cmnd->device->host
#define SCSI_BUS_32(Cmnd)	Cmnd->device->channel
#define SCSI_TCN_32(Cmnd)	Cmnd->device->id
#define SCSI_LUN_32(Cmnd)	Cmnd->device->lun
struct qla_boards ;
static struct pci_device_id qla1280_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, qla1280_pci_tbl);
DEFINE_MUTEX(qla1280_firmware_mutex);
struct qla_fw ;
#define QL_NUM_FW_IMAGES 3
struct qla_fw qla1280_fw_tbl[QL_NUM_FW_IMAGES] = ;
static struct qla_boards ql1280_board_tbl[] = ;
static int qla1280_verbose = 1;
#if DEBUG_QLA1280
static int ql_debug_level = 1;
#define dprintk(level, format, a...)	\
do  while(0)
#define qla1280_dump_buffer(level, buf, size)	\
if (ql_debug_level >= level) __qla1280_dump_buffer(buf, size)
#define qla1280_print_scsi_cmd(level, cmd)	\
if (ql_debug_level >= level) __qla1280_print_scsi_cmd(cmd)
#define ql_debug_level			0
#define dprintk(level, format, a...)	dowhile(0)
#define qla1280_dump_buffer(a, b, c)	dowhile(0)
#define qla1280_print_scsi_cmd(a, b)	dowhile(0)
#define ENTER(x)		dprintk(3, "qla1280 : Entering %s()\n", x);
#define LEAVE(x)		dprintk(3, "qla1280 : Leaving %s()\n", x);
#define ENTER_INTR(x)		dprintk(4, "qla1280 : Entering %s()\n", x);
#define LEAVE_INTR(x)		dprintk(4, "qla1280 : Leaving %s()\n", x);
static int qla1280_read_nvram(struct scsi_qla_host *ha)
static const char *
qla1280_info(struct Scsi_Host *host)
static int
qla1280_queuecommand_lck(struct scsi_cmnd *cmd, void (*fn)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(qla1280_queuecommand)
enum action ;
static void qla1280_mailbox_timeout(unsigned long __data)
static int
_qla1280_wait_for_single_command(struct scsi_qla_host *ha, struct srb *sp,
struct completion *wait)
static int
qla1280_wait_for_single_command(struct scsi_qla_host *ha, struct srb *sp)
static int
qla1280_wait_for_pending_commands(struct scsi_qla_host *ha, int bus, int target)
static int
qla1280_error_action(struct scsi_cmnd *cmd, enum action action)
static int
qla1280_eh_abort(struct scsi_cmnd * cmd)
static int
qla1280_eh_device_reset(struct scsi_cmnd *cmd)
static int
qla1280_eh_bus_reset(struct scsi_cmnd *cmd)
static int
qla1280_eh_adapter_reset(struct scsi_cmnd *cmd)
static int
qla1280_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static inline void
qla1280_disable_intrs(struct scsi_qla_host *ha)
static inline void
qla1280_enable_intrs(struct scsi_qla_host *ha)
static irqreturn_t
qla1280_intr_handler(int irq, void *dev_id)
static int
qla1280_set_target_parameters(struct scsi_qla_host *ha, int bus, int target)
static int
qla1280_slave_configure(struct scsi_device *device)
static void
qla1280_done(struct scsi_qla_host *ha)
static int
qla1280_return_status(struct response * sts, struct scsi_cmnd *cp)
static int __devinit
qla1280_initialize_adapter(struct scsi_qla_host *ha)
static const struct firmware *
qla1280_request_firmware(struct scsi_qla_host *ha)
static int
qla1280_chip_diag(struct scsi_qla_host *ha)
static int
qla1280_load_firmware_pio(struct scsi_qla_host *ha)
#define DUMP_IT_BACK 0
static int
qla1280_load_firmware_dma(struct scsi_qla_host *ha)
static int
qla1280_start_firmware(struct scsi_qla_host *ha)
static int
qla1280_load_firmware(struct scsi_qla_host *ha)
static int
qla1280_init_rings(struct scsi_qla_host *ha)
static void
qla1280_print_settings(struct nvram *nv)
static void
qla1280_set_target_defaults(struct scsi_qla_host *ha, int bus, int target)
static void
qla1280_set_defaults(struct scsi_qla_host *ha)
static int
qla1280_config_target(struct scsi_qla_host *ha, int bus, int target)
static int
qla1280_config_bus(struct scsi_qla_host *ha, int bus)
static int
qla1280_nvram_config(struct scsi_qla_host *ha)
static uint16_t
qla1280_get_nvram_word(struct scsi_qla_host *ha, uint32_t address)
static uint16_t
qla1280_nvram_request(struct scsi_qla_host *ha, uint32_t nv_cmd)
static void
qla1280_nv_write(struct scsi_qla_host *ha, uint16_t data)
static int
qla1280_mailbox_command(struct scsi_qla_host *ha, uint8_t mr, uint16_t *mb)
static void
qla1280_poll(struct scsi_qla_host *ha)
static int
qla1280_bus_reset(struct scsi_qla_host *ha, int bus)
static int
qla1280_device_reset(struct scsi_qla_host *ha, int bus, int target)
static int
qla1280_abort_command(struct scsi_qla_host *ha, struct srb * sp, int handle)
static void
qla1280_reset_adapter(struct scsi_qla_host *ha)
static void
qla1280_marker(struct scsi_qla_host *ha, int bus, int id, int lun, u8 type)
static int
qla1280_64bit_start_scsi(struct scsi_qla_host *ha, struct srb * sp)
static int
qla1280_32bit_start_scsi(struct scsi_qla_host *ha, struct srb * sp)
static request_t *
qla1280_req_pkt(struct scsi_qla_host *ha)
static void
qla1280_isp_cmd(struct scsi_qla_host *ha)
static void
qla1280_isr(struct scsi_qla_host *ha, struct list_head *done_q)
static void
qla1280_rst_aen(struct scsi_qla_host *ha)
static void
qla1280_status_entry(struct scsi_qla_host *ha, struct response *pkt,
struct list_head *done_q)
static void
qla1280_error_entry(struct scsi_qla_host *ha, struct response *pkt,
struct list_head *done_q)
static int
qla1280_abort_isp(struct scsi_qla_host *ha)
static u16
qla1280_debounce_register(volatile u16 __iomem * addr)
#define SET_SXP_BANK            0x0100
#define SCSI_PHASE_INVALID      0x87FF
static int
qla1280_check_for_dead_scsi_bus(struct scsi_qla_host *ha, unsigned int bus)
static void
qla1280_get_target_parameters(struct scsi_qla_host *ha,
struct scsi_device *device)
#if DEBUG_QLA1280
static void
__qla1280_dump_buffer(char *b, int size)
static void
__qla1280_print_scsi_cmd(struct scsi_cmnd *cmd)
static void
ql1280_dump_device(struct scsi_qla_host *ha)
enum tokens ;
struct setup_tokens ;
static struct setup_tokens setup_token[] __initdata =
;
static int __init
qla1280_setup(char *s)
static int __init
qla1280_get_token(char *str)
static struct scsi_host_template qla1280_driver_template = ;
static int __devinit
qla1280_probe_one(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit
qla1280_remove_one(struct pci_dev *pdev)
static struct pci_driver qla1280_pci_driver = ;
static int __init
qla1280_init(void)
static void __exit
qla1280_exit(void)
module_init(qla1280_init);
module_exit(qla1280_exit);
MODULE_AUTHOR("Qlogic & Jes Sorensen");
MODULE_DESCRIPTION("Qlogic ISP SCSI (qla1x80/qla1x160) driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("qlogic/1040.bin");
MODULE_FIRMWARE("qlogic/1280.bin");
MODULE_FIRMWARE("qlogic/12160.bin");
MODULE_VERSION(QLA1280_VERSION);
