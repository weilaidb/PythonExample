static const char ID_sccs[] = "@(#)fplustm.c	1.32 99/02/23 (C) SK " ;
#define UNUSED(x)	(x) = (x)
#define UNUSED(x)
#define FM_ADDRX	 (FM_ADDET|FM_EXGPA0|FM_EXGPA1)
#define MS2BCLK(x)	((x)*12500L)
#define US2BCLK(x)	((x)*1250L)
static void build_claim_beacon(struct s_smc *smc, u_long t_request);
static int init_mac(struct s_smc *smc, int all);
static void rtm_init(struct s_smc *smc);
static void smt_split_up_fifo(struct s_smc *smc);
#if (!defined(NO_SMT_PANIC) || defined(DEBUG))
static	char write_mdr_warning [] = "E350 write_mdr() FM_SNPPND is set\n";
static	char cam_warning [] = "E_SMT_004: CAM still busy\n";
#define	DUMMY_READ()	smc->hw.mc_dummy = (u_short) inp(ADDR(B0_RAP))
#define	CHECK_NPP()
#define	CHECK_CAM()
const struct fddi_addr fddi_broadcast = ;
static const struct fddi_addr null_addr = ;
static const struct fddi_addr dbeacon_multi = ;
static const u_short my_said = 0xffff ;
static const u_short my_sagp = 0xffff ;
#define MA	smc->hw.fddi_canon_addr
#define MA	smc->hw.fddi_home_addr
static const int mac_imsk1u = FM_STXABRS | FM_STXABRA0 | FM_SXMTABT ;
static const int mac_imsk1l = FM_SQLCKS | FM_SQLCKA0 | FM_SPCEPDS | FM_SPCEPDA0|
FM_STBURS | FM_STBURA0 ;
static const int mac_imsk2u = FM_SERRSF | FM_SNFSLD | FM_SRCVOVR | FM_SRBFL |
FM_SMYCLM ;
static const int mac_imsk2l = FM_STRTEXR | FM_SDUPCLM | FM_SFRMCTR |
FM_SERRCTR | FM_SLSTCTR |
FM_STRTEXP | FM_SMULTDA | FM_SRNGOP ;
static const int mac_imsk3u = FM_SRCVOVR2 | FM_SRBFL2 ;
static const int mac_imsk3l = FM_SRPERRQ2 | FM_SRPERRQ1 ;
static const int mac_beacon_imsk2u = FM_SOTRBEC | FM_SMYBEC | FM_SBEC |
FM_SLOCLM | FM_SHICLM | FM_SMYCLM | FM_SCLM ;
static u_long mac_get_tneg(struct s_smc *smc)
void mac_update_counter(struct s_smc *smc)
static void write_mdr(struct s_smc *smc, u_long val)
static void init_ram(struct s_smc *smc)
static void set_recvptr(struct s_smc *smc)
static void set_txptr(struct s_smc *smc)
static void init_rbc(struct s_smc *smc)
static void init_rx(struct s_smc *smc)
void set_formac_tsync(struct s_smc *smc, long sync_bw)
static void init_tx(struct s_smc *smc)
static void mac_counter_init(struct s_smc *smc)
static	void set_formac_addr(struct s_smc *smc)
static void set_int(char *p, int l)
static void copy_tx_mac(struct s_smc *smc, u_long td, struct fddi_mac *mac,
unsigned off, int len)
static void directed_beacon(struct s_smc *smc)
static void build_claim_beacon(struct s_smc *smc, u_long t_request)
static void formac_rcv_restart(struct s_smc *smc)
void formac_tx_restart(struct s_smc *smc)
static void enable_formac(struct s_smc *smc)
static void disable_formac(struct s_smc *smc)
static void mac_ring_up(struct s_smc *smc, int up)
void mac2_irq(struct s_smc *smc, u_short code_s2u, u_short code_s2l)
void mac3_irq(struct s_smc *smc, u_short code_s3u, u_short code_s3l)
static void formac_offline(struct s_smc *smc)
static void formac_online(struct s_smc *smc)
int init_fplus(struct s_smc *smc)
static int init_mac(struct s_smc *smc, int all)
void config_mux(struct s_smc *smc, int mux)
void sm_mac_check_beacon_claim(struct s_smc *smc)
void sm_ma_control(struct s_smc *smc, int mode)
int sm_mac_get_tx_state(struct s_smc *smc)
static struct s_fpmc* mac_get_mc_table(struct s_smc *smc,
struct fddi_addr *user,
struct fddi_addr *own,
int del, int can)
void mac_clear_multicast(struct s_smc *smc)
int mac_add_multicast(struct s_smc *smc, struct fddi_addr *addr, int can)
#define RX_MODE_PROM		0x1
#define RX_MODE_ALL_MULTI	0x2
void mac_update_multicast(struct s_smc *smc)
void mac_set_rx_mode(struct s_smc *smc, int mode)
void rtm_irq(struct s_smc *smc)
static void rtm_init(struct s_smc *smc)
void rtm_set_timer(struct s_smc *smc)
static void smt_split_up_fifo(struct s_smc *smc)
void formac_reinit_tx(struct s_smc *smc)
