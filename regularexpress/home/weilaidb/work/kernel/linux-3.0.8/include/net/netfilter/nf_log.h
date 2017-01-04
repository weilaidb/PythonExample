#define _NF_LOG_H
#define NF_LOG_TCPSEQ		0x01
#define NF_LOG_TCPOPT		0x02
#define NF_LOG_IPOPT		0x04
#define NF_LOG_UID		0x08
#define NF_LOG_MASK		0x0f
#define NF_LOG_TYPE_LOG		0x01
#define NF_LOG_TYPE_ULOG	0x02
struct nf_loginfo ;
typedef void nf_logfn(u_int8_t pf,
unsigned int hooknum,
const struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
const struct nf_loginfo *li,
const char *prefix);
struct nf_logger ;
int nf_log_register(u_int8_t pf, struct nf_logger *logger);
void nf_log_unregister(struct nf_logger *logger);
int nf_log_bind_pf(u_int8_t pf, const struct nf_logger *logger);
void nf_log_unbind_pf(u_int8_t pf);
void nf_log_packet(u_int8_t pf,
unsigned int hooknum,
const struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
const struct nf_loginfo *li,
const char *fmt, ...) __attribute__ ((format(printf,7,8)));
