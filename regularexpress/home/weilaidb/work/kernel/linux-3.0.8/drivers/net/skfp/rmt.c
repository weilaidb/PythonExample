#define KERNEL
static const char ID_sccs[] = "@(#)rmt.c	2.13 99/07/02 (C) SK " ;
#define AFLAG	0x10
#define GO_STATE(x)	(smc->mib.m[MAC0].fddiMACRMTState = (x)|AFLAG)
#define ACTIONS_DONE()	(smc->mib.m[MAC0].fddiMACRMTState &= ~AFLAG)
#define ACTIONS(x)	(x|AFLAG)
#define RM0_ISOLATED	0
#define RM1_NON_OP	1
#define RM2_RING_OP	2
#define RM3_DETECT	3
#define RM4_NON_OP_DUP	4
#define RM5_RING_OP_DUP	5
#define RM6_DIRECTED	6
#define RM7_TRACE	7
static const char * const rmt_states[] =  ;
static const char * const rmt_events[] =  ;
static void rmt_fsm(struct s_smc *smc, int cmd);
static void start_rmt_timer0(struct s_smc *smc, u_long value, int event);
static void start_rmt_timer1(struct s_smc *smc, u_long value, int event);
static void start_rmt_timer2(struct s_smc *smc, u_long value, int event);
static void stop_rmt_timer0(struct s_smc *smc);
static void stop_rmt_timer1(struct s_smc *smc);
static void stop_rmt_timer2(struct s_smc *smc);
static void rmt_dup_actions(struct s_smc *smc);
static void rmt_reinsert_actions(struct s_smc *smc);
static void rmt_leave_actions(struct s_smc *smc);
static void rmt_new_dup_actions(struct s_smc *smc);
extern void restart_trt_for_dbcn() ;
void rmt_init(struct s_smc *smc)
void rmt(struct s_smc *smc, int event)
static void rmt_fsm(struct s_smc *smc, int cmd)
static void rmt_dup_actions(struct s_smc *smc)
static void rmt_reinsert_actions(struct s_smc *smc)
static void rmt_new_dup_actions(struct s_smc *smc)
static void rmt_leave_actions(struct s_smc *smc)
static void start_rmt_timer0(struct s_smc *smc, u_long value, int event)
static void start_rmt_timer1(struct s_smc *smc, u_long value, int event)
static void start_rmt_timer2(struct s_smc *smc, u_long value, int event)
static void stop_rmt_timer0(struct s_smc *smc)
static void stop_rmt_timer1(struct s_smc *smc)
static void stop_rmt_timer2(struct s_smc *smc)
