static LIST_HEAD(aha152x_host_list);
#if defined(PCMCIA) || defined(MODULE)
#if !defined(AUTOCONF)
#define AUTOCONF
#if !defined(AUTOCONF) && !defined(SETUP0)
#error define AUTOCONF or SETUP0
#if defined(AHA152X_DEBUG)
#define DEBUG_DEFAULT debug_eh
#define DPRINTK(when,msgs...) \
do  while(0)
#define DO_LOCK(flags)	\
do  while(0)
#define DO_UNLOCK(flags)	\
do  while(0)
#define DPRINTK(when,msgs...)
#define	DO_LOCK(flags)		spin_lock_irqsave(&QLOCK,flags)
#define	DO_UNLOCK(flags)	spin_unlock_irqrestore(&QLOCK,flags)
#define LEAD		"(scsi%d:%d:%d) "
#define WARN_LEAD	KERN_WARNING	LEAD
#define INFO_LEAD	KERN_INFO	LEAD
#define NOTE_LEAD	KERN_NOTICE	LEAD
#define ERR_LEAD	KERN_ERR	LEAD
#define DEBUG_LEAD	KERN_DEBUG	LEAD
#define CMDINFO(cmd) \
(cmd) ? ((cmd)->device->host->host_no) : -1, \
(cmd) ? ((cmd)->device->id & 0x0f) : -1, \
(cmd) ? ((cmd)->device->lun & 0x07) : -1
static inline void
CMD_INC_RESID(struct scsi_cmnd *cmd, int inc)
#define DELAY_DEFAULT 1000
#if defined(PCMCIA)
#define IRQ_MIN 0
#define IRQ_MAX 16
#define IRQ_MIN 9
#if defined(__PPC)
#define IRQ_MAX (nr_irqs-1)
#define IRQ_MAX 12
enum ;
MODULE_AUTHOR("Jürgen Fischer");
MODULE_DESCRIPTION(AHA152X_REVID);
MODULE_LICENSE("GPL");
#if !defined(PCMCIA)
#if defined(MODULE)
static int io[] = ;
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io,"base io address of controller");
static int irq[] = ;
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(irq,"interrupt for controller");
static int scsiid[] = ;
module_param_array(scsiid, int, NULL, 0);
MODULE_PARM_DESC(scsiid,"scsi id of controller");
static int reconnect[] = ;
module_param_array(reconnect, int, NULL, 0);
MODULE_PARM_DESC(reconnect,"allow targets to disconnect");
static int parity[] = ;
module_param_array(parity, int, NULL, 0);
MODULE_PARM_DESC(parity,"use scsi parity");
static int sync[] = ;
module_param_array(sync, int, NULL, 0);
MODULE_PARM_DESC(sync,"use synchronous transfers");
static int delay[] = ;
module_param_array(delay, int, NULL, 0);
MODULE_PARM_DESC(delay,"scsi reset delay");
static int exttrans[] = ;
module_param_array(exttrans, int, NULL, 0);
MODULE_PARM_DESC(exttrans,"use extended translation");
#if !defined(AHA152X_DEBUG)
static int aha152x[] = ;
module_param_array(aha152x, int, NULL, 0);
MODULE_PARM_DESC(aha152x, "parameters for first controller");
static int aha152x1[] = ;
module_param_array(aha152x1, int, NULL, 0);
MODULE_PARM_DESC(aha152x1, "parameters for second controller");
static int debug[] = ;
module_param_array(debug, int, NULL, 0);
MODULE_PARM_DESC(debug, "flags for driver debugging");
static int aha152x[]   = ;
module_param_array(aha152x, int, NULL, 0);
MODULE_PARM_DESC(aha152x, "parameters for first controller");
static int aha152x1[]  = ;
module_param_array(aha152x1, int, NULL, 0);
MODULE_PARM_DESC(aha152x1, "parameters for second controller");
static struct isapnp_device_id id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(isapnp, id_table);
static struct scsi_host_template aha152x_driver_template;
enum aha152x_state ;
struct aha152x_hostdata ;
struct aha152x_scdata ;
#define HOSTDATA(shpnt)		((struct aha152x_hostdata *) &shpnt->hostdata)
#define HOSTNO			((shpnt)->host_no)
#define CURRENT_SC		(HOSTDATA(shpnt)->current_SC)
#define DONE_SC			(HOSTDATA(shpnt)->done_SC)
#define ISSUE_SC		(HOSTDATA(shpnt)->issue_SC)
#define DISCONNECTED_SC		(HOSTDATA(shpnt)->disconnected_SC)
#define QLOCK			(HOSTDATA(shpnt)->lock)
#define QLOCKER			(HOSTDATA(shpnt)->locker)
#define QLOCKERL		(HOSTDATA(shpnt)->lockerl)
#define STATE			(HOSTDATA(shpnt)->state)
#define PREVSTATE		(HOSTDATA(shpnt)->prevstate)
#define LASTSTATE		(HOSTDATA(shpnt)->laststate)
#define RECONN_TARGET		(HOSTDATA(shpnt)->target)
#define CMD_I			(HOSTDATA(shpnt)->cmd_i)
#define MSGO(i)			(HOSTDATA(shpnt)->msgo[i])
#define MSGO_I			(HOSTDATA(shpnt)->msgo_i)
#define MSGOLEN			(HOSTDATA(shpnt)->msgo_len)
#define ADDMSGO(x)		(MSGOLEN<256 ? (void)(MSGO(MSGOLEN++)=x) : aha152x_error(shpnt,"MSGO overflow"))
#define MSGI(i)			(HOSTDATA(shpnt)->msgi[i])
#define MSGILEN			(HOSTDATA(shpnt)->msgi_len)
#define ADDMSGI(x)		(MSGILEN<256 ? (void)(MSGI(MSGILEN++)=x) : aha152x_error(shpnt,"MSGI overflow"))
#define DATA_LEN		(HOSTDATA(shpnt)->data_len)
#define SYNCRATE		(HOSTDATA(shpnt)->syncrate[CURRENT_SC->device->id])
#define SYNCNEG			(HOSTDATA(shpnt)->syncneg[CURRENT_SC->device->id])
#define DELAY			(HOSTDATA(shpnt)->delay)
#define EXT_TRANS		(HOSTDATA(shpnt)->ext_trans)
#define TC1550			(HOSTDATA(shpnt)->tc1550)
#define RECONNECT		(HOSTDATA(shpnt)->reconnect)
#define PARITY			(HOSTDATA(shpnt)->parity)
#define SYNCHRONOUS		(HOSTDATA(shpnt)->synchronous)
#define HOSTIOPORT0		(HOSTDATA(shpnt)->io_port0)
#define HOSTIOPORT1		(HOSTDATA(shpnt)->io_port1)
#define SCDATA(SCpnt)		((struct aha152x_scdata *) (SCpnt)->host_scribble)
#define SCNEXT(SCpnt)		SCDATA(SCpnt)->next
#define SCSEM(SCpnt)		SCDATA(SCpnt)->done
#define SG_ADDRESS(buffer)	((char *) sg_virt((buffer)))
static void seldi_run(struct Scsi_Host *shpnt);
static void seldo_run(struct Scsi_Host *shpnt);
static void selto_run(struct Scsi_Host *shpnt);
static void busfree_run(struct Scsi_Host *shpnt);
static void msgo_init(struct Scsi_Host *shpnt);
static void msgo_run(struct Scsi_Host *shpnt);
static void msgo_end(struct Scsi_Host *shpnt);
static void cmd_init(struct Scsi_Host *shpnt);
static void cmd_run(struct Scsi_Host *shpnt);
static void cmd_end(struct Scsi_Host *shpnt);
static void datai_init(struct Scsi_Host *shpnt);
static void datai_run(struct Scsi_Host *shpnt);
static void datai_end(struct Scsi_Host *shpnt);
static void datao_init(struct Scsi_Host *shpnt);
static void datao_run(struct Scsi_Host *shpnt);
static void datao_end(struct Scsi_Host *shpnt);
static void status_run(struct Scsi_Host *shpnt);
static void msgi_run(struct Scsi_Host *shpnt);
static void msgi_end(struct Scsi_Host *shpnt);
static void parerr_run(struct Scsi_Host *shpnt);
static void rsti_run(struct Scsi_Host *shpnt);
static void is_complete(struct Scsi_Host *shpnt);
static struct  states[] = ;
static irqreturn_t intr(int irq, void *dev_id);
static void reset_ports(struct Scsi_Host *shpnt);
static void aha152x_error(struct Scsi_Host *shpnt, char *msg);
static void done(struct Scsi_Host *shpnt, int error);
static void disp_ports(struct Scsi_Host *shpnt);
static void show_command(Scsi_Cmnd * ptr);
static void show_queues(struct Scsi_Host *shpnt);
static void disp_enintr(struct Scsi_Host *shpnt);
static inline void append_SC(Scsi_Cmnd **SC, Scsi_Cmnd *new_SC)
static inline Scsi_Cmnd *remove_first_SC(Scsi_Cmnd ** SC)
static inline Scsi_Cmnd *remove_lun_SC(Scsi_Cmnd ** SC, int target, int lun)
static inline Scsi_Cmnd *remove_SC(Scsi_Cmnd **SC, Scsi_Cmnd *SCp)
static irqreturn_t swintr(int irqno, void *dev_id)
struct Scsi_Host *aha152x_probe_one(struct aha152x_setup *setup)
void aha152x_release(struct Scsi_Host *shpnt)
static int setup_expected_interrupts(struct Scsi_Host *shpnt)
static int aha152x_internal_queue(Scsi_Cmnd *SCpnt, struct completion *complete,
int phase, void (*done)(Scsi_Cmnd *))
static int aha152x_queue_lck(Scsi_Cmnd *SCpnt, void (*done)(Scsi_Cmnd *))
static DEF_SCSI_QCMD(aha152x_queue)
static void reset_done(Scsi_Cmnd *SCpnt)
static int aha152x_abort(Scsi_Cmnd *SCpnt)
static int aha152x_device_reset(Scsi_Cmnd * SCpnt)
static void free_hard_reset_SCs(struct Scsi_Host *shpnt, Scsi_Cmnd **SCs)
static int aha152x_bus_reset_host(struct Scsi_Host *shpnt)
static int aha152x_bus_reset(Scsi_Cmnd *SCpnt)
static void reset_ports(struct Scsi_Host *shpnt)
int aha152x_host_reset_host(struct Scsi_Host *shpnt)
static int aha152x_host_reset(Scsi_Cmnd *SCpnt)
static int aha152x_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int *info_array)
static void done(struct Scsi_Host *shpnt, int error)
static struct work_struct aha152x_tq;
static void run(struct work_struct *work)
static irqreturn_t intr(int irqno, void *dev_id)
static void busfree_run(struct Scsi_Host *shpnt)
static void seldo_run(struct Scsi_Host *shpnt)
static void selto_run(struct Scsi_Host *shpnt)
static void seldi_run(struct Scsi_Host *shpnt)
static void msgi_run(struct Scsi_Host *shpnt)
static void msgi_end(struct Scsi_Host *shpnt)
static void msgo_init(struct Scsi_Host *shpnt)
static void msgo_run(struct Scsi_Host *shpnt)
static void msgo_end(struct Scsi_Host *shpnt)
static void cmd_init(struct Scsi_Host *shpnt)
static void cmd_run(struct Scsi_Host *shpnt)
static void cmd_end(struct Scsi_Host *shpnt)
static void status_run(struct Scsi_Host *shpnt)
static void datai_init(struct Scsi_Host *shpnt)
static void datai_run(struct Scsi_Host *shpnt)
static void datai_end(struct Scsi_Host *shpnt)
static void datao_init(struct Scsi_Host *shpnt)
static void datao_run(struct Scsi_Host *shpnt)
static void datao_end(struct Scsi_Host *shpnt)
static int update_state(struct Scsi_Host *shpnt)
static void parerr_run(struct Scsi_Host *shpnt)
static void rsti_run(struct Scsi_Host *shpnt)
static void is_complete(struct Scsi_Host *shpnt)
static void aha152x_error(struct Scsi_Host *shpnt, char *msg)
static void disp_ports(struct Scsi_Host *shpnt)
static void disp_enintr(struct Scsi_Host *shpnt)
static void show_command(Scsi_Cmnd *ptr)
static void show_queues(struct Scsi_Host *shpnt)
#undef SPRINTF
#define SPRINTF(args...) pos += sprintf(pos, ## args)
static int get_command(char *pos, Scsi_Cmnd * ptr)
static int get_ports(struct Scsi_Host *shpnt, char *pos)
static int aha152x_set_info(char *buffer, int length, struct Scsi_Host *shpnt)
#undef SPRINTF
#define SPRINTF(args...) \
do  while(0)
static int aha152x_proc_info(struct Scsi_Host *shpnt, char *buffer, char **start,
off_t offset, int length, int inout)
static int aha152x_adjust_queue(struct scsi_device *device)
static struct scsi_host_template aha152x_driver_template = ;
#if !defined(PCMCIA)
static int setup_count;
static struct aha152x_setup setup[2];
static unsigned short ports[] = ;
#if !defined(SKIP_BIOSTEST)
static unsigned int addresses[] =
;
static struct signature  signatures[] =
;
static int aha152x_porttest(int io_port)
static int tc1550_porttest(int io_port)
static int checksetup(struct aha152x_setup *setup)
static int __init aha152x_init(void)
static void __exit aha152x_exit(void)
module_init(aha152x_init);
module_exit(aha152x_exit);
#if !defined(MODULE)
static int __init aha152x_setup(char *str)
{
#if defined(AHA152X_DEBUG)
int ints[11];
int ints[10];
get_options(str, ARRAY_SIZE(ints), ints);
if(setup_count>=ARRAY_SIZE(setup))
setup[setup_count].conf        = str;
setup[setup_count].io_port     = ints[0] >= 1 ? ints[1] : 0x340;
setup[setup_count].irq         = ints[0] >= 2 ? ints[2] : 11;
setup[setup_count].scsiid      = ints[0] >= 3 ? ints[3] : 7;
setup[setup_count].reconnect   = ints[0] >= 4 ? ints[4] : 1;
setup[setup_count].parity      = ints[0] >= 5 ? ints[5] : 1;
setup[setup_count].synchronous = ints[0] >= 6 ? ints[6] : 1;
setup[setup_count].delay       = ints[0] >= 7 ? ints[7] : DELAY_DEFAULT;
setup[setup_count].ext_trans   = ints[0] >= 8 ? ints[8] : 0;
#if defined(AHA152X_DEBUG)
setup[setup_count].debug       = ints[0] >= 9 ? ints[9] : DEBUG_DEFAULT;
if (ints[0] > 9)
__setup("aha152x=", aha152x_setup);
