#define _AIC79XX_H_
struct ahd_platform_data;
struct scb_platform_data;
#define TRUE 1
#define FALSE 0
#define ALL_CHANNELS '\0'
#define ALL_TARGETS_MASK 0xFFFF
#define INITIATOR_WILDCARD	(~0)
#define	SCB_LIST_NULL		0xFF00
#define	SCB_LIST_NULL_LE	(ahd_htole16(SCB_LIST_NULL))
#define QOUTFIFO_ENTRY_VALID 0x80
#define SCBID_IS_NULL(scbid) (((scbid) & 0xFF00 ) == SCB_LIST_NULL)
#define SCSIID_TARGET(ahd, scsiid)	\
(((scsiid) & TID) >> TID_SHIFT)
#define SCSIID_OUR_ID(scsiid)		\
((scsiid) & OID)
#define SCSIID_CHANNEL(ahd, scsiid) ('A')
#define	SCB_IS_SCSIBUS_B(ahd, scb) (0)
#define	SCB_GET_OUR_ID(scb) \
SCSIID_OUR_ID((scb)->hscb->scsiid)
#define	SCB_GET_TARGET(ahd, scb) \
SCSIID_TARGET((ahd), (scb)->hscb->scsiid)
#define	SCB_GET_CHANNEL(ahd, scb) \
SCSIID_CHANNEL(ahd, (scb)->hscb->scsiid)
#define	SCB_GET_LUN(scb) \
((scb)->hscb->lun)
#define SCB_GET_TARGET_OFFSET(ahd, scb)	\
SCB_GET_TARGET(ahd, scb)
#define SCB_GET_TARGET_MASK(ahd, scb) \
(0x01 << (SCB_GET_TARGET_OFFSET(ahd, scb)))
#define SCB_IS_SILENT(scb)					\
((ahd_debug & AHD_SHOW_MASKED_ERRORS) == 0		\
&& (((scb)->flags & SCB_SILENT) != 0))
#define SCB_IS_SILENT(scb)					\
(((scb)->flags & SCB_SILENT) != 0)
#define TCL_TARGET_OFFSET(tcl) \
((((tcl) >> 4) & TID) >> 4)
#define TCL_LUN(tcl) \
(tcl & (AHD_NUM_LUNS - 1))
#define BUILD_TCL(scsiid, lun) \
((lun) | (((scsiid) & TID) << 4))
#define BUILD_TCL_RAW(target, channel, lun) \
((lun) | ((target) << 8))
#define SCB_GET_TAG(scb) \
ahd_le16toh(scb->hscb->tag)
#undef	AHD_TMODE_ENABLE
#define	AHD_TMODE_ENABLE 0
#define AHD_BUILD_COL_IDX(target, lun)				\
(((lun) << 4) | target)
#define AHD_GET_SCB_COL_IDX(ahd, scb)				\
((SCB_GET_LUN(scb) << 4) | SCB_GET_TARGET(ahd, scb))
#define AHD_SET_SCB_COL_IDX(scb, col_idx)				\
do  while (0)
#define AHD_COPY_SCB_COL_IDX(dst, src)				\
do  while (0)
#define	AHD_NEVER_COL_IDX 0xFFFF
#define AHD_NUM_TARGETS 16
#define AHD_NUM_LUNS_NONPKT 64
#define AHD_NUM_LUNS 256
#define AHD_MAXTRANSFER_SIZE	 0x00ffffff
#define AHD_SCB_MAX	512
#define AHD_MAX_QUEUE	AHD_SCB_MAX
#define	AHD_QIN_SIZE	AHD_MAX_QUEUE
#define	AHD_QOUT_SIZE	AHD_MAX_QUEUE
#define AHD_QIN_WRAP(x) ((x) & (AHD_QIN_SIZE-1))
#define AHD_SCB_MAX_ALLOC AHD_MAX_QUEUE
#define AHD_TMODE_CMDS	256
#define AHD_BUSRESET_DELAY	25
typedef enum  ahd_chip;
typedef enum  ahd_feature;
typedef enum  ahd_bug;
typedef enum  ahd_flag;
struct initiator_status ;
struct target_status ;
typedef uint32_t sense_addr_t;
#define MAX_CDB_LEN 16
#define MAX_CDB_LEN_WITH_SENSE_ADDR (MAX_CDB_LEN - sizeof(sense_addr_t))
union initiator_data ;
struct target_data ;
struct hardware_scb ;
struct ahd_dma_seg ;
struct ahd_dma64_seg ;
struct map_node ;
typedef enum  scb_flag;
struct scb ;
TAILQ_HEAD(scb_tailq, scb);
LIST_HEAD(scb_list, scb);
struct scb_data ;
struct target_cmd ;
#define AHD_TMODE_EVENT_BUFFER_SIZE 8
struct ahd_tmode_event ;
struct ahd_tmode_lstate ;
struct ahd_tmode_lstate;
#define AHD_TRANS_CUR		0x01
#define AHD_TRANS_ACTIVE	0x03
#define AHD_TRANS_GOAL		0x04
#define AHD_TRANS_USER		0x08
#define AHD_PERIOD_10MHz	0x19
#define AHD_WIDTH_UNKNOWN	0xFF
#define AHD_PERIOD_UNKNOWN	0xFF
#define AHD_OFFSET_UNKNOWN	0xFF
#define AHD_PPR_OPTS_UNKNOWN	0xFF
struct ahd_transinfo ;
struct ahd_initiator_tinfo ;
struct ahd_tmode_tstate ;
#define AHD_SYNCRATE_160	0x8
#define AHD_SYNCRATE_PACED	0x8
#define AHD_SYNCRATE_DT		0x9
#define AHD_SYNCRATE_ULTRA2	0xa
#define AHD_SYNCRATE_ULTRA	0xc
#define AHD_SYNCRATE_FAST	0x19
#define AHD_SYNCRATE_MIN_DT	AHD_SYNCRATE_FAST
#define AHD_SYNCRATE_SYNC	0x32
#define AHD_SYNCRATE_MIN	0x60
#define	AHD_SYNCRATE_ASYNC	0xFF
#define AHD_SYNCRATE_MAX	AHD_SYNCRATE_160
#define	AHD_ASYNC_XFER_PERIOD	0x44
#define AHD_SYNCRATE_REVA_120	0x8
#define AHD_SYNCRATE_REVA_160	0x7
struct ahd_phase_table_entry ;
struct seeprom_config ;
struct vpd_config ;
#define FLXADDR_TERMCTL			0x0
#define		FLX_TERMCTL_ENSECHIGH	0x8
#define		FLX_TERMCTL_ENSECLOW	0x4
#define		FLX_TERMCTL_ENPRIHIGH	0x2
#define		FLX_TERMCTL_ENPRILOW	0x1
#define FLXADDR_ROMSTAT_CURSENSECTL	0x1
#define		FLX_ROMSTAT_SEECFG	0xF0
#define		FLX_ROMSTAT_EECFG	0x0F
#define		FLX_ROMSTAT_SEE_93C66	0x00
#define		FLX_ROMSTAT_SEE_NONE	0xF0
#define		FLX_ROMSTAT_EE_512x8	0x0
#define		FLX_ROMSTAT_EE_1MBx8	0x1
#define		FLX_ROMSTAT_EE_2MBx8	0x2
#define		FLX_ROMSTAT_EE_4MBx8	0x3
#define		FLX_ROMSTAT_EE_16MBx8	0x4
#define 		CURSENSE_ENB	0x1
#define	FLXADDR_FLEXSTAT		0x2
#define		FLX_FSTAT_BUSY		0x1
#define FLXADDR_CURRENT_STAT		0x4
#define		FLX_CSTAT_SEC_HIGH	0xC0
#define		FLX_CSTAT_SEC_LOW	0x30
#define		FLX_CSTAT_PRI_HIGH	0x0C
#define		FLX_CSTAT_PRI_LOW	0x03
#define		FLX_CSTAT_MASK		0x03
#define		FLX_CSTAT_SHIFT		2
#define		FLX_CSTAT_OKAY		0x0
#define		FLX_CSTAT_OVER		0x1
#define		FLX_CSTAT_UNDER		0x2
#define		FLX_CSTAT_INVALID	0x3
int		ahd_read_seeprom(struct ahd_softc *ahd, uint16_t *buf,
u_int start_addr, u_int count, int bstream);
int		ahd_write_seeprom(struct ahd_softc *ahd, uint16_t *buf,
u_int start_addr, u_int count);
int		ahd_verify_cksum(struct seeprom_config *sc);
int		ahd_acquire_seeprom(struct ahd_softc *ahd);
void		ahd_release_seeprom(struct ahd_softc *ahd);
typedef enum  ahd_msg_flags;
typedef enum  ahd_msg_type;
typedef enum  msg_loop_stat;
struct ahd_suspend_channel_state ;
struct ahd_suspend_pci_state ;
struct ahd_suspend_state ;
typedef void (*ahd_bus_intr_t)(struct ahd_softc *);
typedef enum  ahd_mode;
#define AHD_MK_MSK(x) (0x01 << (x))
#define AHD_MODE_DFF0_MSK	AHD_MK_MSK(AHD_MODE_DFF0)
#define AHD_MODE_DFF1_MSK	AHD_MK_MSK(AHD_MODE_DFF1)
#define AHD_MODE_CCHAN_MSK	AHD_MK_MSK(AHD_MODE_CCHAN)
#define AHD_MODE_SCSI_MSK	AHD_MK_MSK(AHD_MODE_SCSI)
#define AHD_MODE_CFG_MSK	AHD_MK_MSK(AHD_MODE_CFG)
#define AHD_MODE_UNKNOWN_MSK	AHD_MK_MSK(AHD_MODE_UNKNOWN)
#define AHD_MODE_ANY_MSK (~0)
typedef uint8_t ahd_mode_state;
typedef void ahd_callback_t (void *);
struct ahd_completion
;
struct ahd_softc ;
#define	AHD_PRECOMP_SLEW_INDEX						\
(AHD_ANNEXCOL_PRECOMP_SLEW - AHD_ANNEXCOL_PER_DEV0)
#define	AHD_AMPLITUDE_INDEX						\
(AHD_ANNEXCOL_AMPLITUDE - AHD_ANNEXCOL_PER_DEV0)
#define AHD_SET_SLEWRATE(ahd, new_slew)					\
do  while (0)
#define AHD_SET_PRECOMP(ahd, new_pcomp)					\
do  while (0)
#define AHD_SET_AMPLITUDE(ahd, new_amp)					\
do  while (0)
typedef enum  role_t;
struct ahd_devinfo ;
#define AHD_PCI_IOADDR0	PCIR_BAR(0)
#define AHD_PCI_MEMADDR	PCIR_BAR(1)
#define AHD_PCI_IOADDR1	PCIR_BAR(3)
typedef int (ahd_device_setup_t)(struct ahd_softc *);
struct ahd_pci_identity ;
struct aic7770_identity ;
extern struct aic7770_identity aic7770_ident_table [];
extern const int ahd_num_aic7770_devs;
#define AHD_EISA_SLOT_OFFSET	0xc00
#define AHD_EISA_IOSIZE		0x100
const struct	ahd_pci_identity *ahd_find_pci_device(ahd_dev_softc_t);
int			  ahd_pci_config(struct ahd_softc *,
const struct ahd_pci_identity *);
int	ahd_pci_test_register_access(struct ahd_softc *);
void	ahd_pci_suspend(struct ahd_softc *);
void	ahd_pci_resume(struct ahd_softc *);
void		ahd_qinfifo_requeue_tail(struct ahd_softc *ahd,
struct scb *scb);
struct ahd_softc	*ahd_alloc(void *platform_arg, char *name);
int			 ahd_softc_init(struct ahd_softc *);
void			 ahd_controller_info(struct ahd_softc *ahd, char *buf);
int			 ahd_init(struct ahd_softc *ahd);
int			 ahd_suspend(struct ahd_softc *ahd);
void			 ahd_resume(struct ahd_softc *ahd);
int			 ahd_default_config(struct ahd_softc *ahd);
int			 ahd_parse_vpddata(struct ahd_softc *ahd,
struct vpd_config *vpd);
int			 ahd_parse_cfgdata(struct ahd_softc *ahd,
struct seeprom_config *sc);
void			 ahd_intr_enable(struct ahd_softc *ahd, int enable);
void			 ahd_pause_and_flushwork(struct ahd_softc *ahd);
void			 ahd_set_unit(struct ahd_softc *, int);
void			 ahd_set_name(struct ahd_softc *, char *);
struct scb		*ahd_get_scb(struct ahd_softc *ahd, u_int col_idx);
void			 ahd_free_scb(struct ahd_softc *ahd, struct scb *scb);
void			 ahd_free(struct ahd_softc *ahd);
int			 ahd_reset(struct ahd_softc *ahd, int reinit);
int			 ahd_write_flexport(struct ahd_softc *ahd,
u_int addr, u_int value);
int			 ahd_read_flexport(struct ahd_softc *ahd, u_int addr,
uint8_t *value);
typedef enum  ahd_search_action;
int			ahd_search_qinfifo(struct ahd_softc *ahd, int target,
char channel, int lun, u_int tag,
role_t role, uint32_t status,
ahd_search_action action);
int			ahd_search_disc_list(struct ahd_softc *ahd, int target,
char channel, int lun, u_int tag,
int stop_on_first, int remove,
int save_state);
int			ahd_reset_channel(struct ahd_softc *ahd, char channel,
int initiate_reset);
void			ahd_compile_devinfo(struct ahd_devinfo *devinfo,
u_int our_id, u_int target,
u_int lun, char channel,
role_t role);
void			ahd_find_syncrate(struct ahd_softc *ahd, u_int *period,
u_int *ppr_options, u_int maxsync);
typedef enum  ahd_neg_type;
int			ahd_update_neg_request(struct ahd_softc*,
struct ahd_devinfo*,
struct ahd_tmode_tstate*,
struct ahd_initiator_tinfo*,
ahd_neg_type);
void			ahd_set_width(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
u_int width, u_int type, int paused);
void			ahd_set_syncrate(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
u_int period, u_int offset,
u_int ppr_options,
u_int type, int paused);
typedef enum  ahd_queue_alg;
void		ahd_send_lstate_events(struct ahd_softc *,
struct ahd_tmode_lstate *);
void		ahd_handle_en_lun(struct ahd_softc *ahd,
struct cam_sim *sim, union ccb *ccb);
cam_status	ahd_find_tmode_devs(struct ahd_softc *ahd,
struct cam_sim *sim, union ccb *ccb,
struct ahd_tmode_tstate **tstate,
struct ahd_tmode_lstate **lstate,
int notfound_failure);
#define AHD_TMODE_ENABLE 0
extern uint32_t ahd_debug;
#define AHD_SHOW_MISC		0x00001
#define AHD_SHOW_SENSE		0x00002
#define AHD_SHOW_RECOVERY	0x00004
#define AHD_DUMP_SEEPROM	0x00008
#define AHD_SHOW_TERMCTL	0x00010
#define AHD_SHOW_MEMORY		0x00020
#define AHD_SHOW_MESSAGES	0x00040
#define AHD_SHOW_MODEPTR	0x00080
#define AHD_SHOW_SELTO		0x00100
#define AHD_SHOW_FIFOS		0x00200
#define AHD_SHOW_QFULL		0x00400
#define	AHD_SHOW_DV		0x00800
#define AHD_SHOW_MASKED_ERRORS	0x01000
#define AHD_SHOW_QUEUE		0x02000
#define AHD_SHOW_TQIN		0x04000
#define AHD_SHOW_SG		0x08000
#define AHD_SHOW_INT_COALESCING	0x10000
#define AHD_DEBUG_SEQUENCER	0x20000
void			ahd_print_devinfo(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
void			ahd_dump_card_state(struct ahd_softc *ahd);
int			ahd_print_register(const ahd_reg_parse_entry_t *table,
u_int num_entries,
const char *name,
u_int address,
u_int value,
u_int *cur_column,
u_int wrap_point);
