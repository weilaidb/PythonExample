static void ft_sess_delete_all(struct ft_tport *);
static struct ft_tport *ft_tport_create(struct fc_lport *lport)
static void ft_tport_rcu_free(struct rcu_head *rcu)
static void ft_tport_delete(struct ft_tport *tport)
void ft_lport_add(struct fc_lport *lport, void *arg)
void ft_lport_del(struct fc_lport *lport, void *arg)
int ft_lport_notify(struct notifier_block *nb, unsigned long event, void *arg)
static u32 ft_sess_hash(u32 port_id)
static struct ft_sess *ft_sess_get(struct fc_lport *lport, u32 port_id)
static struct ft_sess *ft_sess_create(struct ft_tport *tport, u32 port_id,
struct ft_node_acl *acl)
static void ft_sess_unhash(struct ft_sess *sess)
static struct ft_sess *ft_sess_delete(struct ft_tport *tport, u32 port_id)
static void ft_sess_delete_all(struct ft_tport *tport)
int ft_sess_shutdown(struct se_session *se_sess)
void ft_sess_close(struct se_session *se_sess)
void ft_sess_stop(struct se_session *se_sess, int sess_sleep, int conn_sleep)
int ft_sess_logged_in(struct se_session *se_sess)
u32 ft_sess_get_index(struct se_session *se_sess)
u32 ft_sess_get_port_name(struct se_session *se_sess,
unsigned char *buf, u32 len)
void ft_sess_set_erl0(struct se_session *se_sess)
static int ft_prli_locked(struct fc_rport_priv *rdata, u32 spp_len,
const struct fc_els_spp *rspp, struct fc_els_spp *spp)
static int ft_prli(struct fc_rport_priv *rdata, u32 spp_len,
const struct fc_els_spp *rspp, struct fc_els_spp *spp)
static void ft_sess_rcu_free(struct rcu_head *rcu)
static void ft_sess_free(struct kref *kref)
void ft_sess_put(struct ft_sess *sess)
static void ft_prlo(struct fc_rport_priv *rdata)
static void ft_recv(struct fc_lport *lport, struct fc_frame *fp)
struct fc4_prov ft_prov = ;
