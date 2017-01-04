#define KERNEL
static const char ID_sccs[] = "@(#)smt.c	2.43 98/11/23 (C) SK " ;
#define m_fc(mb)	((mb)->sm_data[0])
#define SMT_TID_MAGIC	0x1f0a7b3c
static const char *const smt_type_name[] =  ;
static const char *const smt_class_name[] =  ;
#define LAST_CLASS	(SMT_PMF_SET)
static const struct fddi_addr SMT_Unknown =  ;
static int smt_swap_short(u_short s);
static int mac_index(struct s_smc *smc, int mac);
static int phy_index(struct s_smc *smc, int phy);
static int mac_con_resource_index(struct s_smc *smc, int mac);
static int phy_con_resource_index(struct s_smc *smc, int phy);
static void smt_send_rdf(struct s_smc *smc, SMbuf *rej, int fc, int reason,
int local);
static void smt_send_nif(struct s_smc *smc, const struct fddi_addr *dest,
int fc, u_long tid, int type, int local);
static void smt_send_ecf(struct s_smc *smc, struct fddi_addr *dest, int fc,
u_long tid, int type, int len);
static void smt_echo_test(struct s_smc *smc, int dna);
static void smt_send_sif_config(struct s_smc *smc, struct fddi_addr *dest,
u_long tid, int local);
static void smt_send_sif_operation(struct s_smc *smc, struct fddi_addr *dest,
u_long tid, int local);
static void smt_string_swap(char *data, const char *format, int len);
static void smt_add_frame_len(SMbuf *mb, int len);
static void smt_fill_una(struct s_smc *smc, struct smt_p_una *una);
static void smt_fill_sde(struct s_smc *smc, struct smt_p_sde *sde);
static void smt_fill_state(struct s_smc *smc, struct smt_p_state *state);
static void smt_fill_timestamp(struct s_smc *smc, struct smt_p_timestamp *ts);
static void smt_fill_policy(struct s_smc *smc, struct smt_p_policy *policy);
static void smt_fill_latency(struct s_smc *smc, struct smt_p_latency *latency);
static void smt_fill_neighbor(struct s_smc *smc, struct smt_p_neighbor *neighbor);
static int smt_fill_path(struct s_smc *smc, struct smt_p_path *path);
static void smt_fill_mac_status(struct s_smc *smc, struct smt_p_mac_status *st);
static void smt_fill_lem(struct s_smc *smc, struct smt_p_lem *lem, int phy);
static void smt_fill_version(struct s_smc *smc, struct smt_p_version *vers);
static void smt_fill_fsc(struct s_smc *smc, struct smt_p_fsc *fsc);
static void smt_fill_mac_counter(struct s_smc *smc, struct smt_p_mac_counter *mc);
static void smt_fill_mac_fnc(struct s_smc *smc, struct smt_p_mac_fnc *fnc);
static void smt_fill_manufacturer(struct s_smc *smc,
struct smp_p_manufacturer *man);
static void smt_fill_user(struct s_smc *smc, struct smp_p_user *user);
static void smt_fill_setcount(struct s_smc *smc, struct smt_p_setcount *setcount);
static void smt_fill_echo(struct s_smc *smc, struct smt_p_echo *echo, u_long seed,
int len);
static void smt_clear_una_dna(struct s_smc *smc);
static void smt_clear_old_una_dna(struct s_smc *smc);
static int entity_to_index(void);
static void update_dac(struct s_smc *smc, int report);
static int div_ratio(u_long upper, u_long lower);
static void	hwm_conv_can(struct s_smc *smc, char *data, int len);
#define		hwm_conv_can(smc,data,len)
static inline int is_my_addr(const struct s_smc *smc,
const struct fddi_addr *addr)
static inline int is_broadcast(const struct fddi_addr *addr)
static inline int is_individual(const struct fddi_addr *addr)
static inline int is_equal(const struct fddi_addr *addr1,
const struct fddi_addr *addr2)
static const u_short plist_nif[] =  ;
void smt_agent_init(struct s_smc *smc)
void smt_agent_task(struct s_smc *smc)
void smt_emulate_token_ct(struct s_smc *smc, int mac_index)
void smt_event(struct s_smc *smc, int event)
static int div_ratio(u_long upper, u_long lower)
void smt_received_pack(struct s_smc *smc, SMbuf *mb, int fs)
static void update_dac(struct s_smc *smc, int report)
void smt_send_frame(struct s_smc *smc, SMbuf *mb, int fc, int local)
static void smt_send_rdf(struct s_smc *smc, SMbuf *rej, int fc, int reason,
int local)
static void smt_send_nif(struct s_smc *smc, const struct fddi_addr *dest,
int fc, u_long tid, int type, int local)
static void smt_send_nif_request(struct s_smc *smc, struct fddi_addr *dest)
static void smt_send_ecf_request(struct s_smc *smc, struct fddi_addr *dest,
int len)
static void smt_echo_test(struct s_smc *smc, int dna)
static void smt_send_ecf(struct s_smc *smc, struct fddi_addr *dest, int fc,
u_long tid, int type, int len)
static void smt_send_sif_config(struct s_smc *smc, struct fddi_addr *dest,
u_long tid, int local)
static void smt_send_sif_operation(struct s_smc *smc, struct fddi_addr *dest,
u_long tid, int local)
SMbuf *smt_build_frame(struct s_smc *smc, int class, int type,
int length)
static void smt_add_frame_len(SMbuf *mb, int len)
static void smt_fill_una(struct s_smc *smc, struct smt_p_una *una)
static void smt_fill_sde(struct s_smc *smc, struct smt_p_sde *sde)
static void smt_fill_state(struct s_smc *smc, struct smt_p_state *state)
static void smt_fill_timestamp(struct s_smc *smc, struct smt_p_timestamp *ts)
void smt_set_timestamp(struct s_smc *smc, u_char *p)
static void smt_fill_policy(struct s_smc *smc, struct smt_p_policy *policy)
static void smt_fill_latency(struct s_smc *smc, struct smt_p_latency *latency)
static void smt_fill_neighbor(struct s_smc *smc, struct smt_p_neighbor *neighbor)
#define ALLPHYS	NUMPHYS
#define ALLPHYS	((smc->s.sas == SMT_SAS) ? 1 : 2)
static int smt_fill_path(struct s_smc *smc, struct smt_p_path *path)
static void smt_fill_mac_status(struct s_smc *smc, struct smt_p_mac_status *st)
static void smt_fill_lem(struct s_smc *smc, struct smt_p_lem *lem, int phy)
static void smt_fill_version(struct s_smc *smc, struct smt_p_version *vers)
static void smt_fill_fsc(struct s_smc *smc, struct smt_p_fsc *fsc)
static void smt_fill_mac_counter(struct s_smc *smc, struct smt_p_mac_counter *mc)
static void smt_fill_mac_fnc(struct s_smc *smc, struct smt_p_mac_fnc *fnc)
static void smt_fill_manufacturer(struct s_smc *smc,
struct smp_p_manufacturer *man)
static void smt_fill_user(struct s_smc *smc, struct smp_p_user *user)
static void smt_fill_setcount(struct s_smc *smc, struct smt_p_setcount *setcount)
static void smt_fill_echo(struct s_smc *smc, struct smt_p_echo *echo, u_long seed,
int len)
static void smt_clear_una_dna(struct s_smc *smc)
static void smt_clear_old_una_dna(struct s_smc *smc)
u_long smt_get_tid(struct s_smc *smc)
static const struct smt_pdef  smt_pdef[] =  ;
#define N_SMT_PLEN	ARRAY_SIZE(smt_pdef)
int smt_check_para(struct s_smc *smc, struct smt_header	*sm,
const u_short list[])
void *sm_to_para(struct s_smc *smc, struct smt_header *sm, int para)
#if	0
void fddi_send_antc(struct s_smc *smc, struct fddi_addr *dest)
char *addr_to_string(struct fddi_addr *addr)
int smt_ifconfig(int argc, char *argv[])
static int mac_index(struct s_smc *smc, int mac)
static int phy_index(struct s_smc *smc, int phy)
static int mac_con_resource_index(struct s_smc *smc, int mac)
static int phy_con_resource_index(struct s_smc *smc, int phy)
static int entity_to_index(struct s_smc *smc, int e)
static int smt_swap_short(u_short s)
void smt_swap_para(struct smt_header *sm, int len, int direction)
static void smt_string_swap(char *data, const char *format, int len)
void smt_swap_para(struct smt_header *sm, int len, int direction)
int smt_action(struct s_smc *smc, int class, int code, int index)
static void hwm_conv_can(struct s_smc *smc, char *data, int len)
