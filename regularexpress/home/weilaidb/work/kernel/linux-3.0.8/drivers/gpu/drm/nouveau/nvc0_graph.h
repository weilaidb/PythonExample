#define __NVC0_GRAPH_H__
#define GPC_MAX 4
#define TP_MAX 32
#define ROP_BCAST(r)     (0x408800 + (r))
#define ROP_UNIT(u, r)   (0x410000 + (u) * 0x400 + (r))
#define GPC_BCAST(r)     (0x418000 + (r))
#define GPC_UNIT(t, r)   (0x500000 + (t) * 0x8000 + (r))
#define TP_UNIT(t, m, r) (0x504000 + (t) * 0x8000 + (m) * 0x800 + (r))
struct nvc0_graph_fuc ;
struct nvc0_graph_priv ;
struct nvc0_graph_chan ;
int nvc0_grctx_generate(struct nouveau_channel *);
