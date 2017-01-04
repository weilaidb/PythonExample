#define _CONNTRACK_PROTO_GRE_H
#define GRE_VERSION_1701	0x0
#define GRE_VERSION_PPTP	0x1
#define GRE_PROTOCOL_PPTP	0x880B
#define GRE_FLAG_C		0x80
#define GRE_FLAG_R		0x40
#define GRE_FLAG_K		0x20
#define GRE_FLAG_S		0x10
#define GRE_FLAG_A		0x80
#define GRE_IS_C(f)	((f)&GRE_FLAG_C)
#define GRE_IS_R(f)	((f)&GRE_FLAG_R)
#define GRE_IS_K(f)	((f)&GRE_FLAG_K)
#define GRE_IS_S(f)	((f)&GRE_FLAG_S)
#define GRE_IS_A(f)	((f)&GRE_FLAG_A)
struct gre_hdr ;
struct gre_hdr_pptp ;
struct nf_ct_gre ;
struct nf_conn;
struct nf_ct_gre_keymap ;
int nf_ct_gre_keymap_add(struct nf_conn *ct, enum ip_conntrack_dir dir,
struct nf_conntrack_tuple *t);
void nf_ct_gre_keymap_destroy(struct nf_conn *ct);
extern void nf_ct_gre_keymap_flush(struct net *net);
extern void nf_nat_need_gre(void);
