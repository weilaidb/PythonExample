#define CAIF_DEV_H_
struct caif_param ;
struct caif_connect_request ;
int caif_connect_client(struct net *net,
struct caif_connect_request *conn_req,
struct cflayer *client_layer, int *ifindex,
int *headroom, int *tailroom);
int caif_disconnect_client(struct net *net, struct cflayer *client_layer);
void caif_client_register_refcnt(struct cflayer *adapt_layer,
void (*hold)(struct cflayer *lyr),
void (*put)(struct cflayer *lyr));
void caif_free_client(struct cflayer *adap_layer);
