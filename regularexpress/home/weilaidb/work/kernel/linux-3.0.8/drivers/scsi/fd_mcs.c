#define DRIVER_VERSION "v0.2 by ZP Gu<zpg@castle.net>"
#define DEBUG            0
#define ENABLE_PARITY    1
#if DEBUG
#define EVERY_ACCESS     0
#define ERRORS_ONLY      1
#define DEBUG_MESSAGES   1
#define DEBUG_ABORT      1
#define DEBUG_RESET      1
#define DEBUG_RACE       1
#define EVERY_ACCESS     0
#define ERRORS_ONLY      0
#define DEBUG_MESSAGES   0
#define DEBUG_ABORT      0
#define DEBUG_RESET      0
#define DEBUG_RACE       0
#if EVERY_ACCESS
#undef ERRORS_ONLY
#define ERRORS_ONLY      0
#if ENABLE_PARITY
#define PARITY_MASK      0x08
#define PARITY_MASK      0x00
enum chip_type ;
enum ;
enum in_port_type ;
enum out_port_type ;
struct fd_hostdata ;
#define FD_MAX_HOSTS 3
#define HOSTDATA(shpnt) ((struct fd_hostdata *) shpnt->hostdata)
#define bios_base             (HOSTDATA(shpnt)->_bios_base)
#define bios_major            (HOSTDATA(shpnt)->_bios_major)
#define bios_minor            (HOSTDATA(shpnt)->_bios_minor)
#define in_command            (HOSTDATA(shpnt)->_in_command)
#define current_SC            (HOSTDATA(shpnt)->_current_SC)
#define chip                  (HOSTDATA(shpnt)->_chip)
#define adapter_mask          (HOSTDATA(shpnt)->_adapter_mask)
#define FIFO_COUNT            (HOSTDATA(shpnt)->_fifo_count)
#define adapter_name          (HOSTDATA(shpnt)->_adapter_name)
#if DEBUG_RACE
#define in_interrupt_flag     (HOSTDATA(shpnt)->_in_interrupt_flag)
#define SCSI_Mode_Cntl_port   (HOSTDATA(shpnt)->_SCSI_Mode_Cntl_port)
#define FIFO_Data_Count_port  (HOSTDATA(shpnt)->_FIFO_Data_Count_port)
#define Interrupt_Cntl_port   (HOSTDATA(shpnt)->_Interrupt_Cntl_port)
#define Interrupt_Status_port (HOSTDATA(shpnt)->_Interrupt_Status_port)
#define Interrupt_Cond_port   (HOSTDATA(shpnt)->_Interrupt_Cond_port)
#define Read_FIFO_port        (HOSTDATA(shpnt)->_Read_FIFO_port)
#define Read_SCSI_Data_port   (HOSTDATA(shpnt)->_Read_SCSI_Data_port)
#define SCSI_Cntl_port        (HOSTDATA(shpnt)->_SCSI_Cntl_port)
#define SCSI_Data_NoACK_port  (HOSTDATA(shpnt)->_SCSI_Data_NoACK_port)
#define SCSI_Status_port      (HOSTDATA(shpnt)->_SCSI_Status_port)
#define TMC_Cntl_port         (HOSTDATA(shpnt)->_TMC_Cntl_port)
#define TMC_Status_port       (HOSTDATA(shpnt)->_TMC_Status_port)
#define Write_FIFO_port       (HOSTDATA(shpnt)->_Write_FIFO_port)
#define Write_SCSI_Data_port  (HOSTDATA(shpnt)->_Write_SCSI_Data_port)
#define FIFO_Size             (HOSTDATA(shpnt)->_FIFO_Size)
#define Bytes_Read            (HOSTDATA(shpnt)->_Bytes_Read)
#define Bytes_Written         (HOSTDATA(shpnt)->_Bytes_Written)
#define INTR_Processed        (HOSTDATA(shpnt)->_INTR_Processed)
struct fd_mcs_adapters_struct ;
#define REPLY_ID 0x5137
static struct fd_mcs_adapters_struct fd_mcs_adapters[] = ;
#define FD_BRDS ARRAY_SIZE(fd_mcs_adapters)
static irqreturn_t fd_mcs_intr(int irq, void *dev_id);
static unsigned long addresses[] = ;
static unsigned short ports[] = ;
static unsigned short interrupts[] = ;
static int found = 0;
static struct Scsi_Host *hosts[FD_MAX_HOSTS + 1] = ;
static int user_fifo_count = 0;
static int user_fifo_size = 0;
static int __init fd_mcs_setup(char *str)
__setup("fd_mcs=", fd_mcs_setup);
static void print_banner(struct Scsi_Host *shpnt)
static void do_pause(unsigned amount)
static void fd_mcs_make_bus_idle(struct Scsi_Host *shpnt)
static int fd_mcs_detect(struct scsi_host_template * tpnt)
static const char *fd_mcs_info(struct Scsi_Host *shpnt)
static int TOTAL_INTR = 0;
static int fd_mcs_proc_info(struct Scsi_Host *shpnt, char *buffer, char **start, off_t offset, int length, int inout)
static int fd_mcs_select(struct Scsi_Host *shpnt, int target)
static void my_done(struct Scsi_Host *shpnt, int error)
static irqreturn_t fd_mcs_intr(int irq, void *dev_id)
static int fd_mcs_release(struct Scsi_Host *shpnt)
static int fd_mcs_queue_lck(Scsi_Cmnd * SCpnt, void (*done) (Scsi_Cmnd *))
static DEF_SCSI_QCMD(fd_mcs_queue)
#if DEBUG_ABORT || DEBUG_RESET
static void fd_mcs_print_info(Scsi_Cmnd * SCpnt)
static int fd_mcs_abort(Scsi_Cmnd * SCpnt)
static int fd_mcs_bus_reset(Scsi_Cmnd * SCpnt)
static int fd_mcs_biosparam(struct scsi_device * disk, struct block_device *bdev,
sector_t capacity, int *info_array)
static struct scsi_host_template driver_template = ;
MODULE_LICENSE("GPL");
