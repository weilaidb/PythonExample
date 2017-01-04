static const char ID_sccs[] = "@(#)smtinit.c	1.15 97/05/06 (C) SK " ;
void init_fddi_driver(struct s_smc *smc, u_char *mac_addr);
#if defined(DEBUG) && !defined(DEBUG_BRD)
struct smt_debug debug;
#define OEMID(smc,i)	oem_id[i]
extern u_char	oem_id[] ;
#define OEMID(smc,i)	smc->hw.oem_id->oi_mark[i]
extern struct s_oem_ids	oem_ids[] ;
static void set_oem_spec_val(struct s_smc *smc)
int init_smt(struct s_smc *smc, u_char *mac_addr)
