#define OEM_USER_DATA	"SK-NET FDDI V2.0 Userdata"
static const char ID_sccs[] = "@(#)smtdef.c	2.53 99/08/11 (C) SK " ;
#define TTMS(x)	((u_long)(x)*1000L)
#define TTS(x)	((u_long)(x)*1000000L)
#define TTUS(x)	((u_long)(x))
#define DEFAULT_TB_MIN		TTMS(5)
#define DEFAULT_TB_MAX		TTMS(50)
#define DEFAULT_C_MIN		TTUS(1600)
#define DEFAULT_T_OUT		TTMS(100+5)
#define DEFAULT_TL_MIN		TTUS(30)
#define DEFAULT_LC_SHORT	TTMS(50+5)
#define DEFAULT_LC_MEDIUM	TTMS(500+20)
#define DEFAULT_LC_LONG		TTS(5)+TTMS(50)
#define DEFAULT_LC_EXTENDED	TTS(50)+TTMS(50)
#define DEFAULT_T_NEXT_9	TTMS(200+10)
#define DEFAULT_NS_MAX		TTUS(1310)
#define DEFAULT_I_MAX		TTMS(25)
#define DEFAULT_IN_MAX		TTMS(40)
#define DEFAULT_TD_MIN		TTMS(5)
#define DEFAULT_T_NON_OP	TTS(1)
#define DEFAULT_T_STUCK		TTS(8)
#define DEFAULT_T_DIRECT	TTMS(370)
#define DEFAULT_T_JAM		TTMS(370)
#define DEFAULT_T_ANNOUNCE	TTMS(2500)
#define DEFAULT_D_MAX		TTUS(1617)
#define DEFAULT_LEM_ALARM	(8)
#define DEFAULT_LEM_CUTOFF	(7)
#define DEFAULT_TEST_DONE	TTS(1)
#define DEFAULT_CHECK_POLL	TTS(1)
#define DEFAULT_POLL		TTMS(50)
#define DEFAULT_LCT_SHORT	1
#define DEFAULT_LCT_MEDIUM	3
#define DEFAULT_LCT_LONG	5
#define DEFAULT_LCT_EXTEND	50
void smt_reset_defaults(struct s_smc *smc, int level);
static void smt_init_mib(struct s_smc *smc, int level);
static int set_min_max(int maxflag, u_long mib, u_long limit, u_long *oper);
#define MS2BCLK(x)	((x)*12500L)
#define US2BCLK(x)	((x)*1250L)
void smt_reset_defaults(struct s_smc *smc, int level)
static const char man_data[32] =
"xxxSK-NET FDDI SMT 7.3 - V2.8.8" ;
static void smt_init_mib(struct s_smc *smc, int level)
int smt_set_mac_opvalues(struct s_smc *smc)
void smt_fixup_mib(struct s_smc *smc)
static int set_min_max(int maxflag, u_long mib, u_long limit, u_long *oper)
