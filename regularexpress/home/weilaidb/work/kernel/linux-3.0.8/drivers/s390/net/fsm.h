#define _FSM_H_
#define FSM_DEBUG         0
#define FSM_TIMER_DEBUG   0
#define FSM_DEBUG_HISTORY 0
#define FSM_HISTORY_SIZE  40
struct fsm_instance_t;
typedef void (*fsm_function_t)(struct fsm_instance_t *, int, void *);
typedef struct  fsm;
#if FSM_DEBUG_HISTORY
typedef struct  fsm_history;
typedef struct fsm_instance_t  fsm_instance;
typedef struct  fsm_node;
typedef struct  fsm_timer;
extern fsm_instance *
init_fsm(char *name, const char **state_names,
const char **event_names,
int nr_states, int nr_events, const fsm_node *tmpl,
int tmpl_len, gfp_t order);
extern void kfree_fsm(fsm_instance *fi);
#if FSM_DEBUG_HISTORY
extern void
fsm_print_history(fsm_instance *fi);
extern void
fsm_record_history(fsm_instance *fi, int state, int event);
static inline int
fsm_event(fsm_instance *fi, int event, void *arg)
static inline void
fsm_newstate(fsm_instance *fi, int newstate)
static inline int
fsm_getstate(fsm_instance *fi)
extern const char *fsm_getstate_str(fsm_instance *fi);
extern void fsm_settimer(fsm_instance *fi, fsm_timer *);
extern void fsm_deltimer(fsm_timer *timer);
extern int fsm_addtimer(fsm_timer *timer, int millisec, int event, void *arg);
extern void fsm_modtimer(fsm_timer *timer, int millisec, int event, void *arg);
