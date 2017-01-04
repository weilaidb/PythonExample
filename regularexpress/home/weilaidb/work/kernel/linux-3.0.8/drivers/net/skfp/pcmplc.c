#define KERNEL
static const char ID_sccs[] = "@(#)pcmplc.c	2.55 99/08/05 (C) SK " ;
extern int snmp_fddi_trap(
struct s_smc	* smc, int  type, int  index
);
extern int plc_is_installed(
struct s_smc *smc ,
int p
) ;
#define AFLAG		(0x20)
#define GO_STATE(x)	(mib->fddiPORTPCMState = (x)|AFLAG)
#define ACTIONS_DONE()	(mib->fddiPORTPCMState &= ~AFLAG)
#define ACTIONS(x)	(x|AFLAG)
#define PC0_OFF			0
#define PC1_BREAK		1
#define PC2_TRACE		2
#define PC3_CONNECT		3
#define PC4_NEXT		4
#define PC5_SIGNAL		5
#define PC6_JOIN		6
#define PC7_VERIFY		7
#define PC8_ACTIVE		8
#define PC9_MAINT		9
static const char * const pcm_states[] =   ;
static const char * const pcm_events[] =  ;
#define PLCS_CONTROL_C_U	0
#define PLCS_CONTROL_C_S	(PL_C_SDOFF_ENABLE | PL_C_SDON_ENABLE | \
PL_C_CIPHER_ENABLE)
#define	PLCS_FASSERT_U		0
#define	PLCS_FASSERT_S		0xFd76
#define	PLCS_FDEASSERT_U	0
#define	PLCS_FDEASSERT_S	0
static const u_char plcs_control_c_u[17] = "PLC_CNTRL_C_U=\0\0" ;
static const u_char plcs_control_c_s[17] = "PLC_CNTRL_C_S=\01\02" ;
#define PLCS_CONTROL_C_U (plcs_control_c_u[14] | (plcs_control_c_u[15]<<8))
#define PLCS_CONTROL_C_S (plcs_control_c_s[14] | (plcs_control_c_s[15]<<8))
#define PS_OFF		0
#define PS_BIT3		1
#define PS_BIT4		2
#define PS_BIT7		3
#define PS_LCT		4
#define PS_BIT8		5
#define PS_JOIN		6
#define PS_ACTIVE	7
#define LCT_LEM_MAX	255
#define PLC_MS(m)	((int)((0x10000L-(m*100000L/2048))))
#define SLOW_TL_MIN	PLC_MS(6)
#define SLOW_C_MIN	PLC_MS(10)
static	const struct plt  pltm[] =  ;
static const int plc_imsk_na = PL_PCM_CODE | PL_TRACE_PROP | PL_PCM_BREAK |
PL_PCM_ENABLED | PL_SELF_TEST | PL_EBUF_ERR;
static int plc_imsk_na = PL_PCM_CODE | PL_TRACE_PROP | PL_PCM_BREAK |
PL_PCM_ENABLED | PL_SELF_TEST ;
static const int plc_imsk_act = PL_PCM_CODE | PL_TRACE_PROP | PL_PCM_BREAK |
PL_PCM_ENABLED | PL_SELF_TEST | PL_EBUF_ERR;
static void pcm_fsm(struct s_smc *smc, struct s_phy *phy, int cmd);
static void pc_rcode_actions(struct s_smc *smc, int bit, struct s_phy *phy);
static void pc_tcode_actions(struct s_smc *smc, const int bit, struct s_phy *phy);
static void reset_lem_struct(struct s_phy *phy);
static void plc_init(struct s_smc *smc, int p);
static void sm_ph_lem_start(struct s_smc *smc, int np, int threshold);
static void sm_ph_lem_stop(struct s_smc *smc, int np);
static void sm_ph_linestate(struct s_smc *smc, int phy, int ls);
static void real_init_plc(struct s_smc *smc);
static void start_pcm_timer0(struct s_smc *smc, u_long value, int event,
struct s_phy *phy)
static void stop_pcm_timer0(struct s_smc *smc, struct s_phy *phy)
void pcm_init(struct s_smc *smc)
void init_plc(struct s_smc *smc)
static void real_init_plc(struct s_smc *smc)
static void plc_init(struct s_smc *smc, int p)
static void plc_go_state(struct s_smc *smc, int p, int state)
int sm_pm_get_ls(struct s_smc *smc, int phy)
static int plc_send_bits(struct s_smc *smc, struct s_phy *phy, int len)
void plc_config_mux(struct s_smc *smc, int mux)
void pcm(struct s_smc *smc, const int np, int event)
static void pcm_fsm(struct s_smc *smc, struct s_phy *phy, int cmd)
static void sm_ph_linestate(struct s_smc *smc, int phy, int ls)
static void reset_lem_struct(struct s_phy *phy)
static void lem_evaluate(struct s_smc *smc, struct s_phy *phy)
void sm_lem_evaluate(struct s_smc *smc)
static void lem_check_lct(struct s_smc *smc, struct s_phy *phy)
static void sm_ph_lem_start(struct s_smc *smc, int np, int threshold)
static void sm_ph_lem_stop(struct s_smc *smc, int np)
void sm_pm_ls_latch(struct s_smc *smc, int phy, int on_off)
static void pc_rcode_actions(struct s_smc *smc, int bit, struct s_phy *phy)
static void pc_tcode_actions(struct s_smc *smc, const int bit, struct s_phy *phy)
int pcm_status_twisted(struct s_smc *smc)
void pcm_status_state(struct s_smc *smc, int np, int *type, int *state,
int *remote, int *mac)
int pcm_rooted_station(struct s_smc *smc)
void plc_irq(struct s_smc *smc, int np, unsigned int cmd)
void pcm_get_state(struct s_smc *smc, struct smt_state *state)
int get_pcm_state(struct s_smc *smc, int np)
char *get_linestate(struct s_smc *smc, int np)
char *get_pcmstate(struct s_smc *smc, int np)
void list_phy(struct s_smc *smc)
void pcm_lem_dump(struct s_smc *smc)
