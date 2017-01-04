#define __BFA_CS_H__
#define BFA_TRC_MAX	(4 * 1024)
#define BFA_TRC_TS(_trcm)                               \
()
#define BFA_TRC_TS(_trcm)	((_trcm)->ticks++)
struct bfa_trc_s ;
struct bfa_trc_mod_s ;
enum ;
#define BFA_TRC_MOD_SH	10
#define BFA_TRC_MOD(__mod)	((BFA_TRC_ ## __mod) << BFA_TRC_MOD_SH)
#define BFA_TRC_FILE(__mod, __submod)					\
static int __trc_fileno = ((BFA_TRC_ ## __mod ## _ ## __submod) | \
BFA_TRC_MOD(__mod))
#define bfa_trc32(_trcp, _data)	\
__bfa_trc((_trcp)->trcmod, __trc_fileno, __LINE__, (u32)_data)
#define bfa_trc(_trcp, _data)	\
__bfa_trc((_trcp)->trcmod, __trc_fileno, __LINE__, (u64)_data)
static inline void
bfa_trc_init(struct bfa_trc_mod_s *trcm)
static inline void
bfa_trc_stop(struct bfa_trc_mod_s *trcm)
static inline void
__bfa_trc(struct bfa_trc_mod_s *trcm, int fileno, int line, u64 data)
static inline void
__bfa_trc32(struct bfa_trc_mod_s *trcm, int fileno, int line, u32 data)
#define bfa_sm_fault(__mod, __event)	do  while (0)
#define bfa_q_first(_q) ((void *)(((struct list_head *) (_q))->next))
#define bfa_q_next(_qe) (((struct list_head *) (_qe))->next)
#define bfa_q_prev(_qe) (((struct list_head *) (_qe))->prev)
#define bfa_q_qe_init(_qe)
#define bfa_q_deq(_q, _qe)
#define bfa_q_deq_tail(_q, _qe)
static inline int
bfa_q_is_on_q_func(struct list_head *q, struct list_head *qe)
#define bfa_q_is_on_q(_q, _qe)      \
bfa_q_is_on_q_func(_q, (struct list_head *)(_qe))
typedef void (*bfa_sm_t)(void *sm, int event);
#define bfa_sm_state_decl(oc, st, otype, etype)		\
static void oc ## _sm_ ## st(otype * fsm, etype event)
#define bfa_sm_set_state(_sm, _state)	((_sm)->sm = (bfa_sm_t)(_state))
#define bfa_sm_send_event(_sm, _event)	((_sm)->sm((_sm), (_event)))
#define bfa_sm_get_state(_sm)		((_sm)->sm)
#define bfa_sm_cmp_state(_sm, _state)	((_sm)->sm == (bfa_sm_t)(_state))
struct bfa_sm_table_s ;
#define BFA_SM(_sm)	((bfa_sm_t)(_sm))
typedef void (*bfa_fsm_t)(void *fsm, int event);
#define bfa_fsm_state_decl(oc, st, otype, etype)		\
static void oc ## _sm_ ## st(otype * fsm, etype event);      \
static void oc ## _sm_ ## st ## _entry(otype * fsm)
#define bfa_fsm_set_state(_fsm, _state) do  while (0)
#define bfa_fsm_send_event(_fsm, _event)	((_fsm)->fsm((_fsm), (_event)))
#define bfa_fsm_get_state(_fsm)			((_fsm)->fsm)
#define bfa_fsm_cmp_state(_fsm, _state)		\
((_fsm)->fsm == (bfa_fsm_t)(_state))
static inline int
bfa_sm_to_state(struct bfa_sm_table_s *smt, bfa_sm_t sm)
typedef void (*bfa_wc_resume_t) (void *cbarg);
struct bfa_wc_s ;
static inline void
bfa_wc_up(struct bfa_wc_s *wc)
static inline void
bfa_wc_down(struct bfa_wc_s *wc)
static inline void
bfa_wc_init(struct bfa_wc_s *wc, bfa_wc_resume_t wc_resume, void *wc_cbarg)
static inline void
bfa_wc_wait(struct bfa_wc_s *wc)
static inline void
wwn2str(char *wwn_str, u64 wwn)
static inline void
fcid2str(char *fcid_str, u32 fcid)
#define bfa_swap_3b(_x)				\
((((_x) & 0xff) << 16) |		\
((_x) & 0x00ff00) |			\
(((_x) & 0xff0000) >> 16))
#define bfa_hton3b(_x)  bfa_swap_3b(_x)
#define bfa_hton3b(_x)  (_x)
#define bfa_ntoh3b(_x)  bfa_hton3b(_x)
