static struct scsi_transport_template *ahc_linux_transport_template = NULL;
#define AIC7XXX_RESET_DELAY CONFIG_AIC7XXX_RESET_DELAY_MS
#define AIC7XXX_RESET_DELAY 5000
#define AIC7XXX_PROC_STATS
typedef struct  adapter_tag_info_t;
#define AIC7XXX_CMDS_PER_DEVICE CONFIG_AIC7XXX_CMDS_PER_DEVICE
#define AIC7XXX_CMDS_PER_DEVICE AHC_MAX_QUEUE
#define AIC7XXX_CONFIGED_TAG_COMMANDS
static adapter_tag_info_t aic7xxx_tag_info[] =
;
#define DID_UNDERFLOW   DID_ERROR
void
ahc_print_path(struct ahc_softc *ahc, struct scb *scb)
static uint32_t aic7xxx_no_reset;
static uint32_t aic7xxx_extended;
static uint32_t aic7xxx_pci_parity = ~0;
uint32_t aic7xxx_allow_memio = ~0;
static uint32_t aic7xxx_seltime;
static uint32_t aic7xxx_periodic_otag;
static char *aic7xxx = NULL;
MODULE_AUTHOR("Maintainer: Hannes Reinecke <hare@suse.de>");
MODULE_DESCRIPTION("Adaptec AIC77XX/78XX SCSI Host Bus Adapter driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(AIC7XXX_DRIVER_VERSION);
module_param(aic7xxx, charp, 0444);
MODULE_PARM_DESC(aic7xxx,
"period-delimited options string:\n"
"	verbose			Enable verbose/diagnostic logging\n"
"	allow_memio		Allow device registers to be memory mapped\n"
"	debug			Bitmask of debug values to enable\n"
"	no_probe		Toggle EISA/VLB controller probing\n"
"	probe_eisa_vl		Toggle EISA/VLB controller probing\n"
"	no_reset		Suppress initial bus resets\n"
"	extended		Enable extended geometry on all controllers\n"
"	periodic_otag		Send an ordered tagged transaction\n"
"				periodically to prevent tag starvation.\n"
"				This may be required by some older disk\n"
"				drives or RAID arrays.\n"
"	tag_info:<tag_str>	Set per-target tag depth\n"
"	global_tag_depth:<int>	Global tag depth for every target\n"
"				on every bus\n"
"	seltime:<int>		Selection Timeout\n"
"				(0/256ms,1/128ms,2/64ms,3/32ms)\n"
"\n"
"	Sample /etc/modprobe.conf line:\n"
"		Toggle EISA/VLB probing\n"
"		Set tag depth on Controller 1/Target 1 to 10 tags\n"
"		Shorten the selection timeout to 128ms\n"
"\n"
"	options aic7xxx 'aic7xxx=probe_eisa_vl.tag_info:.seltime:1'\n"
);
static void ahc_linux_handle_scsi_status(struct ahc_softc *,
struct scsi_device *,
struct scb *);
static void ahc_linux_queue_cmd_complete(struct ahc_softc *ahc,
struct scsi_cmnd *cmd);
static void ahc_linux_freeze_simq(struct ahc_softc *ahc);
static void ahc_linux_release_simq(struct ahc_softc *ahc);
static int  ahc_linux_queue_recovery_cmd(struct scsi_cmnd *cmd, scb_flag flag);
static void ahc_linux_initialize_scsi_bus(struct ahc_softc *ahc);
static u_int ahc_linux_user_tagdepth(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo);
static void ahc_linux_device_queue_depth(struct scsi_device *);
static int ahc_linux_run_command(struct ahc_softc*,
struct ahc_linux_device *,
struct scsi_cmnd *);
static void ahc_linux_setup_tag_info_global(char *p);
static int  aic7xxx_setup(char *s);
static int ahc_linux_unit;
void
ahc_delay(long usec)
uint8_t
ahc_inb(struct ahc_softc * ahc, long port)
void
ahc_outb(struct ahc_softc * ahc, long port, uint8_t val)
void
ahc_outsb(struct ahc_softc * ahc, long port, uint8_t *array, int count)
void
ahc_insb(struct ahc_softc * ahc, long port, uint8_t *array, int count)
static void ahc_linux_unmap_scb(struct ahc_softc*, struct scb*);
static int ahc_linux_map_seg(struct ahc_softc *ahc, struct scb *scb,
struct ahc_dma_seg *sg,
dma_addr_t addr, bus_size_t len);
static void
ahc_linux_unmap_scb(struct ahc_softc *ahc, struct scb *scb)
static int
ahc_linux_map_seg(struct ahc_softc *ahc, struct scb *scb,
struct ahc_dma_seg *sg, dma_addr_t addr, bus_size_t len)
static const char *
ahc_linux_info(struct Scsi_Host *host)
static int
ahc_linux_queue_lck(struct scsi_cmnd * cmd, void (*scsi_done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ahc_linux_queue)
static inline struct scsi_target **
ahc_linux_target_in_softc(struct scsi_target *starget)
static int
ahc_linux_target_alloc(struct scsi_target *starget)
static void
ahc_linux_target_destroy(struct scsi_target *starget)
static int
ahc_linux_slave_alloc(struct scsi_device *sdev)
static int
ahc_linux_slave_configure(struct scsi_device *sdev)
#if defined(__i386__)
static int
ahc_linux_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static int
ahc_linux_abort(struct scsi_cmnd *cmd)
static int
ahc_linux_dev_reset(struct scsi_cmnd *cmd)
static int
ahc_linux_bus_reset(struct scsi_cmnd *cmd)
struct scsi_host_template aic7xxx_driver_template = ;
#define BUILD_SCSIID(ahc, cmd)						    \
((((cmd)->device->id << TID_SHIFT) & TID)			    \
| (((cmd)->device->channel == 0) ? (ahc)->our_id : (ahc)->our_id_b) \
| (((cmd)->device->channel == 0) ? 0 : TWIN_CHNLB))
int
ahc_dma_tag_create(struct ahc_softc *ahc, bus_dma_tag_t parent,
bus_size_t alignment, bus_size_t boundary,
dma_addr_t lowaddr, dma_addr_t highaddr,
bus_dma_filter_t *filter, void *filterarg,
bus_size_t maxsize, int nsegments,
bus_size_t maxsegsz, int flags, bus_dma_tag_t *ret_tag)
void
ahc_dma_tag_destroy(struct ahc_softc *ahc, bus_dma_tag_t dmat)
int
ahc_dmamem_alloc(struct ahc_softc *ahc, bus_dma_tag_t dmat, void** vaddr,
int flags, bus_dmamap_t *mapp)
void
ahc_dmamem_free(struct ahc_softc *ahc, bus_dma_tag_t dmat,
void* vaddr, bus_dmamap_t map)
int
ahc_dmamap_load(struct ahc_softc *ahc, bus_dma_tag_t dmat, bus_dmamap_t map,
void *buf, bus_size_t buflen, bus_dmamap_callback_t *cb,
void *cb_arg, int flags)
void
ahc_dmamap_destroy(struct ahc_softc *ahc, bus_dma_tag_t dmat, bus_dmamap_t map)
int
ahc_dmamap_unload(struct ahc_softc *ahc, bus_dma_tag_t dmat, bus_dmamap_t map)
static void
ahc_linux_setup_tag_info_global(char *p)
static void
ahc_linux_setup_tag_info(u_long arg, int instance, int targ, int32_t value)
static char *
ahc_parse_brace_option(char *opt_name, char *opt_arg, char *end, int depth,
void (*callback)(u_long, int, int, int32_t),
u_long callback_arg)
static int
aic7xxx_setup(char *s)
__setup("aic7xxx=", aic7xxx_setup);
uint32_t aic7xxx_verbose;
int
ahc_linux_register_host(struct ahc_softc *ahc, struct scsi_host_template *template)
void
ahc_linux_initialize_scsi_bus(struct ahc_softc *ahc)
int
ahc_platform_alloc(struct ahc_softc *ahc, void *platform_arg)
void
ahc_platform_free(struct ahc_softc *ahc)
void
ahc_platform_freeze_devq(struct ahc_softc *ahc, struct scb *scb)
void
ahc_platform_set_tags(struct ahc_softc *ahc, struct scsi_device *sdev,
struct ahc_devinfo *devinfo, ahc_queue_alg alg)
int
ahc_platform_abort_scbs(struct ahc_softc *ahc, int target, char channel,
int lun, u_int tag, role_t role, uint32_t status)
static u_int
ahc_linux_user_tagdepth(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
static void
ahc_linux_device_queue_depth(struct scsi_device *sdev)
static int
ahc_linux_run_command(struct ahc_softc *ahc, struct ahc_linux_device *dev,
struct scsi_cmnd *cmd)
irqreturn_t
ahc_linux_isr(int irq, void *dev_id)
void
ahc_platform_flushwork(struct ahc_softc *ahc)
void
ahc_send_async(struct ahc_softc *ahc, char channel,
u_int target, u_int lun, ac_code code)
void
ahc_done(struct ahc_softc *ahc, struct scb *scb)
static void
ahc_linux_handle_scsi_status(struct ahc_softc *ahc,
struct scsi_device *sdev, struct scb *scb)
static void
ahc_linux_queue_cmd_complete(struct ahc_softc *ahc, struct scsi_cmnd *cmd)
static void
ahc_linux_freeze_simq(struct ahc_softc *ahc)
static void
ahc_linux_release_simq(struct ahc_softc *ahc)
static int
ahc_linux_queue_recovery_cmd(struct scsi_cmnd *cmd, scb_flag flag)
void
ahc_platform_dump_card_state(struct ahc_softc *ahc)
static void ahc_linux_set_width(struct scsi_target *starget, int width)
static void ahc_linux_set_period(struct scsi_target *starget, int period)
static void ahc_linux_set_offset(struct scsi_target *starget, int offset)
static void ahc_linux_set_dt(struct scsi_target *starget, int dt)
static void ahc_linux_get_signalling(struct Scsi_Host *shost)
static struct spi_function_template ahc_linux_transport_functions = ;
static int __init
ahc_linux_init(void)
static void
ahc_linux_exit(void)
module_init(ahc_linux_init);
module_exit(ahc_linux_exit);
