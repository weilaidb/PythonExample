#define CAIF_LAYER_H_
struct cflayer;
struct cfpkt;
struct cfpktq;
struct caif_payload_info;
struct caif_packet_funcs;
#define CAIF_LAYER_NAME_SZ 16
#define caif_assert(assert)					\
do  while (0)
enum caif_ctrlcmd ;
enum caif_modemcmd ;
enum caif_direction ;
struct cflayer ;
#define layer_set_up(layr, above) ((layr)->up = (struct cflayer *)(above))
#define layer_set_dn(layr, below) ((layr)->dn = (struct cflayer *)(below))
struct dev_info ;
struct caif_payload_info ;
