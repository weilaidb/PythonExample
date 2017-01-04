#define NET_PHONET_PEP_H
struct pep_sock ;
static inline struct pep_sock *pep_sk(struct sock *sk)
extern const struct proto_ops phonet_stream_ops;
struct pnpipehdr ;
#define other_pep_type		data[1]
static inline struct pnpipehdr *pnp_hdr(struct sk_buff *skb)
#define MAX_PNPIPE_HEADER (MAX_PHONET_HEADER + 4)
enum ;
#define PN_PIPE_INVALID_HANDLE	0xff
#define PN_PEP_TYPE_COMMON	0x00
enum ;
enum ;
enum ;
enum ;
enum ;
#define pn_flow_safe(fc) ((fc) >> 1)
enum ;
