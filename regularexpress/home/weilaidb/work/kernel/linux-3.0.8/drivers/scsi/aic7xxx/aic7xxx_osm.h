#define _AIC7XXX_LINUX_H_
#define AIC_LIB_PREFIX ahc
#undef LIST_HEAD
#define AHC_DEBUG 1
#define AHC_DEBUG_OPTS CONFIG_AIC7XXX_DEBUG_MASK
#define AHC_DEBUG 1
struct ahc_softc;
typedef struct pci_dev *ahc_dev_softc_t;
typedef struct scsi_cmnd      *ahc_io_ctx_t;
#define ahc_htobe16(x)	cpu_to_be16(x)
#define ahc_htobe32(x)	cpu_to_be32(x)
#define ahc_htobe64(x)	cpu_to_be64(x)
#define ahc_htole16(x)	cpu_to_le16(x)
#define ahc_htole32(x)	cpu_to_le32(x)
#define ahc_htole64(x)	cpu_to_le64(x)
#define ahc_be16toh(x)	be16_to_cpu(x)
#define ahc_be32toh(x)	be32_to_cpu(x)
#define ahc_be64toh(x)	be64_to_cpu(x)
#define ahc_le16toh(x)	le16_to_cpu(x)
#define ahc_le32toh(x)	le32_to_cpu(x)
#define ahc_le64toh(x)	le64_to_cpu(x)
extern u_int aic7xxx_no_probe;
extern u_int aic7xxx_allow_memio;
extern struct scsi_host_template aic7xxx_driver_template;
typedef uint32_t bus_size_t;
typedef enum  bus_space_tag_t;
typedef union  bus_space_handle_t;
typedef struct bus_dma_segment
bus_dma_segment_t;
struct ahc_linux_dma_tag
;
typedef struct ahc_linux_dma_tag* bus_dma_tag_t;
typedef dma_addr_t bus_dmamap_t;
typedef int bus_dma_filter_t(void*, dma_addr_t);
typedef void bus_dmamap_callback_t(void *, bus_dma_segment_t *, int, int);
#define BUS_DMA_WAITOK		0x0
#define BUS_DMA_NOWAIT		0x1
#define BUS_DMA_ALLOCNOW	0x2
#define BUS_DMA_LOAD_SEGS	0x4
#define BUS_SPACE_MAXADDR	0xFFFFFFFF
#define BUS_SPACE_MAXADDR_32BIT	0xFFFFFFFF
#define BUS_SPACE_MAXSIZE_32BIT	0xFFFFFFFF
int	ahc_dma_tag_create(struct ahc_softc *, bus_dma_tag_t,
bus_size_t, bus_size_t,
dma_addr_t, dma_addr_t,
bus_dma_filter_t*, void *,
bus_size_t, int,
bus_size_t, int,
bus_dma_tag_t *);
void	ahc_dma_tag_destroy(struct ahc_softc *, bus_dma_tag_t);
int	ahc_dmamem_alloc(struct ahc_softc *, bus_dma_tag_t,
void**, int,
bus_dmamap_t*);
void	ahc_dmamem_free(struct ahc_softc *, bus_dma_tag_t,
void*, bus_dmamap_t);
void	ahc_dmamap_destroy(struct ahc_softc *, bus_dma_tag_t,
bus_dmamap_t);
int	ahc_dmamap_load(struct ahc_softc *ahc, bus_dma_tag_t,
bus_dmamap_t, void *,
bus_size_t, bus_dmamap_callback_t *,
void *, int);
int	ahc_dmamap_unload(struct ahc_softc *, bus_dma_tag_t, bus_dmamap_t);
#define BUS_DMASYNC_PREREAD	0x01
#define BUS_DMASYNC_POSTREAD	0x02
#define BUS_DMASYNC_PREWRITE	0x04
#define BUS_DMASYNC_POSTWRITE	0x08
#define ahc_dmamap_sync(ahc, dma_tag, dmamap, offset, len, op)
#define AIC_DEBUG_REGISTERS 1
#define AIC_DEBUG_REGISTERS 0
static inline void
ahc_scb_timer_reset(struct scb *scb, u_int usec)
#define AIC7XXX_DRIVER_VERSION "7.0"
typedef enum  ahc_linux_dev_flags;
struct ahc_linux_device ;
#define	AHC_NSEG 128
struct scb_platform_data ;
struct ahc_platform_data ;
void ahc_delay(long);
uint8_t ahc_inb(struct ahc_softc * ahc, long port);
void ahc_outb(struct ahc_softc * ahc, long port, uint8_t val);
void ahc_outsb(struct ahc_softc * ahc, long port,
uint8_t *, int count);
void ahc_insb(struct ahc_softc * ahc, long port,
uint8_t *, int count);
int		ahc_linux_register_host(struct ahc_softc *,
struct scsi_host_template *);
struct info_str ;
static inline void
ahc_lockinit(struct ahc_softc *ahc)
static inline void
ahc_lock(struct ahc_softc *ahc, unsigned long *flags)
static inline void
ahc_unlock(struct ahc_softc *ahc, unsigned long *flags)
#define PCIR_DEVVENDOR		0x00
#define PCIR_VENDOR		0x00
#define PCIR_DEVICE		0x02
#define PCIR_COMMAND		0x04
#define PCIM_CMD_PORTEN		0x0001
#define PCIM_CMD_MEMEN		0x0002
#define PCIM_CMD_BUSMASTEREN	0x0004
#define PCIM_CMD_MWRICEN	0x0010
#define PCIM_CMD_PERRESPEN	0x0040
#define	PCIM_CMD_SERRESPEN	0x0100
#define PCIR_STATUS		0x06
#define PCIR_REVID		0x08
#define PCIR_PROGIF		0x09
#define PCIR_SUBCLASS		0x0a
#define PCIR_CLASS		0x0b
#define PCIR_CACHELNSZ		0x0c
#define PCIR_LATTIMER		0x0d
#define PCIR_HEADERTYPE		0x0e
#define PCIM_MFDEV		0x80
#define PCIR_BIST		0x0f
#define PCIR_CAP_PTR		0x34
#define PCIR_MAPS	0x10
#define PCIR_SUBVEND_0	0x2c
#define PCIR_SUBDEV_0	0x2e
typedef enum
ahc_power_state;
int			 ahc_linux_eisa_init(void);
void			 ahc_linux_eisa_exit(void);
int			 aic7770_map_registers(struct ahc_softc *ahc,
u_int port);
int			 aic7770_map_int(struct ahc_softc *ahc, u_int irq);
static inline int	ahc_linux_eisa_init(void)
static inline void	ahc_linux_eisa_exit(void)
int			 ahc_linux_pci_init(void);
void			 ahc_linux_pci_exit(void);
int			 ahc_pci_map_registers(struct ahc_softc *ahc);
int			 ahc_pci_map_int(struct ahc_softc *ahc);
uint32_t		 ahc_pci_read_config(ahc_dev_softc_t pci,
int reg, int width);
void			 ahc_pci_write_config(ahc_dev_softc_t pci,
int reg, uint32_t value,
int width);
static inline int ahc_get_pci_function(ahc_dev_softc_t);
static inline int
ahc_get_pci_function(ahc_dev_softc_t pci)
static inline int ahc_get_pci_slot(ahc_dev_softc_t);
static inline int
ahc_get_pci_slot(ahc_dev_softc_t pci)
static inline int ahc_get_pci_bus(ahc_dev_softc_t);
static inline int
ahc_get_pci_bus(ahc_dev_softc_t pci)
static inline int ahc_linux_pci_init(void)
static inline void ahc_linux_pci_exit(void)
static inline void ahc_flush_device_writes(struct ahc_softc *);
static inline void
ahc_flush_device_writes(struct ahc_softc *ahc)
int	ahc_linux_proc_info(struct Scsi_Host *, char *, char **,
off_t, int, int);
static inline void ahc_cmd_set_transaction_status(struct scsi_cmnd *, uint32_t);
static inline void ahc_set_transaction_status(struct scb *, uint32_t);
static inline void ahc_cmd_set_scsi_status(struct scsi_cmnd *, uint32_t);
static inline void ahc_set_scsi_status(struct scb *, uint32_t);
static inline uint32_t ahc_cmd_get_transaction_status(struct scsi_cmnd *cmd);
static inline uint32_t ahc_get_transaction_status(struct scb *);
static inline uint32_t ahc_cmd_get_scsi_status(struct scsi_cmnd *cmd);
static inline uint32_t ahc_get_scsi_status(struct scb *);
static inline void ahc_set_transaction_tag(struct scb *, int, u_int);
static inline u_long ahc_get_transfer_length(struct scb *);
static inline int ahc_get_transfer_dir(struct scb *);
static inline void ahc_set_residual(struct scb *, u_long);
static inline void ahc_set_sense_residual(struct scb *scb, u_long resid);
static inline u_long ahc_get_residual(struct scb *);
static inline u_long ahc_get_sense_residual(struct scb *);
static inline int ahc_perform_autosense(struct scb *);
static inline uint32_t ahc_get_sense_bufsize(struct ahc_softc *,
struct scb *);
static inline void ahc_notify_xfer_settings_change(struct ahc_softc *,
struct ahc_devinfo *);
static inline void ahc_platform_scb_free(struct ahc_softc *ahc,
struct scb *scb);
static inline void ahc_freeze_scb(struct scb *scb);
static inline
void ahc_cmd_set_transaction_status(struct scsi_cmnd *cmd, uint32_t status)
static inline
void ahc_set_transaction_status(struct scb *scb, uint32_t status)
static inline
void ahc_cmd_set_scsi_status(struct scsi_cmnd *cmd, uint32_t status)
static inline
void ahc_set_scsi_status(struct scb *scb, uint32_t status)
static inline
uint32_t ahc_cmd_get_transaction_status(struct scsi_cmnd *cmd)
static inline
uint32_t ahc_get_transaction_status(struct scb *scb)
static inline
uint32_t ahc_cmd_get_scsi_status(struct scsi_cmnd *cmd)
static inline
uint32_t ahc_get_scsi_status(struct scb *scb)
static inline
void ahc_set_transaction_tag(struct scb *scb, int enabled, u_int type)
static inline
u_long ahc_get_transfer_length(struct scb *scb)
static inline
int ahc_get_transfer_dir(struct scb *scb)
static inline
void ahc_set_residual(struct scb *scb, u_long resid)
static inline
void ahc_set_sense_residual(struct scb *scb, u_long resid)
static inline
u_long ahc_get_residual(struct scb *scb)
static inline
u_long ahc_get_sense_residual(struct scb *scb)
static inline
int ahc_perform_autosense(struct scb *scb)
static inline uint32_t
ahc_get_sense_bufsize(struct ahc_softc *ahc, struct scb *scb)
static inline void
ahc_notify_xfer_settings_change(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo)
static inline void
ahc_platform_scb_free(struct ahc_softc *ahc, struct scb *scb)
int	ahc_platform_alloc(struct ahc_softc *ahc, void *platform_arg);
void	ahc_platform_free(struct ahc_softc *ahc);
void	ahc_platform_freeze_devq(struct ahc_softc *ahc, struct scb *scb);
static inline void
ahc_freeze_scb(struct scb *scb)
void	ahc_platform_set_tags(struct ahc_softc *ahc, struct scsi_device *sdev,
struct ahc_devinfo *devinfo, ahc_queue_alg);
int	ahc_platform_abort_scbs(struct ahc_softc *ahc, int target,
char channel, int lun, u_int tag,
role_t role, uint32_t status);
irqreturn_t
ahc_linux_isr(int irq, void *dev_id);
void	ahc_platform_flushwork(struct ahc_softc *ahc);
void	ahc_done(struct ahc_softc*, struct scb*);
void	ahc_send_async(struct ahc_softc *, char channel,
u_int target, u_int lun, ac_code);
void	ahc_print_path(struct ahc_softc *, struct scb *);
void	ahc_platform_dump_card_state(struct ahc_softc *ahc);
#define AHC_PCI_CONFIG 1
#define AHC_PCI_CONFIG 0
#define bootverbose aic7xxx_verbose
extern u_int aic7xxx_verbose;
