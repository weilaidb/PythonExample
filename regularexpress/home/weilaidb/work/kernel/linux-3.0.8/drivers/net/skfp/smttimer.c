static const char ID_sccs[] = "@(#)smttimer.c	2.4 97/08/04 (C) SK " ;
static void timer_done(struct s_smc *smc, int restart);
void smt_timer_init(struct s_smc *smc)
void smt_timer_stop(struct s_smc *smc, struct smt_timer *timer)
void smt_timer_start(struct s_smc *smc, struct smt_timer *timer, u_long time,
u_long token)
void smt_force_irq(struct s_smc *smc)
void smt_timer_done(struct s_smc *smc)
static void timer_done(struct s_smc *smc, int restart)
