#define _NF_CONNTRACK_FTP_H
enum nf_ct_ftp_type ;
#define FTP_PORT	21
#define NUM_SEQ_TO_REMEMBER 2
struct nf_ct_ftp_master ;
struct nf_conntrack_expect;
extern unsigned int (*nf_nat_ftp_hook)(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
enum nf_ct_ftp_type type,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp);
