#define AIC7XXX_STRICT_PCI_SETUP
#define AIC7XXX_C_VERSION  "5.2.6"
#define ALL_TARGETS -1
#define ALL_CHANNELS -1
#define ALL_LUNS -1
#define MAX_TARGETS  16
#define MAX_LUNS     8
#  define TRUE 1
#  define FALSE 0
#if defined(__powerpc__) || defined(__i386__) || defined(__x86_64__)
#  define MMAPIO
#define AIC7XXX_CMDS_PER_DEVICE 32
typedef struct
adapter_tag_info_t;
#define DEFAULT_TAG_COMMANDS
static adapter_tag_info_t aic7xxx_tag_info[] =
;
static const char *board_names[] = ;
#define DID_UNDERFLOW   DID_ERROR
#define DID_RETRY_COMMAND DID_ERROR
#define HSCSIID        0x07
#define SCSI_RESET     0x040
#define MINSLOT                1
#define MAXSLOT                15
#define SLOTBASE(x)        ((x) << 12)
#define BASE_TO_SLOT(x) ((x) >> 12)
#define AHC_HID0              0x80
#define AHC_HID1              0x81
#define AHC_HID2              0x82
#define AHC_HID3              0x83
#define MINREG                0xC00
#define MAXREG                0xCFF
#define INTDEF                0x5C
#define        CLASS_PROGIF_REVID        0x08
#define                DEVREVID        0x000000FFul
#define                PROGINFC        0x0000FF00ul
#define                SUBCLASS        0x00FF0000ul
#define                BASECLASS        0xFF000000ul
#define        CSIZE_LATTIME                0x0C
#define                CACHESIZE        0x0000003Ful
#define                LATTIME                0x0000FF00ul
#define        DEVCONFIG                0x40
#define                SCBSIZE32        0x00010000ul
#define                MPORTMODE        0x00000400ul
#define                RAMPSM           0x00000200ul
#define                RAMPSM_ULTRA2    0x00000004
#define                VOLSENSE         0x00000100ul
#define                SCBRAMSEL        0x00000080ul
#define                SCBRAMSEL_ULTRA2 0x00000008
#define                MRDCEN           0x00000040ul
#define                EXTSCBTIME       0x00000020ul
#define                EXTSCBPEN        0x00000010ul
#define                BERREN           0x00000008ul
#define                DACEN            0x00000004ul
#define                STPWLEVEL        0x00000002ul
#define                DIFACTNEGEN      0x00000001ul
#define        SCAMCTL                  0x1a
#define        CCSCBBADDR               0xf0
typedef enum  seeprom_chip_type;
struct seeprom_config ;
#define SELBUS_MASK                0x0a
#define         SELNARROW        0x00
#define         SELBUSB                0x08
#define SINGLE_BUS                0x00
#define SCB_TARGET(scb)         \
(((scb)->hscb->target_channel_lun & TID) >> 4)
#define SCB_LUN(scb)            \
((scb)->hscb->target_channel_lun & LID)
#define SCB_IS_SCSIBUS_B(scb)   \
(((scb)->hscb->target_channel_lun & SELBUSB) != 0)
#define aic7xxx_error(cmd)        ((cmd)->SCp.Status)
#define aic7xxx_status(cmd)        ((cmd)->SCp.sent_command)
#define aic7xxx_position(cmd)        ((cmd)->SCp.have_data_in)
#define aic7xxx_mapping(cmd)	     ((cmd)->SCp.phase)
#define AIC_DEV(cmd)	((struct aic_dev_data *)(cmd)->device->hostdata)
static struct aic7xxx_host *first_aic7xxx = NULL;
struct hw_scatterlist ;
#define        AIC7XXX_MAX_SG 128
#define AIC7XXX_MAXSCB        255
struct aic7xxx_hwscb ;
typedef enum  scb_flag_type;
typedef enum  ahc_flag_type;
typedef enum  ahc_chip;
typedef enum  ahc_feature;
#define SCB_DMA_ADDR(scb, addr) ((unsigned long)(addr) + (scb)->scb_dma->dma_offset)
struct aic7xxx_scb_dma ;
typedef enum  ahc_bugs;
struct aic7xxx_scb ;
typedef struct  scb_queue_type;
static struct  hard_error[] = ;
static unsigned char
generic_sense[] = ;
typedef struct  scb_data_type;
struct target_cmd ;
#define AHC_TRANS_CUR    0x0001
#define AHC_TRANS_ACTIVE 0x0002
#define AHC_TRANS_GOAL   0x0004
#define AHC_TRANS_USER   0x0008
#define AHC_TRANS_QUITE  0x0010
typedef struct  transinfo_type;
struct aic_dev_data ;
struct aic7xxx_host ;
#define AHC_SYNCRATE_ULTRA3 0
#define AHC_SYNCRATE_ULTRA2 1
#define AHC_SYNCRATE_ULTRA  3
#define AHC_SYNCRATE_FAST   6
#define AHC_SYNCRATE_CRC 0x40
#define AHC_SYNCRATE_SE  0x10
static struct aic7xxx_syncrate  aic7xxx_syncrates[] = ;
#define CTL_OF_SCB(scb) (((scb->hscb)->target_channel_lun >> 3) & 0x1),  \
(((scb->hscb)->target_channel_lun >> 4) & 0xf), \
((scb->hscb)->target_channel_lun & 0x07)
#define CTL_OF_CMD(cmd) ((cmd->device->channel) & 0x01),  \
((cmd->device->id) & 0x0f), \
((cmd->device->lun) & 0x07)
#define TARGET_INDEX(cmd)  ((cmd)->device->id | ((cmd)->device->channel << 3))
#define WARN_LEAD KERN_WARNING "(scsi%d:%d:%d:%d) "
#define INFO_LEAD KERN_INFO "(scsi%d:%d:%d:%d) "
static unsigned int aic7xxx_default_queue_depth = AIC7XXX_CMDS_PER_DEVICE;
static unsigned int aic7xxx_no_reset = 0;
static int aic7xxx_reverse_scan = 0;
static unsigned int aic7xxx_extended = 0;
static int aic7xxx_irq_trigger = -1;
static int aic7xxx_override_term = -1;
static int aic7xxx_stpwlev = -1;
static int aic7xxx_panic_on_abort = 0;
static int aic7xxx_pci_parity = 0;
static int aic7xxx_dump_card = 0;
static int aic7xxx_dump_sequencer = 0;
static int aic7xxx_no_probe = 0;
static int aic7xxx_scbram = 0;
static int aic7xxx_seltime = 0x10;
static char * aic7xxx = NULL;
module_param(aic7xxx, charp, 0);
#define VERBOSE_NORMAL         0x0000
#define VERBOSE_NEGOTIATION    0x0001
#define VERBOSE_SEQINT         0x0002
#define VERBOSE_SCSIINT        0x0004
#define VERBOSE_PROBE          0x0008
#define VERBOSE_PROBE2         0x0010
#define VERBOSE_NEGOTIATION2   0x0020
#define VERBOSE_MINOR_ERROR    0x0040
#define VERBOSE_TRACING        0x0080
#define VERBOSE_ABORT          0x0f00
#define VERBOSE_ABORT_MID      0x0100
#define VERBOSE_ABORT_FIND     0x0200
#define VERBOSE_ABORT_PROCESS  0x0400
#define VERBOSE_ABORT_RETURN   0x0800
#define VERBOSE_RESET          0xf000
#define VERBOSE_RESET_MID      0x1000
#define VERBOSE_RESET_FIND     0x2000
#define VERBOSE_RESET_PROCESS  0x4000
#define VERBOSE_RESET_RETURN   0x8000
static int aic7xxx_verbose = VERBOSE_NORMAL | VERBOSE_NEGOTIATION |
VERBOSE_PROBE;
static int aic7xxx_release(struct Scsi_Host *host);
static void aic7xxx_set_syncrate(struct aic7xxx_host *p,
struct aic7xxx_syncrate *syncrate, int target, int channel,
unsigned int period, unsigned int offset, unsigned char options,
unsigned int type, struct aic_dev_data *aic_dev);
static void aic7xxx_set_width(struct aic7xxx_host *p, int target, int channel,
int lun, unsigned int width, unsigned int type,
struct aic_dev_data *aic_dev);
static void aic7xxx_panic_abort(struct aic7xxx_host *p, struct scsi_cmnd *cmd);
static void aic7xxx_print_card(struct aic7xxx_host *p);
static void aic7xxx_print_scratch_ram(struct aic7xxx_host *p);
static void aic7xxx_print_sequencer(struct aic7xxx_host *p, int downloaded);
static void aic7xxx_check_scbs(struct aic7xxx_host *p, char *buffer);
static unsigned char
aic_inb(struct aic7xxx_host *p, long port)
static void
aic_outb(struct aic7xxx_host *p, unsigned char val, long port)
static int
aic7xxx_setup(char *s)
__setup("aic7xxx=", aic7xxx_setup);
static void
pause_sequencer(struct aic7xxx_host *p)
static void
unpause_sequencer(struct aic7xxx_host *p, int unpause_always)
static void
restart_sequencer(struct aic7xxx_host *p)
static int
aic7xxx_check_patch(struct aic7xxx_host *p,
struct sequencer_patch **start_patch, int start_instr, int *skip_addr)
static void
aic7xxx_download_instr(struct aic7xxx_host *p, int instrptr,
unsigned char *dconsts)
static void
aic7xxx_loadseq(struct aic7xxx_host *p)
static void
aic7xxx_print_sequencer(struct aic7xxx_host *p, int downloaded)
static const char *
aic7xxx_info(struct Scsi_Host *dooh)
static struct aic7xxx_syncrate *
aic7xxx_find_syncrate(struct aic7xxx_host *p, unsigned int *period,
unsigned int maxsync, unsigned char *options)
static unsigned int
aic7xxx_find_period(struct aic7xxx_host *p, unsigned int scsirate,
unsigned int maxsync)
static void
aic7xxx_validate_offset(struct aic7xxx_host *p,
struct aic7xxx_syncrate *syncrate, unsigned int *offset, int wide)
static void
aic7xxx_set_syncrate(struct aic7xxx_host *p, struct aic7xxx_syncrate *syncrate,
int target, int channel, unsigned int period, unsigned int offset,
unsigned char options, unsigned int type, struct aic_dev_data *aic_dev)
static void
aic7xxx_set_width(struct aic7xxx_host *p, int target, int channel, int lun,
unsigned int width, unsigned int type, struct aic_dev_data *aic_dev)
static void
scbq_init(volatile scb_queue_type *queue)
static inline void
scbq_insert_head(volatile scb_queue_type *queue, struct aic7xxx_scb *scb)
static inline struct aic7xxx_scb *
scbq_remove_head(volatile scb_queue_type *queue)
static inline void
scbq_remove(volatile scb_queue_type *queue, struct aic7xxx_scb *scb)
static inline void
scbq_insert_tail(volatile scb_queue_type *queue, struct aic7xxx_scb *scb)
static int
aic7xxx_match_scb(struct aic7xxx_host *p, struct aic7xxx_scb *scb,
int target, int channel, int lun, unsigned char tag)
static void
aic7xxx_add_curscb_to_free_list(struct aic7xxx_host *p)
static unsigned char
aic7xxx_rem_scb_from_disc_list(struct aic7xxx_host *p, unsigned char scbptr,
unsigned char prev)
static inline void
aic7xxx_busy_target(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static inline unsigned char
aic7xxx_index_busy_target(struct aic7xxx_host *p, unsigned char tcl,
int unbusy)
static unsigned char
aic7xxx_find_scb(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static int
aic7xxx_allocate_scb(struct aic7xxx_host *p)
static void
aic7xxx_queue_cmd_complete(struct aic7xxx_host *p, struct scsi_cmnd *cmd)
static void aic7xxx_done_cmds_complete(struct aic7xxx_host *p)
static void
aic7xxx_free_scb(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static void
aic7xxx_done(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static void
aic7xxx_run_done_queue(struct aic7xxx_host *p, int complete)
static unsigned char
aic7xxx_abort_waiting_scb(struct aic7xxx_host *p, struct aic7xxx_scb *scb,
unsigned char scbpos, unsigned char prev)
static int
aic7xxx_search_qinfifo(struct aic7xxx_host *p, int target, int channel,
int lun, unsigned char tag, int flags, int requeue,
volatile scb_queue_type *queue)
static int
aic7xxx_scb_on_qoutfifo(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static void
aic7xxx_reset_device(struct aic7xxx_host *p, int target, int channel,
int lun, unsigned char tag)
static void
aic7xxx_clear_intstat(struct aic7xxx_host *p)
static void
aic7xxx_reset_current_bus(struct aic7xxx_host *p)
static void
aic7xxx_reset_channel(struct aic7xxx_host *p, int channel, int initiate_reset)
static void
aic7xxx_run_waiting_queues(struct aic7xxx_host *p)
#define  DPE 0x80
#define  SSE 0x40
#define  RMA 0x20
#define  RTA 0x10
#define  STA 0x08
#define  DPR 0x01
static void
aic7xxx_pci_intr(struct aic7xxx_host *p)
static void
aic7xxx_construct_ppr(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static void
aic7xxx_construct_sdtr(struct aic7xxx_host *p, unsigned char period,
unsigned char offset)
static void
aic7xxx_construct_wdtr(struct aic7xxx_host *p, unsigned char bus_width)
static void
aic7xxx_calculate_residual (struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static void
aic7xxx_handle_device_reset(struct aic7xxx_host *p, int target, int channel)
static void
aic7xxx_handle_seqint(struct aic7xxx_host *p, unsigned char intstat)
static int
aic7xxx_parse_msg(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static void
aic7xxx_handle_reqinit(struct aic7xxx_host *p, struct aic7xxx_scb *scb)
static void
aic7xxx_handle_scsiint(struct aic7xxx_host *p, unsigned char intstat)
static void
aic7xxx_check_scbs(struct aic7xxx_host *p, char *buffer)
static void
aic7xxx_handle_command_completion_intr(struct aic7xxx_host *p)
static void
aic7xxx_isr(void *dev_id)
static irqreturn_t
do_aic7xxx_isr(int irq, void *dev_id)
static void
aic7xxx_init_transinfo(struct aic7xxx_host *p, struct aic_dev_data *aic_dev)
static int
aic7xxx_slave_alloc(struct scsi_device *SDptr)
static void
aic7xxx_device_queue_depth(struct aic7xxx_host *p, struct scsi_device *device)
static void
aic7xxx_slave_destroy(struct scsi_device *SDptr)
static int
aic7xxx_slave_configure(struct scsi_device *SDptr)
#if defined(__i386__) || defined(__alpha__)
static int
aic7xxx_probe(int slot, int base, ahc_flag_type *flags)
static int
read_284x_seeprom(struct aic7xxx_host *p, struct seeprom_config *sc)
#define CLOCK_PULSE(p)                                               \
do  while(0)
static int
acquire_seeprom(struct aic7xxx_host *p)
static void
release_seeprom(struct aic7xxx_host *p)
static int
read_seeprom(struct aic7xxx_host *p, int offset,
unsigned short *scarray, unsigned int len, seeprom_chip_type chip)
static unsigned char
read_brdctl(struct aic7xxx_host *p)
static void
write_brdctl(struct aic7xxx_host *p, unsigned char value)
static void
aic785x_cable_detect(struct aic7xxx_host *p, int *int_50,
int *ext_present, int *eeprom)
#undef CLOCK_PULSE
static void
aic2940_uwpro_wide_cable_detect(struct aic7xxx_host *p, int *int_68,
int *ext_68, int *eeprom)
static void
aic787x_cable_detect(struct aic7xxx_host *p, int *int_50, int *int_68,
int *ext_present, int *eeprom)
static void
aic7xxx_ultra2_term_detect(struct aic7xxx_host *p, int *enableSE_low,
int *enableSE_high, int *enableLVD_low,
int *enableLVD_high, int *eprom_present)
static void
configure_termination(struct aic7xxx_host *p)
static void
detect_maxscb(struct aic7xxx_host *p)
static int
aic7xxx_register(struct scsi_host_template *template, struct aic7xxx_host *p,
int reset_delay)
static int
aic7xxx_chip_reset(struct aic7xxx_host *p)
static struct aic7xxx_host *
aic7xxx_alloc(struct scsi_host_template *sht, struct aic7xxx_host *temp)
static void
aic7xxx_free(struct aic7xxx_host *p)
static void
aic7xxx_load_seeprom(struct aic7xxx_host *p, unsigned char *sxfrctl1)
static void
aic7xxx_configure_bugs(struct aic7xxx_host *p)
static int
aic7xxx_detect(struct scsi_host_template *template)
static void aic7xxx_buildscb(struct aic7xxx_host *p, struct scsi_cmnd *cmd,
struct aic7xxx_scb *scb)
static int aic7xxx_queue_lck(struct scsi_cmnd *cmd, void (*fn)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(aic7xxx_queue)
static int __aic7xxx_bus_device_reset(struct scsi_cmnd *cmd)
static int aic7xxx_bus_device_reset(struct scsi_cmnd *cmd)
static void aic7xxx_panic_abort(struct aic7xxx_host *p, struct scsi_cmnd *cmd)
static int __aic7xxx_abort(struct scsi_cmnd *cmd)
static int aic7xxx_abort(struct scsi_cmnd *cmd)
static int aic7xxx_reset(struct scsi_cmnd *cmd)
static int
aic7xxx_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static int
aic7xxx_release(struct Scsi_Host *host)
static void
aic7xxx_print_card(struct aic7xxx_host *p)
static void
aic7xxx_print_scratch_ram(struct aic7xxx_host *p)
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(AIC7XXX_H_VERSION);
static struct scsi_host_template driver_template = ;
