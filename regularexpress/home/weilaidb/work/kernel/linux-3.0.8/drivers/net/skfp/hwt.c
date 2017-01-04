static const char ID_sccs[] = "@(#)hwt.c	1.13 97/04/23 (C) SK " ;
#define	HWT_MAX	(65000)
void hwt_start(struct s_smc *smc, u_long time)
void hwt_stop(struct s_smc *smc)
void hwt_init(struct s_smc *smc)
void hwt_restart(struct s_smc *smc)
u_long hwt_read(struct s_smc *smc)
u_long hwt_quick_read(struct s_smc *smc)
void hwt_wait_time(struct s_smc *smc, u_long start, long int duration)
