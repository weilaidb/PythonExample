#define _AIC7XXX_H_
struct ahc_platform_data;
struct scb_platform_data;
struct seeprom_descriptor;
#define TRUE 1
#define FALSE 0
#define ALL_CHANNELS '\0'
#define ALL_TARGETS_MASK 0xFFFF
#define INITIATOR_WILDCARD	(~0)
#define SCSIID_TARGET(ahc, scsiid) \
(((scsiid) & ((((ahc)->features & AHC_TWIN) != 0) ? TWIN_TID : TID)) \
>> TID_SHIFT)
#define SCSIID_OUR_ID(scsiid) \
((scsiid) & OID)
#define SCSIID_CHANNEL(ahc, scsiid) \
((((ahc)->features & AHC_TWIN) != 0) \
? ((((scsiid) & TWIN_CHNLB) != 0) ? 'B' : 'A') \
: 'A')
#define	SCB_IS_SCSIBUS_B(ahc, scb) \
(SCSIID_CHANNEL(ahc, (scb)->hscb->scsiid) == 'B')
#define	SCB_GET_OUR_ID(scb) \
SCSIID_OUR_ID((scb)->hscb->scsiid)
#define	SCB_GET_TARGET(ahc, scb) \
SCSIID_TARGET((ahc), (scb)->hscb->scsiid)
#define	SCB_GET_CHANNEL(ahc, scb) \
SCSIID_CHANNEL(ahc, (scb)->hscb->scsiid)
#define	SCB_GET_LUN(scb) \
((scb)->hscb->lun & LID)
#define SCB_GET_TARGET_OFFSET(ahc, scb)	\
(SCB_GET_TARGET(ahc, scb) + (SCB_IS_SCSIBUS_B(ahc, scb) ? 8 : 0))
#define SCB_GET_TARGET_MASK(ahc, scb) \
(0x01 << (SCB_GET_TARGET_OFFSET(ahc, scb)))
#define SCB_IS_SILENT(scb)					\
((ahc_debug & AHC_SHOW_MASKED_ERRORS) == 0		\
&& (((scb)->flags & SCB_SILENT) != 0))
#define SCB_IS_SILENT(scb)					\
(((scb)->flags & SCB_SILENT) != 0)
#define TCL_TARGET_OFFSET(tcl) \
((((tcl) >> 4) & TID) >> 4)
#define TCL_LUN(tcl) \
(tcl & (AHC_NUM_LUNS - 1))
#define BUILD_TCL(scsiid, lun) \
((lun) | (((scsiid) & TID) << 4))
#undef	AHC_TMODE_ENABLE
#define	AHC_TMODE_ENABLE 0
#define AHC_NUM_TARGETS 16
#define AHC_NUM_LUNS 64
#define AHC_MAXTRANSFER_SIZE	 0x00ffffff
#define AHC_SCB_MAX	255
#define AHC_MAX_QUEUE	253
#define AHC_SCB_MAX_ALLOC (AHC_MAX_QUEUE+1)
#define AHC_TMODE_CMDS	256
#define AHC_BUSRESET_DELAY	25
typedef enum  ahc_chip;
typedef enum  ahc_feature;
typedef enum  ahc_bug;
typedef enum  ahc_flag;
struct status_pkt ;
struct target_data ;
struct hardware_scb ;
struct ahc_dma_seg ;
struct sg_map_node ;
typedef enum  scb_flag;
struct scb ;
struct scb_data ;
struct target_cmd ;
#define AHC_TMODE_EVENT_BUFFER_SIZE 8
struct ahc_tmode_event ;
struct ahc_tmode_lstate ;
struct ahc_tmode_lstate;
#define AHC_TRANS_CUR		0x01
#define AHC_TRANS_ACTIVE	0x03
#define AHC_TRANS_GOAL		0x04
#define AHC_TRANS_USER		0x08
#define AHC_WIDTH_UNKNOWN	0xFF
#define AHC_PERIOD_UNKNOWN	0xFF
#define AHC_OFFSET_UNKNOWN	0xFF
#define AHC_PPR_OPTS_UNKNOWN	0xFF
struct ahc_transinfo ;
struct ahc_initiator_tinfo ;
struct ahc_tmode_tstate ;
struct ahc_syncrate ;
#define	AHC_ASYNC_XFER_PERIOD 0x45
#define	AHC_ULTRA2_XFER_PERIOD 0x0a
#define AHC_SYNCRATE_DT		0
#define AHC_SYNCRATE_ULTRA2	1
#define AHC_SYNCRATE_ULTRA	3
#define AHC_SYNCRATE_FAST	6
#define AHC_SYNCRATE_MAX	AHC_SYNCRATE_DT
#define	AHC_SYNCRATE_MIN	13
struct ahc_phase_table_entry ;
struct seeprom_config ;
typedef enum  ahc_msg_type;
typedef enum  msg_loop_stat;
TAILQ_HEAD(scb_tailq, scb);
struct ahc_aic7770_softc ;
struct ahc_pci_softc ;
union ahc_bus_softc ;
typedef void (*ahc_bus_intr_t)(struct ahc_softc *);
typedef int (*ahc_bus_chip_init_t)(struct ahc_softc *);
typedef int (*ahc_bus_suspend_t)(struct ahc_softc *);
typedef int (*ahc_bus_resume_t)(struct ahc_softc *);
typedef void ahc_callback_t (void *);
struct ahc_softc ;
typedef enum  role_t;
struct ahc_devinfo ;
typedef int (ahc_device_setup_t)(struct ahc_softc *);
struct ahc_pci_identity ;
struct aic7770_identity ;
extern struct aic7770_identity aic7770_ident_table[];
extern const int ahc_num_aic7770_devs;
#define AHC_EISA_SLOT_OFFSET	0xc00
#define AHC_EISA_IOSIZE		0x100
const struct ahc_pci_identity	*ahc_find_pci_device(ahc_dev_softc_t);
int			 ahc_pci_config(struct ahc_softc *,
const struct ahc_pci_identity *);
int			 ahc_pci_test_register_access(struct ahc_softc *);
void			 ahc_pci_resume(struct ahc_softc *ahc);
struct aic7770_identity *aic7770_find_device(uint32_t);
int			 aic7770_config(struct ahc_softc *ahc,
struct aic7770_identity *,
u_int port);
int		ahc_probe_scbs(struct ahc_softc *);
void		ahc_qinfifo_requeue_tail(struct ahc_softc *ahc,
struct scb *scb);
int		ahc_match_scb(struct ahc_softc *ahc, struct scb *scb,
int target, char channel, int lun,
u_int tag, role_t role);
struct ahc_softc	*ahc_alloc(void *platform_arg, char *name);
int			 ahc_softc_init(struct ahc_softc *);
void			 ahc_controller_info(struct ahc_softc *ahc, char *buf);
int			 ahc_chip_init(struct ahc_softc *ahc);
int			 ahc_init(struct ahc_softc *ahc);
void			 ahc_intr_enable(struct ahc_softc *ahc, int enable);
void			 ahc_pause_and_flushwork(struct ahc_softc *ahc);
int			 ahc_suspend(struct ahc_softc *ahc);
int			 ahc_resume(struct ahc_softc *ahc);
void			 ahc_set_unit(struct ahc_softc *, int);
void			 ahc_set_name(struct ahc_softc *, char *);
void			 ahc_free(struct ahc_softc *ahc);
int			 ahc_reset(struct ahc_softc *ahc, int reinit);
typedef enum  ahc_search_action;
int			ahc_search_qinfifo(struct ahc_softc *ahc, int target,
char channel, int lun, u_int tag,
role_t role, uint32_t status,
ahc_search_action action);
int			ahc_search_untagged_queues(struct ahc_softc *ahc,
ahc_io_ctx_t ctx,
int target, char channel,
int lun, uint32_t status,
ahc_search_action action);
int			ahc_search_disc_list(struct ahc_softc *ahc, int target,
char channel, int lun, u_int tag,
int stop_on_first, int remove,
int save_state);
int			ahc_reset_channel(struct ahc_softc *ahc, char channel,
int initiate_reset);
void			ahc_compile_devinfo(struct ahc_devinfo *devinfo,
u_int our_id, u_int target,
u_int lun, char channel,
role_t role);
const struct ahc_syncrate*	ahc_find_syncrate(struct ahc_softc *ahc, u_int *period,
u_int *ppr_options, u_int maxsync);
u_int			ahc_find_period(struct ahc_softc *ahc,
u_int scsirate, u_int maxsync);
typedef enum  ahc_neg_type;
int			ahc_update_neg_request(struct ahc_softc*,
struct ahc_devinfo*,
struct ahc_tmode_tstate*,
struct ahc_initiator_tinfo*,
ahc_neg_type);
void			ahc_set_width(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
u_int width, u_int type, int paused);
void			ahc_set_syncrate(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
const struct ahc_syncrate *syncrate,
u_int period, u_int offset,
u_int ppr_options,
u_int type, int paused);
typedef enum  ahc_queue_alg;
void		ahc_send_lstate_events(struct ahc_softc *,
struct ahc_tmode_lstate *);
void		ahc_handle_en_lun(struct ahc_softc *ahc,
struct cam_sim *sim, union ccb *ccb);
cam_status	ahc_find_tmode_devs(struct ahc_softc *ahc,
struct cam_sim *sim, union ccb *ccb,
struct ahc_tmode_tstate **tstate,
struct ahc_tmode_lstate **lstate,
int notfound_failure);
#define AHC_TMODE_ENABLE 0
extern uint32_t ahc_debug;
#define	AHC_SHOW_MISC		0x0001
#define	AHC_SHOW_SENSE		0x0002
#define AHC_DUMP_SEEPROM	0x0004
#define AHC_SHOW_TERMCTL	0x0008
#define AHC_SHOW_MEMORY		0x0010
#define AHC_SHOW_MESSAGES	0x0020
#define	AHC_SHOW_DV		0x0040
#define AHC_SHOW_SELTO		0x0080
#define AHC_SHOW_QFULL		0x0200
#define AHC_SHOW_QUEUE		0x0400
#define AHC_SHOW_TQIN		0x0800
#define AHC_SHOW_MASKED_ERRORS	0x1000
#define AHC_DEBUG_SEQUENCER	0x2000
void			ahc_print_devinfo(struct ahc_softc *ahc,
struct ahc_devinfo *dev);
void			ahc_dump_card_state(struct ahc_softc *ahc);
int			ahc_print_register(const ahc_reg_parse_entry_t *table,
u_int num_entries,
const char *name,
u_int address,
u_int value,
u_int *cur_column,
u_int wrap_point);
int		ahc_acquire_seeprom(struct ahc_softc *ahc,
struct seeprom_descriptor *sd);
void		ahc_release_seeprom(struct seeprom_descriptor *sd);
