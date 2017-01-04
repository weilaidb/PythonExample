#define KERNEL
static const char ID_sccs[] = "@(#)ecm.c	2.7 99/08/05 (C) SK " ;
#define AFLAG	0x10
#define GO_STATE(x)	(smc->mib.fddiSMTECMState = (x)|AFLAG)
#define ACTIONS_DONE()	(smc->mib.fddiSMTECMState &= ~AFLAG)
#define ACTIONS(x)	(x|AFLAG)
#define EC0_OUT		0
#define EC1_IN		1
#define EC2_TRACE	2
#define EC3_LEAVE	3
#define EC4_PATH_TEST	4
#define EC5_INSERT	5
#define EC6_CHECK	6
#define EC7_DEINSERT	7
static const char * const ecm_states[] =  ;
static const char * const ecm_events[] =  ;
static void ecm_fsm(struct s_smc *smc, int cmd);
static void start_ecm_timer(struct s_smc *smc, u_long value, int event);
static void stop_ecm_timer(struct s_smc *smc);
static void prop_actions(struct s_smc *smc);
void ecm_init(struct s_smc *smc)
void ecm(struct s_smc *smc, int event)
static void ecm_fsm(struct s_smc *smc, int cmd)
static void prop_actions(struct s_smc *smc)
static void prop_actions(struct s_smc *smc)
static void start_ecm_timer(struct s_smc *smc, u_long value, int event)
static void stop_ecm_timer(struct s_smc *smc)
