#if (NDEBUG & NDEBUG_LISTS)
#define LIST(x,y) \
#define REMOVE(w,x,y,z) \
#define LIST(x,y)
#define REMOVE(w,x,y,z)
#undef LINKED
static struct Scsi_Host *first_instance = NULL;
static struct scsi_host_template *the_template = NULL;
#define	SETUP_HOSTDATA(in)				\
struct NCR5380_hostdata *hostdata =			\
(struct NCR5380_hostdata *)(in)->hostdata
#define	HOSTDATA(in) ((struct NCR5380_hostdata *)(in)->hostdata)
#define	NEXT(cmd)	(*(struct scsi_cmnd **)&((cmd)->host_scribble))
#define	NEXTADDR(cmd)	((struct scsi_cmnd **)&((cmd)->host_scribble))
#define	HOSTNO		instance->host_no
#define	H_NO(cmd)	(cmd)->device->host->host_no
#define SGADDR(buffer) (void *)(((unsigned long)sg_virt(((buffer)))))
#undef TAG_NONE
#define TAG_NONE 0xff
#if (MAX_TAGS % 32) != 0
#error "MAX_TAGS must be a multiple of 32!"
typedef struct  TAG_ALLOC;
static TAG_ALLOC TagAlloc[8][8];
static void __init init_tags( void )
static int is_lun_busy(struct scsi_cmnd *cmd, int should_be_tagged)
static void cmd_get_tag(struct scsi_cmnd *cmd, int should_be_tagged)
static void cmd_free_tag(struct scsi_cmnd *cmd)
static void free_all_tags( void )
static void merge_contiguous_buffers(struct scsi_cmnd *cmd)
static __inline__ void initialize_SCp(struct scsi_cmnd *cmd)
#if 1
static struct
signals[] = ,
basrs[] = ,
icrs[] = ,
mrs[] = ;
static void NCR5380_print(struct Scsi_Host *instance)
static struct  phases[] = ;
static void NCR5380_print_phase(struct Scsi_Host *instance)
__inline__ void NCR5380_print(struct Scsi_Host *instance) ;
__inline__ void NCR5380_print_phase(struct Scsi_Host *instance) ;
static volatile int main_running = 0;
static DECLARE_WORK(NCR5380_tqueue, NCR5380_main);
static __inline__ void queue_main(void)
static inline void NCR5380_all_init (void)
static void __init NCR5380_print_options (struct Scsi_Host *instance)
static void NCR5380_print_status (struct Scsi_Host *instance)
#undef SPRINTF
#define SPRINTF(fmt,args...) \
do  while(0)
static
char *lprint_Scsi_Cmnd(struct scsi_cmnd *cmd, char *pos, char *buffer,
int length);
static int NCR5380_proc_info(struct Scsi_Host *instance, char *buffer,
char **start, off_t offset, int length, int inout)
static char *lprint_Scsi_Cmnd(struct scsi_cmnd *cmd, char *pos, char *buffer,
int length)
static int NCR5380_init (struct Scsi_Host *instance, int flags)
static int NCR5380_queue_command_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(NCR5380_queue_command)
static void NCR5380_main (struct work_struct *bl)
static void NCR5380_dma_complete( struct Scsi_Host *instance )
static irqreturn_t NCR5380_intr (int irq, void *dev_id)
static void collect_stats(struct NCR5380_hostdata *hostdata,
struct scsi_cmnd *cmd)
static int NCR5380_select(struct Scsi_Host *instance, struct scsi_cmnd *cmd,
int tag)
static int NCR5380_transfer_pio( struct Scsi_Host *instance,
unsigned char *phase, int *count,
unsigned char **data)
static int do_abort (struct Scsi_Host *host)
#if defined(REAL_DMA)
static int NCR5380_transfer_dma( struct Scsi_Host *instance,
unsigned char *phase, int *count,
unsigned char **data)
static void NCR5380_information_transfer (struct Scsi_Host *instance)
static void NCR5380_reselect (struct Scsi_Host *instance)
static int NCR5380_abort(struct scsi_cmnd *cmd)
static int NCR5380_bus_reset(struct scsi_cmnd *cmd)
