#define _ATMCLIP_H
#define CLIP_VCC(vcc) ((struct clip_vcc *) ((vcc)->user_back))
#define NEIGH2ENTRY(neigh) ((struct atmarp_entry *) (neigh)->primary_key)
struct sk_buff;
struct clip_vcc ;
struct atmarp_entry ;
#define PRIV(dev) ((struct clip_priv *) netdev_priv(dev))
struct clip_priv ;
extern struct neigh_table *clip_tbl_hook;
