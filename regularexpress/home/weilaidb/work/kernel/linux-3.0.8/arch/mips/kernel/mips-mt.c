int vpelimit;
static int __init maxvpes(char *str)
__setup("maxvpes=", maxvpes);
int tclimit;
static int __init maxtcs(char *str)
__setup("maxtcs=", maxtcs);
void mips_mt_regdump(unsigned long mvpctl)
static int mt_opt_norps;
static int mt_opt_rpsctl = -1;
static int mt_opt_nblsu = -1;
static int mt_opt_forceconfig7;
static int mt_opt_config7 = -1;
static int __init rps_disable(char *s)
__setup("norps", rps_disable);
static int __init rpsctl_set(char *str)
__setup("rpsctl=", rpsctl_set);
static int __init nblsu_set(char *str)
__setup("nblsu=", nblsu_set);
static int __init config7_set(char *str)
__setup("config7=", config7_set);
int mt_protiflush;
int mt_protdflush;
int mt_n_iflushes = 1;
int mt_n_dflushes = 1;
static int __init set_protiflush(char *s)
__setup("protiflush", set_protiflush);
static int __init set_protdflush(char *s)
__setup("protdflush", set_protdflush);
static int __init niflush(char *s)
__setup("niflush=", niflush);
static int __init ndflush(char *s)
__setup("ndflush=", ndflush);
static unsigned int itc_base;
static int __init set_itc_base(char *str)
__setup("itcbase=", set_itc_base);
void mips_mt_set_cpuoptions(void)
void mt_cflush_lockdown(void)
void mt_cflush_release(void)
struct class *mt_class;
static int __init mt_init(void)
subsys_initcall(mt_init);
