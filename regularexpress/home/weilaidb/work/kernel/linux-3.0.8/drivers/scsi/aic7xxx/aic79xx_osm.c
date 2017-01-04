static struct scsi_transport_template *ahd_linux_transport_template = NULL;
#define AHD_LINUX_ERR_THRESH	1000
#define AIC79XX_RESET_DELAY CONFIG_AIC79XX_RESET_DELAY_MS
#define AIC79XX_RESET_DELAY 5000
typedef struct  adapter_tag_info_t;
#define AIC79XX_CMDS_PER_DEVICE CONFIG_AIC79XX_CMDS_PER_DEVICE
#define AIC79XX_CMDS_PER_DEVICE AHD_MAX_QUEUE
#define AIC79XX_CONFIGED_TAG_COMMANDS
static adapter_tag_info_t aic79xx_tag_info[] =
;
struct ahd_linux_iocell_opts
;
#define AIC79XX_DEFAULT_PRECOMP		0xFF
#define AIC79XX_DEFAULT_SLEWRATE	0xFF
#define AIC79XX_DEFAULT_AMPLITUDE	0xFF
#define AIC79XX_DEFAULT_IOOPTS			\
#define AIC79XX_PRECOMP_INDEX	0
#define AIC79XX_SLEWRATE_INDEX	1
#define AIC79XX_AMPLITUDE_INDEX	2
static const struct ahd_linux_iocell_opts aic79xx_iocell_info[] =
;
#define DID_UNDERFLOW   DID_ERROR
void
ahd_print_path(struct ahd_softc *ahd, struct scb *scb)
static uint32_t aic79xx_no_reset;
static uint32_t aic79xx_extended;
static uint32_t aic79xx_pci_parity = ~0;
uint32_t aic79xx_allow_memio = ~0;
static uint32_t aic79xx_seltime;
static uint32_t aic79xx_periodic_otag;
uint32_t aic79xx_slowcrc;
static char *aic79xx = NULL;
MODULE_AUTHOR("Maintainer: Hannes Reinecke <hare@suse.de>");
MODULE_DESCRIPTION("Adaptec AIC790X U320 SCSI Host Bus Adapter driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(AIC79XX_DRIVER_VERSION);
module_param(aic79xx, charp, 0444);
MODULE_PARM_DESC(aic79xx,
"period-delimited options string:\n"
"	verbose			Enable verbose/diagnostic logging\n"
"	allow_memio		Allow device registers to be memory mapped\n"
"	debug			Bitmask of debug values to enable\n"
"	no_reset		Suppress initial bus resets\n"
"	extended		Enable extended geometry on all controllers\n"
"	periodic_otag		Send an ordered tagged transaction\n"
"				periodically to prevent tag starvation.\n"
"				This may be required by some older disk\n"
"				or drives/RAID arrays.\n"
"	tag_info:<tag_str>	Set per-target tag depth\n"
"	global_tag_depth:<int>	Global tag depth for all targets on all buses\n"
"	slewrate:<slewrate_list>Set the signal slew rate (0-15).\n"
"	precomp:<pcomp_list>	Set the signal precompensation (0-7).\n"
"	amplitude:<int>		Set the signal amplitude (0-7).\n"
"	seltime:<int>		Selection Timeout:\n"
"				(0/256ms,1/128ms,2/64ms,3/32ms)\n"
"	slowcrc			Turn on the SLOWCRC bit (Rev B only)\n"
"\n"
"	Sample /etc/modprobe.conf line:\n"
"		Enable verbose logging\n"
"		Set tag depth on Controller 2/Target 2 to 10 tags\n"
"		Shorten the selection timeout to 128ms\n"
"\n"
"	options aic79xx 'aic79xx=verbose.tag_info:.seltime:1'\n"
);
static void ahd_linux_handle_scsi_status(struct ahd_softc *,
struct scsi_device *,
struct scb *);
static void ahd_linux_queue_cmd_complete(struct ahd_softc *ahd,
struct scsi_cmnd *cmd);
static int ahd_linux_queue_abort_cmd(struct scsi_cmnd *cmd);
static void ahd_linux_initialize_scsi_bus(struct ahd_softc *ahd);
static u_int ahd_linux_user_tagdepth(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
static void ahd_linux_device_queue_depth(struct scsi_device *);
static int ahd_linux_run_command(struct ahd_softc*,
struct ahd_linux_device *,
struct scsi_cmnd *);
static void ahd_linux_setup_tag_info_global(char *p);
static int  aic79xx_setup(char *c);
static void ahd_freeze_simq(struct ahd_softc *ahd);
static void ahd_release_simq(struct ahd_softc *ahd);
static int ahd_linux_unit;
void ahd_delay(long);
void
ahd_delay(long usec)
uint8_t ahd_inb(struct ahd_softc * ahd, long port);
void ahd_outb(struct ahd_softc * ahd, long port, uint8_t val);
void ahd_outw_atomic(struct ahd_softc * ahd,
long port, uint16_t val);
void ahd_outsb(struct ahd_softc * ahd, long port,
uint8_t *, int count);
void ahd_insb(struct ahd_softc * ahd, long port,
uint8_t *, int count);
uint8_t
ahd_inb(struct ahd_softc * ahd, long port)
void
ahd_outb(struct ahd_softc * ahd, long port, uint8_t val)
void
ahd_outw_atomic(struct ahd_softc * ahd, long port, uint16_t val)
void
ahd_outsb(struct ahd_softc * ahd, long port, uint8_t *array, int count)
void
ahd_insb(struct ahd_softc * ahd, long port, uint8_t *array, int count)
uint32_t
ahd_pci_read_config(ahd_dev_softc_t pci, int reg, int width)
void
ahd_pci_write_config(ahd_dev_softc_t pci, int reg, uint32_t value, int width)
static void ahd_linux_unmap_scb(struct ahd_softc*, struct scb*);
static void
ahd_linux_unmap_scb(struct ahd_softc *ahd, struct scb *scb)
#define BUILD_SCSIID(ahd, cmd)						\
(((scmd_id(cmd) << TID_SHIFT) & TID) | (ahd)->our_id)
static const char *
ahd_linux_info(struct Scsi_Host *host)
static int
ahd_linux_queue_lck(struct scsi_cmnd * cmd, void (*scsi_done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ahd_linux_queue)
static struct scsi_target **
ahd_linux_target_in_softc(struct scsi_target *starget)
static int
ahd_linux_target_alloc(struct scsi_target *starget)
static void
ahd_linux_target_destroy(struct scsi_target *starget)
static int
ahd_linux_slave_alloc(struct scsi_device *sdev)
static int
ahd_linux_slave_configure(struct scsi_device *sdev)
#if defined(__i386__)
static int
ahd_linux_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static int
ahd_linux_abort(struct scsi_cmnd *cmd)
static int
ahd_linux_dev_reset(struct scsi_cmnd *cmd)
static int
ahd_linux_bus_reset(struct scsi_cmnd *cmd)
struct scsi_host_template aic79xx_driver_template = ;
int
ahd_dma_tag_create(struct ahd_softc *ahd, bus_dma_tag_t parent,
bus_size_t alignment, bus_size_t boundary,
dma_addr_t lowaddr, dma_addr_t highaddr,
bus_dma_filter_t *filter, void *filterarg,
bus_size_t maxsize, int nsegments,
bus_size_t maxsegsz, int flags, bus_dma_tag_t *ret_tag)
void
ahd_dma_tag_destroy(struct ahd_softc *ahd, bus_dma_tag_t dmat)
int
ahd_dmamem_alloc(struct ahd_softc *ahd, bus_dma_tag_t dmat, void** vaddr,
int flags, bus_dmamap_t *mapp)
void
ahd_dmamem_free(struct ahd_softc *ahd, bus_dma_tag_t dmat,
void* vaddr, bus_dmamap_t map)
int
ahd_dmamap_load(struct ahd_softc *ahd, bus_dma_tag_t dmat, bus_dmamap_t map,
void *buf, bus_size_t buflen, bus_dmamap_callback_t *cb,
void *cb_arg, int flags)
void
ahd_dmamap_destroy(struct ahd_softc *ahd, bus_dma_tag_t dmat, bus_dmamap_t map)
int
ahd_dmamap_unload(struct ahd_softc *ahd, bus_dma_tag_t dmat, bus_dmamap_t map)
static void
ahd_linux_setup_iocell_info(u_long index, int instance, int targ, int32_t value)
static void
ahd_linux_setup_tag_info_global(char *p)
static void
ahd_linux_setup_tag_info(u_long arg, int instance, int targ, int32_t value)
static char *
ahd_parse_brace_option(char *opt_name, char *opt_arg, char *end, int depth,
void (*callback)(u_long, int, int, int32_t),
u_long callback_arg)
static int
aic79xx_setup(char *s)
__setup("aic79xx=", aic79xx_setup);
uint32_t aic79xx_verbose;
int
ahd_linux_register_host(struct ahd_softc *ahd, struct scsi_host_template *template)
static void
ahd_linux_initialize_scsi_bus(struct ahd_softc *ahd)
int
ahd_platform_alloc(struct ahd_softc *ahd, void *platform_arg)
void
ahd_platform_free(struct ahd_softc *ahd)
void
ahd_platform_init(struct ahd_softc *ahd)
void
ahd_platform_freeze_devq(struct ahd_softc *ahd, struct scb *scb)
void
ahd_platform_set_tags(struct ahd_softc *ahd, struct scsi_device *sdev,
struct ahd_devinfo *devinfo, ahd_queue_alg alg)
int
ahd_platform_abort_scbs(struct ahd_softc *ahd, int target, char channel,
int lun, u_int tag, role_t role, uint32_t status)
static u_int
ahd_linux_user_tagdepth(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
static void
ahd_linux_device_queue_depth(struct scsi_device *sdev)
static int
ahd_linux_run_command(struct ahd_softc *ahd, struct ahd_linux_device *dev,
struct scsi_cmnd *cmd)
irqreturn_t
ahd_linux_isr(int irq, void *dev_id)
void
ahd_send_async(struct ahd_softc *ahd, char channel,
u_int target, u_int lun, ac_code code)
void
ahd_done(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_linux_handle_scsi_status(struct ahd_softc *ahd,
struct scsi_device *sdev, struct scb *scb)
static void
ahd_linux_queue_cmd_complete(struct ahd_softc *ahd, struct scsi_cmnd *cmd)
static void
ahd_freeze_simq(struct ahd_softc *ahd)
static void
ahd_release_simq(struct ahd_softc *ahd)
static int
ahd_linux_queue_abort_cmd(struct scsi_cmnd *cmd)
static void ahd_linux_set_width(struct scsi_target *starget, int width)
static void ahd_linux_set_period(struct scsi_target *starget, int period)
static void ahd_linux_set_offset(struct scsi_target *starget, int offset)
static void ahd_linux_set_dt(struct scsi_target *starget, int dt)
static void ahd_linux_set_qas(struct scsi_target *starget, int qas)
static void ahd_linux_set_iu(struct scsi_target *starget, int iu)
static void ahd_linux_set_rd_strm(struct scsi_target *starget, int rdstrm)
static void ahd_linux_set_wr_flow(struct scsi_target *starget, int wrflow)
static void ahd_linux_set_rti(struct scsi_target *starget, int rti)
static void ahd_linux_set_pcomp_en(struct scsi_target *starget, int pcomp)
static void ahd_linux_set_hold_mcs(struct scsi_target *starget, int hold)
static void ahd_linux_get_signalling(struct Scsi_Host *shost)
static struct spi_function_template ahd_linux_transport_functions = ;
static int __init
ahd_linux_init(void)
static void __exit
ahd_linux_exit(void)
module_init(ahd_linux_init);
module_exit(ahd_linux_exit);
