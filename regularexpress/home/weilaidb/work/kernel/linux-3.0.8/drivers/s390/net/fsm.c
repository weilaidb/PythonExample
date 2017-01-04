MODULE_AUTHOR("(C) 2000 IBM Corp. by Fritz Elfert (felfert@millenux.com)");
MODULE_DESCRIPTION("Finite state machine helper functions");
MODULE_LICENSE("GPL");
fsm_instance *
init_fsm(char *name, const char **state_names, const char **event_names, int nr_states,
int nr_events, const fsm_node *tmpl, int tmpl_len, gfp_t order)
void
kfree_fsm(fsm_instance *this)
#if FSM_DEBUG_HISTORY
void
fsm_print_history(fsm_instance *fi)
void
fsm_record_history(fsm_instance *fi, int state, int event)
const char *
fsm_getstate_str(fsm_instance *fi)
static void
fsm_expire_timer(fsm_timer *this)
void
fsm_settimer(fsm_instance *fi, fsm_timer *this)
void
fsm_deltimer(fsm_timer *this)
int
fsm_addtimer(fsm_timer *this, int millisec, int event, void *arg)
void
fsm_modtimer(fsm_timer *this, int millisec, int event, void *arg)
EXPORT_SYMBOL(init_fsm);
EXPORT_SYMBOL(kfree_fsm);
EXPORT_SYMBOL(fsm_settimer);
EXPORT_SYMBOL(fsm_deltimer);
EXPORT_SYMBOL(fsm_addtimer);
EXPORT_SYMBOL(fsm_modtimer);
EXPORT_SYMBOL(fsm_getstate_str);
#if FSM_DEBUG_HISTORY
EXPORT_SYMBOL(fsm_print_history);
EXPORT_SYMBOL(fsm_record_history);
