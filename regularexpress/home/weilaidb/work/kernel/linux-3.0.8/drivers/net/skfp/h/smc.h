#define _SCMECM_
#if	defined(PCI) && !defined(OSDEF)
#define	OSDEF
#define	SUPERNET_3
#define	TAG_MODE
struct event_queue  ;
#define MAX_EVENT	128
#define MAX_EVENT	64
struct s_queue  ;
struct s_ecm  ;
struct s_rmt  ;
struct s_cfm  ;
struct s_cem  ;
struct s_c_ring  ;
struct mib_path_config ;
#define PCM_DISABLED	0
#define PCM_CONNECTING	1
#define PCM_STANDBY	2
#define PCM_ACTIVE	3
struct s_pcm  ;
struct s_phy  ;
struct s_timer  ;
#define SMT_EVENT_BASE			1
#define SMT_EVENT_MAC_PATH_CHANGE	(SMT_EVENT_BASE+0)
#define SMT_EVENT_MAC_NEIGHBOR_CHANGE	(SMT_EVENT_BASE+1)
#define SMT_EVENT_PORT_PATH_CHANGE	(SMT_EVENT_BASE+2)
#define SMT_EVENT_PORT_CONNECTION	(SMT_EVENT_BASE+3)
#define SMT_IS_CONDITION(x)			((x)>=SMT_COND_BASE)
#define SMT_COND_BASE		(SMT_EVENT_PORT_CONNECTION+1)
#define SMT_COND_SMT_PEER_WRAP		(SMT_COND_BASE+0)
#define SMT_COND_SMT_HOLD		(SMT_COND_BASE+1)
#define SMT_COND_MAC_FRAME_ERROR	(SMT_COND_BASE+2)
#define SMT_COND_MAC_DUP_ADDR		(SMT_COND_BASE+3)
#define SMT_COND_MAC_NOT_COPIED		(SMT_COND_BASE+4)
#define SMT_COND_PORT_EB_ERROR		(SMT_COND_BASE+5)
#define SMT_COND_PORT_LER		(SMT_COND_BASE+6)
#define SR0_WAIT	0
#define SR1_HOLDOFF	1
#define SR2_DISABLED	2
struct s_srf  ;
#define RS_RES15	(1<<15)
#define RS_HARDERROR	(1<<14)
#define RS_SOFTERROR	(1<<13)
#define RS_BEACON	(1<<12)
#define RS_PATHTEST	(1<<11)
#define RS_SELFTEST	(1<<10)
#define RS_RES9		(1<< 9)
#define RS_DISCONNECT	(1<< 8)
#define RS_RES7		(1<< 7)
#define RS_DUPADDR	(1<< 6)
#define RS_NORINGOP	(1<< 5)
#define RS_VERSION	(1<< 4)
#define RS_STUCKBYPASSS	(1<< 3)
#define RS_EVENT	(1<< 2)
#define RS_RINGOPCHANGE	(1<< 1)
#define RS_RES0		(1<< 0)
#define RS_SET(smc,bit) \
ring_status_indication(smc,smc->srf.ring_status |= bit)
#define RS_CLEAR(smc,bit)	\
ring_status_indication(smc,smc->srf.ring_status &= ~bit)
#define RS_CLEAR_EVENT	(0xffff & ~(RS_NORINGOP))
#define AIX_EVENT(smc,opt0,opt1,opt2,opt3)
struct s_srf_evc  ;
#define SMT_MAX_TEST		5
#define SMT_TID_NIF		0
#define SMT_TID_NIF_TEST	1
#define SMT_TID_ECF_UNA		2
#define SMT_TID_ECF_DNA		3
#define SMT_TID_ECF		4
struct smt_values  ;
#define SMT_DAS	0
#define SMT_SAS	1
#define SMT_NAC	2
struct smt_config  ;
struct	smt_debug  ;
extern	struct	smt_debug	debug;
struct s_smc  ;
extern const struct fddi_addr fddi_broadcast;
extern void all_selection_criteria(struct s_smc *smc);
extern void card_stop(struct s_smc *smc);
extern void init_board(struct s_smc *smc, u_char *mac_addr);
extern int init_fplus(struct s_smc *smc);
extern void init_plc(struct s_smc *smc);
extern int init_smt(struct s_smc *smc, u_char * mac_addr);
extern void mac1_irq(struct s_smc *smc, u_short stu, u_short stl);
extern void mac2_irq(struct s_smc *smc, u_short code_s2u, u_short code_s2l);
extern void mac3_irq(struct s_smc *smc, u_short code_s3u, u_short code_s3l);
extern int pcm_status_twisted(struct s_smc *smc);
extern void plc1_irq(struct s_smc *smc);
extern void plc2_irq(struct s_smc *smc);
extern void read_address(struct s_smc *smc, u_char * mac_addr);
extern void timer_irq(struct s_smc *smc);
