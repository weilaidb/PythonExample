BFA_TRC_FILE(HAL, FCPIM);
BFA_MODULE(fcpim);
static void bfa_itnim_update_del_itn_stats(struct bfa_itnim_s *itnim);
#define BFA_ITNIM_FROM_TAG(_fcpim, _tag)                                \
(((_fcpim)->itnim_arr + ((_tag) & ((_fcpim)->num_itnims - 1))))
#define bfa_fcpim_additn(__itnim)					\
list_add_tail(&(__itnim)->qe, &(__itnim)->fcpim->itnim_q)
#define bfa_fcpim_delitn(__itnim)	do  while (0)
#define bfa_itnim_online_cb(__itnim) do  while (0)
#define bfa_itnim_offline_cb(__itnim) do  while (0)
#define bfa_itnim_sler_cb(__itnim) do  while (0)
enum bfa_itnim_event ;
#define bfa_ioim_move_to_comp_q(__ioim) do  while (0)
#define bfa_ioim_cb_profile_comp(__fcpim, __ioim) do  while (0)
#define bfa_ioim_cb_profile_start(__fcpim, __ioim) do  while (0)
enum bfa_ioim_event ;
#define bfa_tskim_qcomp(__tskim, __cbfn) do  while (0)
#define bfa_tskim_notify_comp(__tskim) do  while (0)
enum bfa_tskim_event ;
static void     bfa_itnim_iocdisable_cleanup(struct bfa_itnim_s *itnim);
static bfa_boolean_t bfa_itnim_send_fwcreate(struct bfa_itnim_s *itnim);
static bfa_boolean_t bfa_itnim_send_fwdelete(struct bfa_itnim_s *itnim);
static void     bfa_itnim_cleanp_comp(void *itnim_cbarg);
static void     bfa_itnim_cleanup(struct bfa_itnim_s *itnim);
static void     __bfa_cb_itnim_online(void *cbarg, bfa_boolean_t complete);
static void     __bfa_cb_itnim_offline(void *cbarg, bfa_boolean_t complete);
static void     __bfa_cb_itnim_sler(void *cbarg, bfa_boolean_t complete);
static void     bfa_itnim_iotov_online(struct bfa_itnim_s *itnim);
static void     bfa_itnim_iotov_cleanup(struct bfa_itnim_s *itnim);
static void     bfa_itnim_iotov(void *itnim_arg);
static void     bfa_itnim_iotov_start(struct bfa_itnim_s *itnim);
static void     bfa_itnim_iotov_stop(struct bfa_itnim_s *itnim);
static void     bfa_itnim_iotov_delete(struct bfa_itnim_s *itnim);
static void     bfa_itnim_sm_uninit(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_created(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_fwcreate(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_delete_pending(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_online(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_sler(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_cleanup_offline(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_cleanup_delete(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_fwdelete(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_offline(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_iocdisable(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_deleting(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_fwcreate_qfull(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_fwdelete_qfull(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static void     bfa_itnim_sm_deleting_qfull(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event);
static bfa_boolean_t	bfa_ioim_send_ioreq(struct bfa_ioim_s *ioim);
static bfa_boolean_t	bfa_ioim_sgpg_alloc(struct bfa_ioim_s *ioim);
static bfa_boolean_t	bfa_ioim_send_abort(struct bfa_ioim_s *ioim);
static void		bfa_ioim_notify_cleanup(struct bfa_ioim_s *ioim);
static void __bfa_cb_ioim_good_comp(void *cbarg, bfa_boolean_t complete);
static void __bfa_cb_ioim_comp(void *cbarg, bfa_boolean_t complete);
static void __bfa_cb_ioim_abort(void *cbarg, bfa_boolean_t complete);
static void __bfa_cb_ioim_failed(void *cbarg, bfa_boolean_t complete);
static void __bfa_cb_ioim_pathtov(void *cbarg, bfa_boolean_t complete);
static bfa_boolean_t    bfa_ioim_is_abortable(struct bfa_ioim_s *ioim);
static void     bfa_ioim_sm_uninit(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_sgalloc(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_active(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_abort(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_cleanup(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_qfull(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_abort_qfull(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_cleanup_qfull(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_hcb(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_hcb_free(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     bfa_ioim_sm_resfree(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void	bfa_ioim_sm_cmnd_retry(struct bfa_ioim_s *ioim,
enum bfa_ioim_event event);
static void     __bfa_cb_tskim_done(void *cbarg, bfa_boolean_t complete);
static void     __bfa_cb_tskim_failed(void *cbarg, bfa_boolean_t complete);
static bfa_boolean_t bfa_tskim_match_scope(struct bfa_tskim_s *tskim,
struct scsi_lun lun);
static void     bfa_tskim_gather_ios(struct bfa_tskim_s *tskim);
static void     bfa_tskim_cleanp_comp(void *tskim_cbarg);
static void     bfa_tskim_cleanup_ios(struct bfa_tskim_s *tskim);
static bfa_boolean_t bfa_tskim_send(struct bfa_tskim_s *tskim);
static bfa_boolean_t bfa_tskim_send_abort(struct bfa_tskim_s *tskim);
static void     bfa_tskim_iocdisable_ios(struct bfa_tskim_s *tskim);
static void     bfa_tskim_sm_uninit(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event);
static void     bfa_tskim_sm_active(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event);
static void     bfa_tskim_sm_cleanup(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event);
static void     bfa_tskim_sm_iocleanup(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event);
static void     bfa_tskim_sm_qfull(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event);
static void     bfa_tskim_sm_cleanup_qfull(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event);
static void     bfa_tskim_sm_hcb(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event);
static void
bfa_fcpim_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *km_len,
u32 *dm_len)
static void
bfa_fcpim_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
static void
bfa_fcpim_detach(struct bfa_s *bfa)
static void
bfa_fcpim_start(struct bfa_s *bfa)
static void
bfa_fcpim_stop(struct bfa_s *bfa)
static void
bfa_fcpim_iocdisable(struct bfa_s *bfa)
void
bfa_fcpim_path_tov_set(struct bfa_s *bfa, u16 path_tov)
u16
bfa_fcpim_path_tov_get(struct bfa_s *bfa)
u16
bfa_fcpim_qdepth_get(struct bfa_s *bfa)
static void
bfa_itnim_sm_uninit(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_created(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_fwcreate(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_fwcreate_qfull(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event)
static void
bfa_itnim_sm_delete_pending(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event)
static void
bfa_itnim_sm_online(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_sler(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_cleanup_offline(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event)
static void
bfa_itnim_sm_cleanup_delete(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event)
static void
bfa_itnim_sm_fwdelete(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_fwdelete_qfull(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event)
static void
bfa_itnim_sm_offline(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_iocdisable(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event)
static void
bfa_itnim_sm_deleting(struct bfa_itnim_s *itnim, enum bfa_itnim_event event)
static void
bfa_itnim_sm_deleting_qfull(struct bfa_itnim_s *itnim,
enum bfa_itnim_event event)
static void
bfa_itnim_iocdisable_cleanup(struct bfa_itnim_s *itnim)
static void
bfa_itnim_cleanp_comp(void *itnim_cbarg)
static void
bfa_itnim_cleanup(struct bfa_itnim_s *itnim)
static void
__bfa_cb_itnim_online(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_itnim_offline(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_itnim_sler(void *cbarg, bfa_boolean_t complete)
static void
bfa_itnim_qresume(void *cbarg)
void
bfa_itnim_iodone(struct bfa_itnim_s *itnim)
void
bfa_itnim_tskdone(struct bfa_itnim_s *itnim)
void
bfa_itnim_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *km_len,
u32 *dm_len)
void
bfa_itnim_attach(struct bfa_fcpim_mod_s *fcpim, struct bfa_meminfo_s *minfo)
void
bfa_itnim_iocdisable(struct bfa_itnim_s *itnim)
static bfa_boolean_t
bfa_itnim_send_fwcreate(struct bfa_itnim_s *itnim)
static bfa_boolean_t
bfa_itnim_send_fwdelete(struct bfa_itnim_s *itnim)
static void
bfa_itnim_delayed_comp(struct bfa_itnim_s *itnim, bfa_boolean_t iotov)
static void
bfa_itnim_iotov_online(struct bfa_itnim_s *itnim)
static void
bfa_itnim_iotov_cleanup(struct bfa_itnim_s *itnim)
static void
bfa_itnim_iotov(void *itnim_arg)
static void
bfa_itnim_iotov_start(struct bfa_itnim_s *itnim)
static void
bfa_itnim_iotov_stop(struct bfa_itnim_s *itnim)
static void
bfa_itnim_iotov_delete(struct bfa_itnim_s *itnim)
static void
bfa_itnim_update_del_itn_stats(struct bfa_itnim_s *itnim)
void
bfa_itnim_isr(struct bfa_s *bfa, struct bfi_msg_s *m)
struct bfa_itnim_s *
bfa_itnim_create(struct bfa_s *bfa, struct bfa_rport_s *rport, void *ditn)
void
bfa_itnim_delete(struct bfa_itnim_s *itnim)
void
bfa_itnim_online(struct bfa_itnim_s *itnim, bfa_boolean_t seq_rec)
void
bfa_itnim_offline(struct bfa_itnim_s *itnim)
bfa_boolean_t
bfa_itnim_hold_io(struct bfa_itnim_s *itnim)
void
bfa_itnim_clear_stats(struct bfa_itnim_s *itnim)
static void
bfa_ioim_sm_uninit(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_sgalloc(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_active(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_cmnd_retry(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_abort(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_cleanup(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_qfull(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_abort_qfull(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_cleanup_qfull(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_hcb(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_hcb_free(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
bfa_ioim_sm_resfree(struct bfa_ioim_s *ioim, enum bfa_ioim_event event)
static void
__bfa_cb_ioim_good_comp(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_ioim_comp(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_ioim_failed(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_ioim_pathtov(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_ioim_abort(void *cbarg, bfa_boolean_t complete)
static void
bfa_ioim_sgpg_alloced(void *cbarg)
static	bfa_boolean_t
bfa_ioim_send_ioreq(struct bfa_ioim_s *ioim)
static bfa_boolean_t
bfa_ioim_sgpg_alloc(struct bfa_ioim_s *ioim)
static	bfa_boolean_t
bfa_ioim_send_abort(struct bfa_ioim_s *ioim)
static void
bfa_ioim_qresume(void *cbarg)
static void
bfa_ioim_notify_cleanup(struct bfa_ioim_s *ioim)
static bfa_boolean_t
bfa_ioim_is_abortable(struct bfa_ioim_s *ioim)
void
bfa_ioim_delayed_comp(struct bfa_ioim_s *ioim, bfa_boolean_t iotov)
void
bfa_ioim_attach(struct bfa_fcpim_mod_s *fcpim, struct bfa_meminfo_s *minfo)
void
bfa_ioim_isr(struct bfa_s *bfa, struct bfi_msg_s *m)
void
bfa_ioim_good_comp_isr(struct bfa_s *bfa, struct bfi_msg_s *m)
void
bfa_ioim_cleanup(struct bfa_ioim_s *ioim)
void
bfa_ioim_cleanup_tm(struct bfa_ioim_s *ioim, struct bfa_tskim_s *tskim)
void
bfa_ioim_iocdisable(struct bfa_ioim_s *ioim)
void
bfa_ioim_tov(struct bfa_ioim_s *ioim)
struct bfa_ioim_s *
bfa_ioim_alloc(struct bfa_s *bfa, struct bfad_ioim_s *dio,
struct bfa_itnim_s *itnim, u16 nsges)
void
bfa_ioim_free(struct bfa_ioim_s *ioim)
void
bfa_ioim_start(struct bfa_ioim_s *ioim)
bfa_status_t
bfa_ioim_abort(struct bfa_ioim_s *ioim)
static void
bfa_tskim_sm_uninit(struct bfa_tskim_s *tskim, enum bfa_tskim_event event)
static void
bfa_tskim_sm_active(struct bfa_tskim_s *tskim, enum bfa_tskim_event event)
static void
bfa_tskim_sm_cleanup(struct bfa_tskim_s *tskim, enum bfa_tskim_event event)
static void
bfa_tskim_sm_iocleanup(struct bfa_tskim_s *tskim, enum bfa_tskim_event event)
static void
bfa_tskim_sm_qfull(struct bfa_tskim_s *tskim, enum bfa_tskim_event event)
static void
bfa_tskim_sm_cleanup_qfull(struct bfa_tskim_s *tskim,
enum bfa_tskim_event event)
static void
bfa_tskim_sm_hcb(struct bfa_tskim_s *tskim, enum bfa_tskim_event event)
static void
__bfa_cb_tskim_done(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_tskim_failed(void *cbarg, bfa_boolean_t complete)
static bfa_boolean_t
bfa_tskim_match_scope(struct bfa_tskim_s *tskim, struct scsi_lun lun)
static void
bfa_tskim_gather_ios(struct bfa_tskim_s *tskim)
static void
bfa_tskim_cleanp_comp(void *tskim_cbarg)
static void
bfa_tskim_cleanup_ios(struct bfa_tskim_s *tskim)
static bfa_boolean_t
bfa_tskim_send(struct bfa_tskim_s *tskim)
static bfa_boolean_t
bfa_tskim_send_abort(struct bfa_tskim_s *tskim)
static void
bfa_tskim_qresume(void *cbarg)
static void
bfa_tskim_iocdisable_ios(struct bfa_tskim_s *tskim)
void
bfa_tskim_iodone(struct bfa_tskim_s *tskim)
void
bfa_tskim_iocdisable(struct bfa_tskim_s *tskim)
void
bfa_tskim_cleanup(struct bfa_tskim_s *tskim)
void
bfa_tskim_attach(struct bfa_fcpim_mod_s *fcpim, struct bfa_meminfo_s *minfo)
void
bfa_tskim_isr(struct bfa_s *bfa, struct bfi_msg_s *m)
struct bfa_tskim_s *
bfa_tskim_alloc(struct bfa_s *bfa, struct bfad_tskim_s *dtsk)
void
bfa_tskim_free(struct bfa_tskim_s *tskim)
void
bfa_tskim_start(struct bfa_tskim_s *tskim, struct bfa_itnim_s *itnim,
struct scsi_lun lun,
enum fcp_tm_cmnd tm_cmnd, u8 tsecs)
