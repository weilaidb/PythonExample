#define __REALTEK_RTSX_H
#define CR_DRIVER_NAME		"rts_pstor"
#define pci_get_bus_and_slot(bus, devfn)	\
pci_get_domain_bus_and_slot(0, (bus), (devfn))
#define rtsx_writel(chip, reg, value) \
iowrite32(value, (chip)->rtsx->remap_addr + reg)
#define rtsx_readl(chip, reg) \
ioread32((chip)->rtsx->remap_addr + reg)
#define rtsx_writew(chip, reg, value) \
iowrite16(value, (chip)->rtsx->remap_addr + reg)
#define rtsx_readw(chip, reg) \
ioread16((chip)->rtsx->remap_addr + reg)
#define rtsx_writeb(chip, reg, value) \
iowrite8(value, (chip)->rtsx->remap_addr + reg)
#define rtsx_readb(chip, reg) \
ioread8((chip)->rtsx->remap_addr + reg)
#define rtsx_read_config_byte(chip, where, val) \
pci_read_config_byte((chip)->rtsx->pci, where, val)
#define rtsx_write_config_byte(chip, where, val) \
pci_write_config_byte((chip)->rtsx->pci, where, val)
#define wait_timeout_x(task_state, msecs)		\
do  while (0)
#define wait_timeout(msecs)	wait_timeout_x(TASK_INTERRUPTIBLE, (msecs))
#define STATE_TRANS_NONE	0
#define STATE_TRANS_CMD		1
#define STATE_TRANS_BUF		2
#define STATE_TRANS_SG		3
#define TRANS_NOT_READY		0
#define TRANS_RESULT_OK		1
#define TRANS_RESULT_FAIL	2
#define SCSI_LUN(srb)		((srb)->device->lun)
typedef unsigned long DELAY_PARA_T;
struct rtsx_chip;
struct rtsx_dev ;
typedef struct rtsx_dev rtsx_dev_t;
static inline struct Scsi_Host *rtsx_to_host(struct rtsx_dev *dev)
static inline struct rtsx_dev *host_to_rtsx(struct Scsi_Host *host)
static inline void get_current_time(u8 *timeval_buf, int buf_len)
#define scsi_unlock(host)	spin_unlock_irq(host->host_lock)
#define scsi_lock(host)		spin_lock_irq(host->host_lock)
#define lock_state(chip)	spin_lock_irq(&((chip)->rtsx->reg_lock))
#define unlock_state(chip)	spin_unlock_irq(&((chip)->rtsx->reg_lock))
enum xfer_buf_dir	;
int rtsx_read_pci_cfg_byte(u8 bus, u8 dev, u8 func, u8 offset, u8 *val);
