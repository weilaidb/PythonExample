static const char *const ahc_chip_names[] = ;
static const u_int num_chip_names = ARRAY_SIZE(ahc_chip_names);
struct ahc_hard_error_entry ;
static const struct ahc_hard_error_entry ahc_hard_errors[] = ;
static const u_int num_errors = ARRAY_SIZE(ahc_hard_errors);
static const struct ahc_phase_table_entry ahc_phase_table[] =
;
static const u_int num_phases = ARRAY_SIZE(ahc_phase_table) - 1;
static const struct ahc_syncrate ahc_syncrates[] =
;
static void		ahc_force_renegotiation(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo);
static struct ahc_tmode_tstate*
ahc_alloc_tstate(struct ahc_softc *ahc,
u_int scsi_id, char channel);
static void		ahc_free_tstate(struct ahc_softc *ahc,
u_int scsi_id, char channel, int force);
static const struct ahc_syncrate*
ahc_devlimited_syncrate(struct ahc_softc *ahc,
struct ahc_initiator_tinfo *,
u_int *period,
u_int *ppr_options,
role_t role);
static void		ahc_update_pending_scbs(struct ahc_softc *ahc);
static void		ahc_fetch_devinfo(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo);
static void		ahc_scb_devinfo(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
struct scb *scb);
static void		ahc_assert_atn(struct ahc_softc *ahc);
static void		ahc_setup_initiator_msgout(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
struct scb *scb);
static void		ahc_build_transfer_msg(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo);
static void		ahc_construct_sdtr(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
u_int period, u_int offset);
static void		ahc_construct_wdtr(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
u_int bus_width);
static void		ahc_construct_ppr(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
u_int period, u_int offset,
u_int bus_width, u_int ppr_options);
static void		ahc_clear_msg_state(struct ahc_softc *ahc);
static void		ahc_handle_proto_violation(struct ahc_softc *ahc);
static void		ahc_handle_message_phase(struct ahc_softc *ahc);
typedef enum  ahc_msgtype;
static int		ahc_sent_msg(struct ahc_softc *ahc, ahc_msgtype type,
u_int msgval, int full);
static int		ahc_parse_msg(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo);
static int		ahc_handle_msg_reject(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo);
static void		ahc_handle_ign_wide_residue(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo);
static void		ahc_reinitialize_dataptrs(struct ahc_softc *ahc);
static void		ahc_handle_devreset(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
cam_status status, char *message,
int verbose_level);
static void		ahc_setup_target_msgin(struct ahc_softc *ahc,
struct ahc_devinfo *devinfo,
struct scb *scb);
static bus_dmamap_callback_t	ahc_dmamap_cb;
static void		ahc_build_free_scb_list(struct ahc_softc *ahc);
static int		ahc_init_scbdata(struct ahc_softc *ahc);
static void		ahc_fini_scbdata(struct ahc_softc *ahc);
static void		ahc_qinfifo_requeue(struct ahc_softc *ahc,
struct scb *prev_scb,
struct scb *scb);
static int		ahc_qinfifo_count(struct ahc_softc *ahc);
static u_int		ahc_rem_scb_from_disc_list(struct ahc_softc *ahc,
u_int prev, u_int scbptr);
static void		ahc_add_curscb_to_free_list(struct ahc_softc *ahc);
static u_int		ahc_rem_wscb(struct ahc_softc *ahc,
u_int scbpos, u_int prev);
static void		ahc_reset_current_bus(struct ahc_softc *ahc);
static void		ahc_dumpseq(struct ahc_softc *ahc);
static int		ahc_loadseq(struct ahc_softc *ahc);
static int		ahc_check_patch(struct ahc_softc *ahc,
const struct patch **start_patch,
u_int start_instr, u_int *skip_addr);
static void		ahc_download_instr(struct ahc_softc *ahc,
u_int instrptr, uint8_t *dconsts);
static void		ahc_queue_lstate_event(struct ahc_softc *ahc,
struct ahc_tmode_lstate *lstate,
u_int initiator_id,
u_int event_type,
u_int event_arg);
static void		ahc_update_scsiid(struct ahc_softc *ahc,
u_int targid_mask);
static int		ahc_handle_target_cmd(struct ahc_softc *ahc,
struct target_cmd *cmd);
static u_int		ahc_index_busy_tcl(struct ahc_softc *ahc, u_int tcl);
static void		ahc_unbusy_tcl(struct ahc_softc *ahc, u_int tcl);
static void		ahc_busy_tcl(struct ahc_softc *ahc,
u_int tcl, u_int busyid);
static void		ahc_run_untagged_queues(struct ahc_softc *ahc);
static void		ahc_run_untagged_queue(struct ahc_softc *ahc,
struct scb_tailq *queue);
static void		 ahc_alloc_scbs(struct ahc_softc *ahc);
static void		 ahc_shutdown(void *arg);
static void		ahc_clear_intstat(struct ahc_softc *ahc);
static void		ahc_run_qoutfifo(struct ahc_softc *ahc);
static void		ahc_run_tqinfifo(struct ahc_softc *ahc, int paused);
static void		ahc_handle_brkadrint(struct ahc_softc *ahc);
static void		ahc_handle_seqint(struct ahc_softc *ahc, u_int intstat);
static void		ahc_handle_scsiint(struct ahc_softc *ahc,
u_int intstat);
static void		ahc_clear_critical_section(struct ahc_softc *ahc);
static void		ahc_freeze_devq(struct ahc_softc *ahc, struct scb *scb);
static int		ahc_abort_scbs(struct ahc_softc *ahc, int target,
char channel, int lun, u_int tag,
role_t role, uint32_t status);
static void		ahc_calc_residual(struct ahc_softc *ahc,
struct scb *scb);
static inline void	ahc_freeze_untagged_queues(struct ahc_softc *ahc);
static inline void	ahc_release_untagged_queues(struct ahc_softc *ahc);
static inline void
ahc_freeze_untagged_queues(struct ahc_softc *ahc)
static inline void
ahc_release_untagged_queues(struct ahc_softc *ahc)
static void
ahc_pause_bug_fix(struct ahc_softc *ahc)
int
ahc_is_paused(struct ahc_softc *ahc)
void
ahc_pause(struct ahc_softc *ahc)
void
ahc_unpause(struct ahc_softc *ahc)
static struct ahc_dma_seg *
ahc_sg_bus_to_virt(struct scb *scb, uint32_t sg_busaddr)
static uint32_t
ahc_sg_virt_to_bus(struct scb *scb, struct ahc_dma_seg *sg)
static uint32_t
ahc_hscb_busaddr(struct ahc_softc *ahc, u_int index)
static void
ahc_sync_scb(struct ahc_softc *ahc, struct scb *scb, int op)
void
ahc_sync_sglist(struct ahc_softc *ahc, struct scb *scb, int op)
static uint32_t
ahc_targetcmd_offset(struct ahc_softc *ahc, u_int index)
static void
ahc_update_residual(struct ahc_softc *ahc, struct scb *scb)
struct ahc_initiator_tinfo *
ahc_fetch_transinfo(struct ahc_softc *ahc, char channel, u_int our_id,
u_int remote_id, struct ahc_tmode_tstate **tstate)
uint16_t
ahc_inw(struct ahc_softc *ahc, u_int port)
void
ahc_outw(struct ahc_softc *ahc, u_int port, u_int value)
uint32_t
ahc_inl(struct ahc_softc *ahc, u_int port)
void
ahc_outl(struct ahc_softc *ahc, u_int port, uint32_t value)
uint64_t
ahc_inq(struct ahc_softc *ahc, u_int port)
void
ahc_outq(struct ahc_softc *ahc, u_int port, uint64_t value)
struct scb *
ahc_get_scb(struct ahc_softc *ahc)
void
ahc_free_scb(struct ahc_softc *ahc, struct scb *scb)
struct scb *
ahc_lookup_scb(struct ahc_softc *ahc, u_int tag)
static void
ahc_swap_with_next_hscb(struct ahc_softc *ahc, struct scb *scb)
void
ahc_queue_scb(struct ahc_softc *ahc, struct scb *scb)
struct scsi_sense_data *
ahc_get_sense_buf(struct ahc_softc *ahc, struct scb *scb)
static uint32_t
ahc_get_sense_bufaddr(struct ahc_softc *ahc, struct scb *scb)
static void
ahc_sync_qoutfifo(struct ahc_softc *ahc, int op)
static void
ahc_sync_tqinfifo(struct ahc_softc *ahc, int op)
#define AHC_RUN_QOUTFIFO 0x1
#define AHC_RUN_TQINFIFO 0x2
static u_int
ahc_check_cmdcmpltqueues(struct ahc_softc *ahc)
int
ahc_intr(struct ahc_softc *ahc)
static void
ahc_restart(struct ahc_softc *ahc)
static void
ahc_run_qoutfifo(struct ahc_softc *ahc)
static void
ahc_run_untagged_queues(struct ahc_softc *ahc)
static void
ahc_run_untagged_queue(struct ahc_softc *ahc, struct scb_tailq *queue)
static void
ahc_handle_brkadrint(struct ahc_softc *ahc)
static void
ahc_handle_seqint(struct ahc_softc *ahc, u_int intstat)
static void
ahc_handle_scsiint(struct ahc_softc *ahc, u_int intstat)
static void
ahc_force_renegotiation(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
#define AHC_MAX_STEPS 2000
static void
ahc_clear_critical_section(struct ahc_softc *ahc)
static void
ahc_clear_intstat(struct ahc_softc *ahc)
uint32_t ahc_debug = AHC_DEBUG_OPTS;
static struct ahc_tmode_tstate *
ahc_alloc_tstate(struct ahc_softc *ahc, u_int scsi_id, char channel)
static void
ahc_free_tstate(struct ahc_softc *ahc, u_int scsi_id, char channel, int force)
const struct ahc_syncrate *
ahc_devlimited_syncrate(struct ahc_softc *ahc,
struct ahc_initiator_tinfo *tinfo,
u_int *period, u_int *ppr_options, role_t role)
const struct ahc_syncrate *
ahc_find_syncrate(struct ahc_softc *ahc, u_int *period,
u_int *ppr_options, u_int maxsync)
u_int
ahc_find_period(struct ahc_softc *ahc, u_int scsirate, u_int maxsync)
static void
ahc_validate_offset(struct ahc_softc *ahc,
struct ahc_initiator_tinfo *tinfo,
const struct ahc_syncrate *syncrate,
u_int *offset, int wide, role_t role)
static void
ahc_validate_width(struct ahc_softc *ahc, struct ahc_initiator_tinfo *tinfo,
u_int *bus_width, role_t role)
int
ahc_update_neg_request(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
struct ahc_tmode_tstate *tstate,
struct ahc_initiator_tinfo *tinfo, ahc_neg_type neg_type)
void
ahc_set_syncrate(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
const struct ahc_syncrate *syncrate, u_int period,
u_int offset, u_int ppr_options, u_int type, int paused)
void
ahc_set_width(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
u_int width, u_int type, int paused)
static void
ahc_set_tags(struct ahc_softc *ahc, struct scsi_cmnd *cmd,
struct ahc_devinfo *devinfo, ahc_queue_alg alg)
static void
ahc_update_pending_scbs(struct ahc_softc *ahc)
static void
ahc_fetch_devinfo(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
static const struct ahc_phase_table_entry*
ahc_lookup_phase_entry(int phase)
void
ahc_compile_devinfo(struct ahc_devinfo *devinfo, u_int our_id, u_int target,
u_int lun, char channel, role_t role)
void
ahc_print_devinfo(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
static void
ahc_scb_devinfo(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
struct scb *scb)
static void
ahc_assert_atn(struct ahc_softc *ahc)
static void
ahc_setup_initiator_msgout(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
struct scb *scb)
static void
ahc_build_transfer_msg(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
static void
ahc_construct_sdtr(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
u_int period, u_int offset)
static void
ahc_construct_wdtr(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
u_int bus_width)
static void
ahc_construct_ppr(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
u_int period, u_int offset, u_int bus_width,
u_int ppr_options)
static void
ahc_clear_msg_state(struct ahc_softc *ahc)
static void
ahc_handle_proto_violation(struct ahc_softc *ahc)
static void
ahc_handle_message_phase(struct ahc_softc *ahc)
static int
ahc_sent_msg(struct ahc_softc *ahc, ahc_msgtype type, u_int msgval, int full)
static int
ahc_parse_msg(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
static int
ahc_handle_msg_reject(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
static void
ahc_handle_ign_wide_residue(struct ahc_softc *ahc, struct ahc_devinfo *devinfo)
static void
ahc_reinitialize_dataptrs(struct ahc_softc *ahc)
static void
ahc_handle_devreset(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
cam_status status, char *message, int verbose_level)
static void
ahc_setup_target_msgin(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
struct scb *scb)
struct ahc_softc *
ahc_alloc(void *platform_arg, char *name)
int
ahc_softc_init(struct ahc_softc *ahc)
void
ahc_set_unit(struct ahc_softc *ahc, int unit)
void
ahc_set_name(struct ahc_softc *ahc, char *name)
void
ahc_free(struct ahc_softc *ahc)
static void
ahc_shutdown(void *arg)
int
ahc_reset(struct ahc_softc *ahc, int reinit)
int
ahc_probe_scbs(struct ahc_softc *ahc)
static void
ahc_dmamap_cb(void *arg, bus_dma_segment_t *segs, int nseg, int error)
static void
ahc_build_free_scb_list(struct ahc_softc *ahc)
static int
ahc_init_scbdata(struct ahc_softc *ahc)
static void
ahc_fini_scbdata(struct ahc_softc *ahc)
static void
ahc_alloc_scbs(struct ahc_softc *ahc)
void
ahc_controller_info(struct ahc_softc *ahc, char *buf)
int
ahc_chip_init(struct ahc_softc *ahc)
int
ahc_init(struct ahc_softc *ahc)
void
ahc_intr_enable(struct ahc_softc *ahc, int enable)
void
ahc_pause_and_flushwork(struct ahc_softc *ahc)
int
ahc_suspend(struct ahc_softc *ahc)
int
ahc_resume(struct ahc_softc *ahc)
static u_int
ahc_index_busy_tcl(struct ahc_softc *ahc, u_int tcl)
static void
ahc_unbusy_tcl(struct ahc_softc *ahc, u_int tcl)
static void
ahc_busy_tcl(struct ahc_softc *ahc, u_int tcl, u_int scbid)
int
ahc_match_scb(struct ahc_softc *ahc, struct scb *scb, int target,
char channel, int lun, u_int tag, role_t role)
static void
ahc_freeze_devq(struct ahc_softc *ahc, struct scb *scb)
void
ahc_qinfifo_requeue_tail(struct ahc_softc *ahc, struct scb *scb)
static void
ahc_qinfifo_requeue(struct ahc_softc *ahc, struct scb *prev_scb,
struct scb *scb)
static int
ahc_qinfifo_count(struct ahc_softc *ahc)
int
ahc_search_qinfifo(struct ahc_softc *ahc, int target, char channel,
int lun, u_int tag, role_t role, uint32_t status,
ahc_search_action action)
int
ahc_search_untagged_queues(struct ahc_softc *ahc, ahc_io_ctx_t ctx,
int target, char channel, int lun, uint32_t status,
ahc_search_action action)
int
ahc_search_disc_list(struct ahc_softc *ahc, int target, char channel,
int lun, u_int tag, int stop_on_first, int remove,
int save_state)
static u_int
ahc_rem_scb_from_disc_list(struct ahc_softc *ahc, u_int prev, u_int scbptr)
static void
ahc_add_curscb_to_free_list(struct ahc_softc *ahc)
static u_int
ahc_rem_wscb(struct ahc_softc *ahc, u_int scbpos, u_int prev)
static int
ahc_abort_scbs(struct ahc_softc *ahc, int target, char channel,
int lun, u_int tag, role_t role, uint32_t status)
static void
ahc_reset_current_bus(struct ahc_softc *ahc)
int
ahc_reset_channel(struct ahc_softc *ahc, char channel, int initiate_reset)
static void
ahc_calc_residual(struct ahc_softc *ahc, struct scb *scb)
static void
ahc_queue_lstate_event(struct ahc_softc *ahc, struct ahc_tmode_lstate *lstate,
u_int initiator_id, u_int event_type, u_int event_arg)
void
ahc_send_lstate_events(struct ahc_softc *ahc, struct ahc_tmode_lstate *lstate)
void
ahc_dumpseq(struct ahc_softc* ahc)
static int
ahc_loadseq(struct ahc_softc *ahc)
static int
ahc_check_patch(struct ahc_softc *ahc, const struct patch **start_patch,
u_int start_instr, u_int *skip_addr)
static void
ahc_download_instr(struct ahc_softc *ahc, u_int instrptr, uint8_t *dconsts)
int
ahc_print_register(const ahc_reg_parse_entry_t *table, u_int num_entries,
const char *name, u_int address, u_int value,
u_int *cur_column, u_int wrap_point)
void
ahc_dump_card_state(struct ahc_softc *ahc)
cam_status
ahc_find_tmode_devs(struct ahc_softc *ahc, struct cam_sim *sim, union ccb *ccb,
struct ahc_tmode_tstate **tstate,
struct ahc_tmode_lstate **lstate,
int notfound_failure)
void
ahc_handle_en_lun(struct ahc_softc *ahc, struct cam_sim *sim, union ccb *ccb)
static void
ahc_update_scsiid(struct ahc_softc *ahc, u_int targid_mask)
static void
ahc_run_tqinfifo(struct ahc_softc *ahc, int paused)
static int
ahc_handle_target_cmd(struct ahc_softc *ahc, struct target_cmd *cmd)
