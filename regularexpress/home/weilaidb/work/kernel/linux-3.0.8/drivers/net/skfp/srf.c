#define KERNEL
static const char ID_sccs[] = "@(#)srf.c	1.18 97/08/04 (C) SK " ;
static void clear_all_rep(struct s_smc *smc);
static void clear_reported(struct s_smc *smc);
static void smt_send_srf(struct s_smc *smc);
static struct s_srf_evc *smt_get_evc(struct s_smc *smc, int code, int index);
#define MAX_EVCS	ARRAY_SIZE(smc->evcs)
struct evc_init   ;
static const struct evc_init evc_inits[] =  ;
#define MAX_INIT_EVC	ARRAY_SIZE(evc_inits)
void smt_init_evc(struct s_smc *smc)
static struct s_srf_evc *smt_get_evc(struct s_smc *smc, int code, int index)
#define THRESHOLD_2	(2*TICKS_PER_SECOND)
#define THRESHOLD_32	(32*TICKS_PER_SECOND)
static const char * const srf_names[] =  ;
void smt_srf_event(struct s_smc *smc, int code, int index, int cond)
static void clear_all_rep(struct s_smc *smc)
static void clear_reported(struct s_smc *smc)
static void smt_send_srf(struct s_smc *smc)
