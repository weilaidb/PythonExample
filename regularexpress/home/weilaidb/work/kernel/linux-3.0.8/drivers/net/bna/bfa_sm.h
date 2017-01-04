#define __BFA_SM_H__
typedef void (*bfa_sm_t)(void *sm, int event);
#define bfa_sm_state_decl(oc, st, otype, etype)		\
static void oc ## _sm_ ## st(otype * fsm, etype event)
#define bfa_sm_set_state(_sm, _state)	((_sm)->sm = (bfa_sm_t)(_state))
#define bfa_sm_send_event(_sm, _event)	((_sm)->sm((_sm), (_event)))
#define bfa_sm_get_state(_sm)		((_sm)->sm)
#define bfa_sm_cmp_state(_sm, _state)	((_sm)->sm == (bfa_sm_t)(_state))
struct bfa_sm_table ;
#define BFA_SM(_sm)	((bfa_sm_t)(_sm))
typedef void (*bfa_fsm_t)(void *fsm, int event);
#define bfa_fsm_state_decl(oc, st, otype, etype)		\
static void oc ## _sm_ ## st(otype * fsm, etype event);	\
static void oc ## _sm_ ## st ## _entry(otype * fsm)
#define bfa_fsm_set_state(_fsm, _state) do  while (0)
#define bfa_fsm_send_event(_fsm, _event)	((_fsm)->fsm((_fsm), (_event)))
#define bfa_fsm_get_state(_fsm)			((_fsm)->fsm)
#define bfa_fsm_cmp_state(_fsm, _state)		\
((_fsm)->fsm == (bfa_fsm_t)(_state))
static inline int
bfa_sm_to_state(const struct bfa_sm_table *smt, bfa_sm_t sm)
