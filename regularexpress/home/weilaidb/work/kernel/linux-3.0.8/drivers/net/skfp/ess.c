static const char ID_sccs[] = "@(#)ess.c	1.10 96/02/23 (C) SK" ;
#define LINT_USE(x)
#define LINT_USE(x)	(x)=(x)
#define MS2BCLK(x)	((x)*12500L)
static const u_short plist_raf_alc_res[] =  ;
static const u_short plist_raf_chg_req[] =  ;
static const struct fddi_addr smt_sba_da =  ;
static const struct fddi_addr null_addr =  ;
static void ess_send_response(struct s_smc *smc, struct smt_header *sm,
int sba_cmd);
static void ess_config_fifo(struct s_smc *smc);
static void ess_send_alc_req(struct s_smc *smc);
static void ess_send_frame(struct s_smc *smc, SMbuf *mb);
void ess_timer_poll(struct s_smc *smc);
void ess_para_change(struct s_smc *smc);
int ess_raf_received_pack(struct s_smc *smc, SMbuf *mb, struct smt_header *sm,
int fs);
static int process_bw_alloc(struct s_smc *smc, long int payload, long int overhead);
int ess_raf_received_pack(struct s_smc *smc, SMbuf *mb, struct smt_header *sm,
int fs)
static int process_bw_alloc(struct s_smc *smc, long int payload, long int overhead)
static void ess_send_response(struct s_smc *smc, struct smt_header *sm,
int sba_cmd)
void ess_timer_poll(struct s_smc *smc)
static void ess_send_alc_req(struct s_smc *smc)
static void ess_send_frame(struct s_smc *smc, SMbuf *mb)
void ess_para_change(struct s_smc *smc)
static void ess_config_fifo(struct s_smc *smc)
