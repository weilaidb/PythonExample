#define __BFA_FCPIM_H__
#define BFA_ITNIM_MIN   32
#define BFA_ITNIM_MAX   1024
#define BFA_IOIM_MIN	8
#define BFA_IOIM_MAX	2000
#define BFA_TSKIM_MIN   4
#define BFA_TSKIM_MAX   512
#define BFA_FCPIM_PATHTOV_DEF	(30 * 1000)
#define BFA_FCPIM_PATHTOV_MAX	(90 * 1000)
#define bfa_itnim_ioprofile_update(__itnim, __index)			\
(__itnim->ioprofile.iocomps[__index]++)
#define BFA_IOIM_RETRY_TAG_OFFSET 11
#define BFA_IOIM_IOTAG_MASK 0x07ff
#define BFA_IOIM_RETRY_MAX 7
static inline u32
bfa_ioim_get_index(u32 n)
struct bfa_ioim_s;
struct bfa_tskim_s;
struct bfad_ioim_s;
struct bfad_tskim_s;
typedef void    (*bfa_fcpim_profile_t) (struct bfa_ioim_s *ioim);
struct bfa_fcpim_mod_s ;
struct bfa_ioim_s ;
struct bfa_ioim_sp_s ;
struct bfa_tskim_s ;
struct bfa_itnim_s ;
#define bfa_itnim_is_online(_itnim) ((_itnim)->is_online)
#define BFA_FCPIM_MOD(_hal) (&(_hal)->modules.fcpim_mod)
#define BFA_IOIM_TAG_2_ID(_iotag)	((_iotag) & BFA_IOIM_IOTAG_MASK)
#define BFA_IOIM_FROM_TAG(_fcpim, _iotag)	\
(&fcpim->ioim_arr[(_iotag & BFA_IOIM_IOTAG_MASK)])
#define BFA_TSKIM_FROM_TAG(_fcpim, _tmtag)	\
(&fcpim->tskim_arr[_tmtag & (fcpim->num_tskim_reqs - 1)])
#define bfa_io_profile_start_time(_bfa)	\
(_bfa->modules.fcpim_mod.io_profile_start_time)
#define bfa_fcpim_get_io_profile(_bfa)	\
(_bfa->modules.fcpim_mod.io_profile)
#define bfa_ioim_update_iotag(__ioim) do  while (0)
static inline bfa_boolean_t
bfa_ioim_maxretry_reached(struct bfa_ioim_s *ioim)
void	bfa_ioim_attach(struct bfa_fcpim_mod_s *fcpim,
struct bfa_meminfo_s *minfo);
void	bfa_ioim_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
void	bfa_ioim_good_comp_isr(struct bfa_s *bfa,
struct bfi_msg_s *msg);
void	bfa_ioim_cleanup(struct bfa_ioim_s *ioim);
void	bfa_ioim_cleanup_tm(struct bfa_ioim_s *ioim,
struct bfa_tskim_s *tskim);
void	bfa_ioim_iocdisable(struct bfa_ioim_s *ioim);
void	bfa_ioim_tov(struct bfa_ioim_s *ioim);
void	bfa_tskim_attach(struct bfa_fcpim_mod_s *fcpim,
struct bfa_meminfo_s *minfo);
void	bfa_tskim_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
void	bfa_tskim_iodone(struct bfa_tskim_s *tskim);
void	bfa_tskim_iocdisable(struct bfa_tskim_s *tskim);
void	bfa_tskim_cleanup(struct bfa_tskim_s *tskim);
void	bfa_itnim_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *km_len,
u32 *dm_len);
void	bfa_itnim_attach(struct bfa_fcpim_mod_s *fcpim,
struct bfa_meminfo_s *minfo);
void	bfa_itnim_detach(struct bfa_fcpim_mod_s *fcpim);
void	bfa_itnim_iocdisable(struct bfa_itnim_s *itnim);
void	bfa_itnim_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
void	bfa_itnim_iodone(struct bfa_itnim_s *itnim);
void	bfa_itnim_tskdone(struct bfa_itnim_s *itnim);
bfa_boolean_t   bfa_itnim_hold_io(struct bfa_itnim_s *itnim);
void	bfa_fcpim_path_tov_set(struct bfa_s *bfa, u16 path_tov);
u16	bfa_fcpim_path_tov_get(struct bfa_s *bfa);
u16	bfa_fcpim_qdepth_get(struct bfa_s *bfa);
#define bfa_fcpim_ioredirect_enabled(__bfa)				\
(((struct bfa_fcpim_mod_s *)(BFA_FCPIM_MOD(__bfa)))->ioredirect)
#define bfa_fcpim_get_next_reqq(__bfa, __qid)				\
#define bfa_iocfc_map_msg_to_qid(__msg, __qid)				\
*(__qid) = (u8)((__msg) & (BFI_IOC_MAX_CQS - 1));
struct bfa_itnim_s *bfa_itnim_create(struct bfa_s *bfa,
struct bfa_rport_s *rport, void *itnim);
void bfa_itnim_delete(struct bfa_itnim_s *itnim);
void bfa_itnim_online(struct bfa_itnim_s *itnim, bfa_boolean_t seq_rec);
void bfa_itnim_offline(struct bfa_itnim_s *itnim);
void bfa_itnim_clear_stats(struct bfa_itnim_s *itnim);
bfa_status_t bfa_itnim_get_ioprofile(struct bfa_itnim_s *itnim,
struct bfa_itnim_ioprofile_s *ioprofile);
#define bfa_itnim_get_reqq(__ioim) (((struct bfa_ioim_s *)__ioim)->itnim->reqq)
void	bfa_cb_itnim_online(void *itnim);
void	bfa_cb_itnim_offline(void *itnim);
void	bfa_cb_itnim_tov_begin(void *itnim);
void	bfa_cb_itnim_tov(void *itnim);
void	bfa_cb_itnim_sler(void *itnim);
struct bfa_ioim_s	*bfa_ioim_alloc(struct bfa_s *bfa,
struct bfad_ioim_s *dio,
struct bfa_itnim_s *itnim,
u16 nsgles);
void		bfa_ioim_free(struct bfa_ioim_s *ioim);
void		bfa_ioim_start(struct bfa_ioim_s *ioim);
bfa_status_t	bfa_ioim_abort(struct bfa_ioim_s *ioim);
void		bfa_ioim_delayed_comp(struct bfa_ioim_s *ioim,
bfa_boolean_t iotov);
void bfa_cb_ioim_done(void *bfad, struct bfad_ioim_s *dio,
enum bfi_ioim_status io_status,
u8 scsi_status, int sns_len,
u8 *sns_info, s32 residue);
void bfa_cb_ioim_good_comp(void *bfad, struct bfad_ioim_s *dio);
void bfa_cb_ioim_abort(void *bfad, struct bfad_ioim_s *dio);
struct bfa_tskim_s *bfa_tskim_alloc(struct bfa_s *bfa,
struct bfad_tskim_s *dtsk);
void bfa_tskim_free(struct bfa_tskim_s *tskim);
void bfa_tskim_start(struct bfa_tskim_s *tskim,
struct bfa_itnim_s *itnim, struct scsi_lun lun,
enum fcp_tm_cmnd tm, u8 t_secs);
void bfa_cb_tskim_done(void *bfad, struct bfad_tskim_s *dtsk,
enum bfi_tskim_status tsk_status);
