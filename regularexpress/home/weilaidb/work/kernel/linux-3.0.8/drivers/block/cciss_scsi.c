#define CCISS_ABORT_MSG 0x00
#define CCISS_RESET_MSG 0x01
static int fill_cmd(ctlr_info_t *h, CommandList_struct *c, __u8 cmd, void *buff,
size_t size,
__u8 page_code, unsigned char *scsi3addr,
int cmd_type);
static CommandList_struct *cmd_alloc(ctlr_info_t *h);
static CommandList_struct *cmd_special_alloc(ctlr_info_t *h);
static void cmd_free(ctlr_info_t *h, CommandList_struct *c);
static void cmd_special_free(ctlr_info_t *h, CommandList_struct *c);
static int cciss_scsi_proc_info(
struct Scsi_Host *sh,
char *buffer,
char **start,
off_t offset,
int length,
int func);
static int cciss_scsi_queue_command (struct Scsi_Host *h,
struct scsi_cmnd *cmd);
static int cciss_eh_device_reset_handler(struct scsi_cmnd *);
static int cciss_eh_abort_handler(struct scsi_cmnd *);
static struct cciss_scsi_hba_t ccissscsi[MAX_CTLR] = ;
static struct scsi_host_template cciss_driver_template = ;
#define SCSI_PAD_32 8
#define SCSI_PAD_64 8
struct cciss_scsi_cmd_stack_elem_t ;
struct cciss_scsi_cmd_stack_t ;
struct cciss_scsi_adapter_data_t ;
#define CPQ_TAPE_LOCK(h, flags) spin_lock_irqsave( \
&h->scsi_ctlr->lock, flags);
#define CPQ_TAPE_UNLOCK(h, flags) spin_unlock_irqrestore( \
&h->scsi_ctlr->lock, flags);
static CommandList_struct *
scsi_cmd_alloc(ctlr_info_t *h)
static void
scsi_cmd_free(ctlr_info_t *h, CommandList_struct *c)
static int
scsi_cmd_stack_setup(ctlr_info_t *h, struct cciss_scsi_adapter_data_t *sa)
static void
scsi_cmd_stack_free(ctlr_info_t *h)
static int
find_bus_target_lun(ctlr_info_t *h, int *bus, int *target, int *lun)
struct scsi2map ;
static int
cciss_scsi_add_entry(ctlr_info_t *h, int hostno,
struct cciss_scsi_dev_t *device,
struct scsi2map *added, int *nadded)
static void
cciss_scsi_remove_entry(ctlr_info_t *h, int hostno, int entry,
struct scsi2map *removed, int *nremoved)
#define SCSI3ADDR_EQ(a,b) ( \
(a)[7] == (b)[7] && \
(a)[6] == (b)[6] && \
(a)[5] == (b)[5] && \
(a)[4] == (b)[4] && \
(a)[3] == (b)[3] && \
(a)[2] == (b)[2] && \
(a)[1] == (b)[1] && \
(a)[0] == (b)[0])
static void fixup_botched_add(ctlr_info_t *h, char *scsi3addr)
static int device_is_the_same(struct cciss_scsi_dev_t *dev1,
struct cciss_scsi_dev_t *dev2)
static int
adjust_cciss_scsi_table(ctlr_info_t *h, int hostno,
struct cciss_scsi_dev_t sd[], int nsds)
static int
lookup_scsi3addr(ctlr_info_t *h, int bus, int target, int lun, char *scsi3addr)
static void
cciss_scsi_setup(ctlr_info_t *h)
static void complete_scsi_command(CommandList_struct *c, int timeout,
__u32 tag)
static int
cciss_scsi_detect(ctlr_info_t *h)
static void
cciss_unmap_one(struct pci_dev *pdev,
CommandList_struct *c,
size_t buflen,
int data_direction)
static void
cciss_map_one(struct pci_dev *pdev,
CommandList_struct *c,
unsigned char *buf,
size_t buflen,
int data_direction)
static int
cciss_scsi_do_simple_cmd(ctlr_info_t *h,
CommandList_struct *c,
unsigned char *scsi3addr,
unsigned char *cdb,
unsigned char cdblen,
unsigned char *buf, int bufsize,
int direction)
static void
cciss_scsi_interpret_error(ctlr_info_t *h, CommandList_struct *c)
static int
cciss_scsi_do_inquiry(ctlr_info_t *h, unsigned char *scsi3addr,
unsigned char page, unsigned char *buf,
unsigned char bufsize)
static int cciss_scsi_get_device_id(ctlr_info_t *h, unsigned char *scsi3addr,
unsigned char *device_id, int buflen)
static int
cciss_scsi_do_report_phys_luns(ctlr_info_t *h,
ReportLunData_struct *buf, int bufsize)
static void
cciss_update_non_disk_devices(ctlr_info_t *h, int hostno)
static int
is_keyword(char *ptr, int len, char *verb)
static int
cciss_scsi_user_command(ctlr_info_t *h, int hostno, char *buffer, int length)
static int
cciss_scsi_proc_info(struct Scsi_Host *sh,
char *buffer,
char **start,
off_t offset,
int length,
int func)
static void cciss_scatter_gather(ctlr_info_t *h, CommandList_struct *c,
struct scsi_cmnd *cmd)
static int
cciss_scsi_queue_command_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(cciss_scsi_queue_command)
static void cciss_unregister_scsi(ctlr_info_t *h)
static int cciss_engage_scsi(ctlr_info_t *h)
static void
cciss_seq_tape_report(struct seq_file *seq, ctlr_info_t *h)
static int wait_for_device_to_become_ready(ctlr_info_t *h,
unsigned char lunaddr[])
static int cciss_eh_device_reset_handler(struct scsi_cmnd *scsicmd)
static int  cciss_eh_abort_handler(struct scsi_cmnd *scsicmd)
#define cciss_scsi_setup(cntl_num)
