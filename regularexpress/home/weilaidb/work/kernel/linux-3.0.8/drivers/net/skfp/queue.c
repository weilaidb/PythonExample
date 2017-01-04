static const char ID_sccs[] = "@(#)queue.c	2.9 97/08/04 (C) SK " ;
#define PRINTF(a,b,c)
void ev_init(struct s_smc *smc)
void queue_event(struct s_smc *smc, int class, int event)
void timer_event(struct s_smc *smc, u_long token)
void ev_dispatcher(struct s_smc *smc)
u_short smt_online(struct s_smc *smc, int on)
void do_smt_flag(struct s_smc *smc, char *flag, int value)
