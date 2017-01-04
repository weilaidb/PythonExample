static const char *const ahd_chip_names[] =
;
static const u_int num_chip_names = ARRAY_SIZE(ahd_chip_names);
struct ahd_hard_error_entry ;
static const struct ahd_hard_error_entry ahd_hard_errors[] = ;
static const u_int num_errors = ARRAY_SIZE(ahd_hard_errors);
static const struct ahd_phase_table_entry ahd_phase_table[] =
;
static const u_int num_phases = ARRAY_SIZE(ahd_phase_table) - 1;
static void		ahd_handle_transmission_error(struct ahd_softc *ahd);
static void		ahd_handle_lqiphase_error(struct ahd_softc *ahd,
u_int lqistat1);
static int		ahd_handle_pkt_busfree(struct ahd_softc *ahd,
u_int busfreetime);
static int		ahd_handle_nonpkt_busfree(struct ahd_softc *ahd);
static void		ahd_handle_proto_violation(struct ahd_softc *ahd);
static void		ahd_force_renegotiation(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
static struct ahd_tmode_tstate*
ahd_alloc_tstate(struct ahd_softc *ahd,
u_int scsi_id, char channel);
static void		ahd_free_tstate(struct ahd_softc *ahd,
u_int scsi_id, char channel, int force);
static void		ahd_devlimited_syncrate(struct ahd_softc *ahd,
struct ahd_initiator_tinfo *,
u_int *period,
u_int *ppr_options,
role_t role);
static void		ahd_update_neg_table(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
struct ahd_transinfo *tinfo);
static void		ahd_update_pending_scbs(struct ahd_softc *ahd);
static void		ahd_fetch_devinfo(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
static void		ahd_scb_devinfo(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
struct scb *scb);
static void		ahd_setup_initiator_msgout(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
struct scb *scb);
static void		ahd_build_transfer_msg(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
static void		ahd_construct_sdtr(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
u_int period, u_int offset);
static void		ahd_construct_wdtr(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
u_int bus_width);
static void		ahd_construct_ppr(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
u_int period, u_int offset,
u_int bus_width, u_int ppr_options);
static void		ahd_clear_msg_state(struct ahd_softc *ahd);
static void		ahd_handle_message_phase(struct ahd_softc *ahd);
typedef enum  ahd_msgtype;
static int		ahd_sent_msg(struct ahd_softc *ahd, ahd_msgtype type,
u_int msgval, int full);
static int		ahd_parse_msg(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
static int		ahd_handle_msg_reject(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
static void		ahd_handle_ign_wide_residue(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo);
static void		ahd_reinitialize_dataptrs(struct ahd_softc *ahd);
static void		ahd_handle_devreset(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
u_int lun, cam_status status,
char *message, int verbose_level);
static void		ahd_setup_target_msgin(struct ahd_softc *ahd,
struct ahd_devinfo *devinfo,
struct scb *scb);
static u_int		ahd_sglist_size(struct ahd_softc *ahd);
static u_int		ahd_sglist_allocsize(struct ahd_softc *ahd);
static bus_dmamap_callback_t
ahd_dmamap_cb;
static void		ahd_initialize_hscbs(struct ahd_softc *ahd);
static int		ahd_init_scbdata(struct ahd_softc *ahd);
static void		ahd_fini_scbdata(struct ahd_softc *ahd);
static void		ahd_setup_iocell_workaround(struct ahd_softc *ahd);
static void		ahd_iocell_first_selection(struct ahd_softc *ahd);
static void		ahd_add_col_list(struct ahd_softc *ahd,
struct scb *scb, u_int col_idx);
static void		ahd_rem_col_list(struct ahd_softc *ahd,
struct scb *scb);
static void		ahd_chip_init(struct ahd_softc *ahd);
static void		ahd_qinfifo_requeue(struct ahd_softc *ahd,
struct scb *prev_scb,
struct scb *scb);
static int		ahd_qinfifo_count(struct ahd_softc *ahd);
static int		ahd_search_scb_list(struct ahd_softc *ahd, int target,
char channel, int lun, u_int tag,
role_t role, uint32_t status,
ahd_search_action action,
u_int *list_head, u_int *list_tail,
u_int tid);
static void		ahd_stitch_tid_list(struct ahd_softc *ahd,
u_int tid_prev, u_int tid_cur,
u_int tid_next);
static void		ahd_add_scb_to_free_list(struct ahd_softc *ahd,
u_int scbid);
static u_int		ahd_rem_wscb(struct ahd_softc *ahd, u_int scbid,
u_int prev, u_int next, u_int tid);
static void		ahd_reset_current_bus(struct ahd_softc *ahd);
static ahd_callback_t	ahd_stat_timer;
static void		ahd_dumpseq(struct ahd_softc *ahd);
static void		ahd_loadseq(struct ahd_softc *ahd);
static int		ahd_check_patch(struct ahd_softc *ahd,
const struct patch **start_patch,
u_int start_instr, u_int *skip_addr);
static u_int		ahd_resolve_seqaddr(struct ahd_softc *ahd,
u_int address);
static void		ahd_download_instr(struct ahd_softc *ahd,
u_int instrptr, uint8_t *dconsts);
static int		ahd_probe_stack_size(struct ahd_softc *ahd);
static int		ahd_scb_active_in_fifo(struct ahd_softc *ahd,
struct scb *scb);
static void		ahd_run_data_fifo(struct ahd_softc *ahd,
struct scb *scb);
static void		ahd_queue_lstate_event(struct ahd_softc *ahd,
struct ahd_tmode_lstate *lstate,
u_int initiator_id,
u_int event_type,
u_int event_arg);
static void		ahd_update_scsiid(struct ahd_softc *ahd,
u_int targid_mask);
static int		ahd_handle_target_cmd(struct ahd_softc *ahd,
struct target_cmd *cmd);
static int		ahd_abort_scbs(struct ahd_softc *ahd, int target,
char channel, int lun, u_int tag,
role_t role, uint32_t status);
static void		ahd_alloc_scbs(struct ahd_softc *ahd);
static void		ahd_busy_tcl(struct ahd_softc *ahd, u_int tcl,
u_int scbid);
static void		ahd_calc_residual(struct ahd_softc *ahd,
struct scb *scb);
static void		ahd_clear_critical_section(struct ahd_softc *ahd);
static void		ahd_clear_intstat(struct ahd_softc *ahd);
static void		ahd_enable_coalescing(struct ahd_softc *ahd,
int enable);
static u_int		ahd_find_busy_tcl(struct ahd_softc *ahd, u_int tcl);
static void		ahd_freeze_devq(struct ahd_softc *ahd,
struct scb *scb);
static void		ahd_handle_scb_status(struct ahd_softc *ahd,
struct scb *scb);
static const struct ahd_phase_table_entry* ahd_lookup_phase_entry(int phase);
static void		ahd_shutdown(void *arg);
static void		ahd_update_coalescing_values(struct ahd_softc *ahd,
u_int timer,
u_int maxcmds,
u_int mincmds);
static int		ahd_verify_vpd_cksum(struct vpd_config *vpd);
static int		ahd_wait_seeprom(struct ahd_softc *ahd);
static int		ahd_match_scb(struct ahd_softc *ahd, struct scb *scb,
int target, char channel, int lun,
u_int tag, role_t role);
static void		ahd_reset_cmds_pending(struct ahd_softc *ahd);
static void		ahd_run_qoutfifo(struct ahd_softc *ahd);
static void		ahd_run_tqinfifo(struct ahd_softc *ahd, int paused);
static void		ahd_handle_hwerrint(struct ahd_softc *ahd);
static void		ahd_handle_seqint(struct ahd_softc *ahd, u_int intstat);
static void		ahd_handle_scsiint(struct ahd_softc *ahd,
u_int intstat);
void
ahd_set_modes(struct ahd_softc *ahd, ahd_mode src, ahd_mode dst)
static void
ahd_update_modes(struct ahd_softc *ahd)
static void
ahd_assert_modes(struct ahd_softc *ahd, ahd_mode srcmode,
ahd_mode dstmode, const char *file, int line)
#define AHD_ASSERT_MODES(ahd, source, dest) \
ahd_assert_modes(ahd, source, dest, __FILE__, __LINE__);
ahd_mode_state
ahd_save_modes(struct ahd_softc *ahd)
void
ahd_restore_modes(struct ahd_softc *ahd, ahd_mode_state state)
int
ahd_is_paused(struct ahd_softc *ahd)
void
ahd_pause(struct ahd_softc *ahd)
void
ahd_unpause(struct ahd_softc *ahd)
void *
ahd_sg_setup(struct ahd_softc *ahd, struct scb *scb,
void *sgptr, dma_addr_t addr, bus_size_t len, int last)
static void
ahd_setup_scb_common(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_setup_data_scb(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_setup_noxfer_scb(struct ahd_softc *ahd, struct scb *scb)
static void *
ahd_sg_bus_to_virt(struct ahd_softc *ahd, struct scb *scb, uint32_t sg_busaddr)
static uint32_t
ahd_sg_virt_to_bus(struct ahd_softc *ahd, struct scb *scb, void *sg)
static void
ahd_sync_scb(struct ahd_softc *ahd, struct scb *scb, int op)
void
ahd_sync_sglist(struct ahd_softc *ahd, struct scb *scb, int op)
static void
ahd_sync_sense(struct ahd_softc *ahd, struct scb *scb, int op)
static uint32_t
ahd_targetcmd_offset(struct ahd_softc *ahd, u_int index)
struct ahd_initiator_tinfo *
ahd_fetch_transinfo(struct ahd_softc *ahd, char channel, u_int our_id,
u_int remote_id, struct ahd_tmode_tstate **tstate)
uint16_t
ahd_inw(struct ahd_softc *ahd, u_int port)
void
ahd_outw(struct ahd_softc *ahd, u_int port, u_int value)
uint32_t
ahd_inl(struct ahd_softc *ahd, u_int port)
void
ahd_outl(struct ahd_softc *ahd, u_int port, uint32_t value)
uint64_t
ahd_inq(struct ahd_softc *ahd, u_int port)
void
ahd_outq(struct ahd_softc *ahd, u_int port, uint64_t value)
u_int
ahd_get_scbptr(struct ahd_softc *ahd)
void
ahd_set_scbptr(struct ahd_softc *ahd, u_int scbptr)
static void
ahd_set_hnscb_qoff(struct ahd_softc *ahd, u_int value)
static void
ahd_set_hescb_qoff(struct ahd_softc *ahd, u_int value)
static u_int
ahd_get_snscb_qoff(struct ahd_softc *ahd)
static void
ahd_set_snscb_qoff(struct ahd_softc *ahd, u_int value)
static void
ahd_set_sescb_qoff(struct ahd_softc *ahd, u_int value)
static void
ahd_set_sdscb_qoff(struct ahd_softc *ahd, u_int value)
u_int
ahd_inb_scbram(struct ahd_softc *ahd, u_int offset)
u_int
ahd_inw_scbram(struct ahd_softc *ahd, u_int offset)
static uint32_t
ahd_inl_scbram(struct ahd_softc *ahd, u_int offset)
static uint64_t
ahd_inq_scbram(struct ahd_softc *ahd, u_int offset)
struct scb *
ahd_lookup_scb(struct ahd_softc *ahd, u_int tag)
static void
ahd_swap_with_next_hscb(struct ahd_softc *ahd, struct scb *scb)
void
ahd_queue_scb(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_sync_qoutfifo(struct ahd_softc *ahd, int op)
static void
ahd_sync_tqinfifo(struct ahd_softc *ahd, int op)
#define AHD_RUN_QOUTFIFO 0x1
#define AHD_RUN_TQINFIFO 0x2
static u_int
ahd_check_cmdcmpltqueues(struct ahd_softc *ahd)
int
ahd_intr(struct ahd_softc *ahd)
static inline void
ahd_assert_atn(struct ahd_softc *ahd)
static int
ahd_currently_packetized(struct ahd_softc *ahd)
static inline int
ahd_set_active_fifo(struct ahd_softc *ahd)
static inline void
ahd_unbusy_tcl(struct ahd_softc *ahd, u_int tcl)
static inline void
ahd_update_residual(struct ahd_softc *ahd, struct scb *scb)
static inline void
ahd_complete_scb(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_restart(struct ahd_softc *ahd)
static void
ahd_clear_fifo(struct ahd_softc *ahd, u_int fifo)
static void
ahd_flush_qoutfifo(struct ahd_softc *ahd)
static int
ahd_scb_active_in_fifo(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_run_data_fifo(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_run_qoutfifo(struct ahd_softc *ahd)
static void
ahd_handle_hwerrint(struct ahd_softc *ahd)
static void
ahd_dump_sglist(struct scb *scb)
static void
ahd_handle_seqint(struct ahd_softc *ahd, u_int intstat)
static void
ahd_handle_scsiint(struct ahd_softc *ahd, u_int intstat)
static void
ahd_handle_transmission_error(struct ahd_softc *ahd)
static void
ahd_handle_lqiphase_error(struct ahd_softc *ahd, u_int lqistat1)
static int
ahd_handle_pkt_busfree(struct ahd_softc *ahd, u_int busfreetime)
static int
ahd_handle_nonpkt_busfree(struct ahd_softc *ahd)
static void
ahd_handle_proto_violation(struct ahd_softc *ahd)
static void
ahd_force_renegotiation(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
#define AHD_MAX_STEPS 2000
static void
ahd_clear_critical_section(struct ahd_softc *ahd)
static void
ahd_clear_intstat(struct ahd_softc *ahd)
uint32_t ahd_debug = AHD_DEBUG_OPTS;
static struct ahd_tmode_tstate *
ahd_alloc_tstate(struct ahd_softc *ahd, u_int scsi_id, char channel)
static void
ahd_free_tstate(struct ahd_softc *ahd, u_int scsi_id, char channel, int force)
static void
ahd_devlimited_syncrate(struct ahd_softc *ahd,
struct ahd_initiator_tinfo *tinfo,
u_int *period, u_int *ppr_options, role_t role)
void
ahd_find_syncrate(struct ahd_softc *ahd, u_int *period,
u_int *ppr_options, u_int maxsync)
static void
ahd_validate_offset(struct ahd_softc *ahd,
struct ahd_initiator_tinfo *tinfo,
u_int period, u_int *offset, int wide,
role_t role)
static void
ahd_validate_width(struct ahd_softc *ahd, struct ahd_initiator_tinfo *tinfo,
u_int *bus_width, role_t role)
int
ahd_update_neg_request(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
struct ahd_tmode_tstate *tstate,
struct ahd_initiator_tinfo *tinfo, ahd_neg_type neg_type)
void
ahd_set_syncrate(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
u_int period, u_int offset, u_int ppr_options,
u_int type, int paused)
void
ahd_set_width(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
u_int width, u_int type, int paused)
static void
ahd_set_tags(struct ahd_softc *ahd, struct scsi_cmnd *cmd,
struct ahd_devinfo *devinfo, ahd_queue_alg alg)
static void
ahd_update_neg_table(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
struct ahd_transinfo *tinfo)
static void
ahd_update_pending_scbs(struct ahd_softc *ahd)
static void
ahd_fetch_devinfo(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
void
ahd_print_devinfo(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
static const struct ahd_phase_table_entry*
ahd_lookup_phase_entry(int phase)
void
ahd_compile_devinfo(struct ahd_devinfo *devinfo, u_int our_id, u_int target,
u_int lun, char channel, role_t role)
static void
ahd_scb_devinfo(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
struct scb *scb)
static void
ahd_setup_initiator_msgout(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
struct scb *scb)
static void
ahd_build_transfer_msg(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
static void
ahd_construct_sdtr(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
u_int period, u_int offset)
static void
ahd_construct_wdtr(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
u_int bus_width)
static void
ahd_construct_ppr(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
u_int period, u_int offset, u_int bus_width,
u_int ppr_options)
static void
ahd_clear_msg_state(struct ahd_softc *ahd)
static void
ahd_handle_message_phase(struct ahd_softc *ahd)
static int
ahd_sent_msg(struct ahd_softc *ahd, ahd_msgtype type, u_int msgval, int full)
static int
ahd_parse_msg(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
static int
ahd_handle_msg_reject(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
static void
ahd_handle_ign_wide_residue(struct ahd_softc *ahd, struct ahd_devinfo *devinfo)
static void
ahd_reinitialize_dataptrs(struct ahd_softc *ahd)
static void
ahd_handle_devreset(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
u_int lun, cam_status status, char *message,
int verbose_level)
static void
ahd_setup_target_msgin(struct ahd_softc *ahd, struct ahd_devinfo *devinfo,
struct scb *scb)
static u_int
ahd_sglist_size(struct ahd_softc *ahd)
static u_int
ahd_sglist_allocsize(struct ahd_softc *ahd)
struct ahd_softc *
ahd_alloc(void *platform_arg, char *name)
int
ahd_softc_init(struct ahd_softc *ahd)
void
ahd_set_unit(struct ahd_softc *ahd, int unit)
void
ahd_set_name(struct ahd_softc *ahd, char *name)
void
ahd_free(struct ahd_softc *ahd)
static void
ahd_shutdown(void *arg)
int
ahd_reset(struct ahd_softc *ahd, int reinit)
static int
ahd_probe_scbs(struct ahd_softc *ahd)
static void
ahd_dmamap_cb(void *arg, bus_dma_segment_t *segs, int nseg, int error)
static void
ahd_initialize_hscbs(struct ahd_softc *ahd)
static int
ahd_init_scbdata(struct ahd_softc *ahd)
static struct scb *
ahd_find_scb_by_tag(struct ahd_softc *ahd, u_int tag)
static void
ahd_fini_scbdata(struct ahd_softc *ahd)
static void
ahd_setup_iocell_workaround(struct ahd_softc *ahd)
static void
ahd_iocell_first_selection(struct ahd_softc *ahd)
static void
ahd_add_col_list(struct ahd_softc *ahd, struct scb *scb, u_int col_idx)
static void
ahd_rem_col_list(struct ahd_softc *ahd, struct scb *scb)
struct scb *
ahd_get_scb(struct ahd_softc *ahd, u_int col_idx)
void
ahd_free_scb(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_alloc_scbs(struct ahd_softc *ahd)
void
ahd_controller_info(struct ahd_softc *ahd, char *buf)
static const char *channel_strings[] = ;
static const char *termstat_strings[] = ;
#define ahd_timer_init init_timer
#define ahd_timer_stop del_timer_sync
typedef void ahd_linux_callback_t (u_long);
static void
ahd_timer_reset(ahd_timer_t *timer, int usec, ahd_callback_t *func, void *arg)
int
ahd_init(struct ahd_softc *ahd)
static void
ahd_chip_init(struct ahd_softc *ahd)
int
ahd_default_config(struct ahd_softc *ahd)
int
ahd_parse_cfgdata(struct ahd_softc *ahd, struct seeprom_config *sc)
int
ahd_parse_vpddata(struct ahd_softc *ahd, struct vpd_config *vpd)
void
ahd_intr_enable(struct ahd_softc *ahd, int enable)
static void
ahd_update_coalescing_values(struct ahd_softc *ahd, u_int timer, u_int maxcmds,
u_int mincmds)
static void
ahd_enable_coalescing(struct ahd_softc *ahd, int enable)
void
ahd_pause_and_flushwork(struct ahd_softc *ahd)
int
ahd_suspend(struct ahd_softc *ahd)
void
ahd_resume(struct ahd_softc *ahd)
static inline u_int
ahd_index_busy_tcl(struct ahd_softc *ahd, u_int *saved_scbid, u_int tcl)
static u_int
ahd_find_busy_tcl(struct ahd_softc *ahd, u_int tcl)
static void
ahd_busy_tcl(struct ahd_softc *ahd, u_int tcl, u_int scbid)
static int
ahd_match_scb(struct ahd_softc *ahd, struct scb *scb, int target,
char channel, int lun, u_int tag, role_t role)
static void
ahd_freeze_devq(struct ahd_softc *ahd, struct scb *scb)
void
ahd_qinfifo_requeue_tail(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_qinfifo_requeue(struct ahd_softc *ahd, struct scb *prev_scb,
struct scb *scb)
static int
ahd_qinfifo_count(struct ahd_softc *ahd)
static void
ahd_reset_cmds_pending(struct ahd_softc *ahd)
static void
ahd_done_with_status(struct ahd_softc *ahd, struct scb *scb, uint32_t status)
int
ahd_search_qinfifo(struct ahd_softc *ahd, int target, char channel,
int lun, u_int tag, role_t role, uint32_t status,
ahd_search_action action)
static int
ahd_search_scb_list(struct ahd_softc *ahd, int target, char channel,
int lun, u_int tag, role_t role, uint32_t status,
ahd_search_action action, u_int *list_head,
u_int *list_tail, u_int tid)
static void
ahd_stitch_tid_list(struct ahd_softc *ahd, u_int tid_prev,
u_int tid_cur, u_int tid_next)
static u_int
ahd_rem_wscb(struct ahd_softc *ahd, u_int scbid,
u_int prev, u_int next, u_int tid)
static void
ahd_add_scb_to_free_list(struct ahd_softc *ahd, u_int scbid)
static int
ahd_abort_scbs(struct ahd_softc *ahd, int target, char channel,
int lun, u_int tag, role_t role, uint32_t status)
static void
ahd_reset_current_bus(struct ahd_softc *ahd)
int
ahd_reset_channel(struct ahd_softc *ahd, char channel, int initiate_reset)
static void
ahd_stat_timer(void *arg)
static void
ahd_handle_scsi_status(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_handle_scb_status(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_calc_residual(struct ahd_softc *ahd, struct scb *scb)
static void
ahd_queue_lstate_event(struct ahd_softc *ahd, struct ahd_tmode_lstate *lstate,
u_int initiator_id, u_int event_type, u_int event_arg)
void
ahd_send_lstate_events(struct ahd_softc *ahd, struct ahd_tmode_lstate *lstate)
void
ahd_dumpseq(struct ahd_softc* ahd)
static void
ahd_loadseq(struct ahd_softc *ahd)
static int
ahd_check_patch(struct ahd_softc *ahd, const struct patch **start_patch,
u_int start_instr, u_int *skip_addr)
static u_int
ahd_resolve_seqaddr(struct ahd_softc *ahd, u_int address)
static void
ahd_download_instr(struct ahd_softc *ahd, u_int instrptr, uint8_t *dconsts)
static int
ahd_probe_stack_size(struct ahd_softc *ahd)
int
ahd_print_register(const ahd_reg_parse_entry_t *table, u_int num_entries,
const char *name, u_int address, u_int value,
u_int *cur_column, u_int wrap_point)
void
ahd_dump_card_state(struct ahd_softc *ahd)
int
ahd_read_seeprom(struct ahd_softc *ahd, uint16_t *buf,
u_int start_addr, u_int count, int bytestream)
int
ahd_write_seeprom(struct ahd_softc *ahd, uint16_t *buf,
u_int start_addr, u_int count)
static int
ahd_wait_seeprom(struct ahd_softc *ahd)
static int
ahd_verify_vpd_cksum(struct vpd_config *vpd)
int
ahd_verify_cksum(struct seeprom_config *sc)
int
ahd_acquire_seeprom(struct ahd_softc *ahd)
void
ahd_release_seeprom(struct ahd_softc *ahd)
static int
ahd_wait_flexport(struct ahd_softc *ahd)
int
ahd_write_flexport(struct ahd_softc *ahd, u_int addr, u_int value)
int
ahd_read_flexport(struct ahd_softc *ahd, u_int addr, uint8_t *value)
cam_status
ahd_find_tmode_devs(struct ahd_softc *ahd, struct cam_sim *sim, union ccb *ccb,
struct ahd_tmode_tstate **tstate,
struct ahd_tmode_lstate **lstate,
int notfound_failure)
void
ahd_handle_en_lun(struct ahd_softc *ahd, struct cam_sim *sim, union ccb *ccb)
static void
ahd_update_scsiid(struct ahd_softc *ahd, u_int targid_mask)
static void
ahd_run_tqinfifo(struct ahd_softc *ahd, int paused)
static int
ahd_handle_target_cmd(struct ahd_softc *ahd, struct target_cmd *cmd)
