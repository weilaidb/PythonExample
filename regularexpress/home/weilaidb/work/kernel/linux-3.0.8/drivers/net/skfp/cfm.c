#define KERNEL
static const char ID_sccs[] = "@(#)cfm.c	2.18 98/10/06 (C) SK " ;
#define AFLAG	0x10
#define GO_STATE(x)	(smc->mib.fddiSMTCF_State = (x)|AFLAG)
#define ACTIONS_DONE()	(smc->mib.fddiSMTCF_State &= ~AFLAG)
#define ACTIONS(x)	(x|AFLAG)
static const char * const cfm_states[] =  ;
static const char * const cfm_events[] =  ;
static const unsigned char cf_to_ptype[] =  ;
#define	CEM_PST_DOWN	0
#define	CEM_PST_UP	1
#define	CEM_PST_HOLD	2
static void cfm_fsm(struct s_smc *smc, int cmd);
void cfm_init(struct s_smc *smc)
#define THRU_ENABLED(smc)	(smc->y[PA].pc_mode != PM_TREE && \
smc->y[PB].pc_mode != PM_TREE)
static void selection_criteria (struct s_smc *smc, struct s_phy *phy)
void all_selection_criteria(struct s_smc *smc)
static void cem_priv_state(struct s_smc *smc, int event)
void cfm(struct s_smc *smc, int event)
static void cfm_fsm(struct s_smc *smc, int cmd)
int cfm_get_mac_input(struct s_smc *smc)
int cfm_get_mac_output(struct s_smc *smc)
static char path_iso[] =  ;
static char path_wrap_a[] =  ;
static char path_wrap_b[] =  ;
static char path_thru[] =  ;
static char path_wrap_s[] =  ;
static char path_iso_s[] =  ;
int cem_build_path(struct s_smc *smc, char *to, int path_index)
