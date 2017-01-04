#define SYM_GLUE_H
#  include <asm/irq.h>
#define	SYM_CONF_TIMER_INTERVAL		((HZ+1)/2)
#undef SYM_OPT_HANDLE_DEVICE_QUEUEING
#define SYM_OPT_LIMIT_COMMAND_REORDERING
#define printf_emerg(args...)	printk(KERN_EMERG args)
#define	printf_alert(args...)	printk(KERN_ALERT args)
#define	printf_crit(args...)	printk(KERN_CRIT args)
#define	printf_err(args...)	printk(KERN_ERR	args)
#define	printf_warning(args...)	printk(KERN_WARNING args)
#define	printf_notice(args...)	printk(KERN_NOTICE args)
#define	printf_info(args...)	printk(KERN_INFO args)
#define	printf_debug(args...)	printk(KERN_DEBUG args)
#define	printf(args...)		printk(args)
#define MEMORY_READ_BARRIER()	rmb()
#define MEMORY_WRITE_BARRIER()	wmb()
#define	readw_l2b	readw
#define	readl_l2b	readl
#define	writew_b2l	writew
#define	writel_b2l	writel
#define	readw_raw	readw
#define	readl_raw	readl
#define	writew_raw	writew
#define	writel_raw	writel
#error	"Chips in BIG ENDIAN addressing mode are not (yet) supported"
#define cpu_to_scr(dw)	cpu_to_le32(dw)
#define scr_to_cpu(dw)	le32_to_cpu(dw)
#define SCSI_SUCCESS	SUCCESS
#define SCSI_FAILED	FAILED
#define SYM_HAVE_SLCB
struct sym_slcb ;
struct sym_shcb ;
#define sym_name(np) (np)->s.inst_name
struct sym_nvram;
struct sym_device ;
struct sym_data ;
static inline struct sym_hcb * sym_get_hcb(struct Scsi_Host *host)
static inline void
sym_set_cam_status(struct scsi_cmnd *cmd, int status)
static inline int
sym_get_cam_status(struct scsi_cmnd *cmd)
static inline void sym_set_cam_result_ok(struct sym_ccb *cp, struct scsi_cmnd *cmd, int resid)
void sym_set_cam_result_error(struct sym_hcb *np, struct sym_ccb *cp, int resid);
void sym_xpt_done(struct sym_hcb *np, struct scsi_cmnd *ccb);
#define sym_print_addr(cmd, arg...) dev_info(&cmd->device->sdev_gendev , ## arg)
void sym_xpt_async_bus_reset(struct sym_hcb *np);
int  sym_setup_data_and_start (struct sym_hcb *np, struct scsi_cmnd *csio, struct sym_ccb *cp);
void sym_log_bus_error(struct Scsi_Host *);
void sym_dump_registers(struct Scsi_Host *);
