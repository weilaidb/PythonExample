#define KERNEL
static const char ID_sccs[] = "@(#)pmf.c	1.37 97/08/04 (C) SK " ;
static int smt_authorize(struct s_smc *smc, struct smt_header *sm);
static int smt_check_set_count(struct s_smc *smc, struct smt_header *sm);
static const struct s_p_tab* smt_get_ptab(u_short para);
static int smt_mib_phys(struct s_smc *smc);
static int smt_set_para(struct s_smc *smc, struct smt_para *pa, int index,
int local, int set);
void smt_add_para(struct s_smc *smc, struct s_pcon *pcon, u_short para,
int index, int local);
static SMbuf *smt_build_pmf_response(struct s_smc *smc, struct smt_header *req,
int set, int local);
static int port_to_mib(struct s_smc *smc, int p);
#define MOFFSS(e)	offsetof(struct fddi_mib, e)
#define MOFFMS(e)	offsetof(struct fddi_mib_m, e)
#define MOFFAS(e)	offsetof(struct fddi_mib_a, e)
#define MOFFPS(e)	offsetof(struct fddi_mib_p, e)
#define AC_G	0x01
#define AC_GR	0x02
#define AC_S	0x04
#define AC_NA	0x08
#define AC_GROUP	0x10
#define MS2BCLK(x)	((x)*12500L)
static const struct s_p_tab  p_tab[] =  ;
void smt_pmf_received_pack(struct s_smc *smc, SMbuf *mb, int local)
static SMbuf *smt_build_pmf_response(struct s_smc *smc, struct smt_header *req,
int set, int local)
static int smt_authorize(struct s_smc *smc, struct smt_header *sm)
static int smt_check_set_count(struct s_smc *smc, struct smt_header *sm)
void smt_add_para(struct s_smc *smc, struct s_pcon *pcon, u_short para,
int index, int local)
static int smt_set_para(struct s_smc *smc, struct smt_para *pa, int index,
int local, int set)
static const struct s_p_tab *smt_get_ptab(u_short para)
static int smt_mib_phys(struct s_smc *smc)
static int port_to_mib(struct s_smc *smc, int p)
void dump_smt(struct s_smc *smc, struct smt_header *sm, char *text)
void dump_hex(char *p, int len)
