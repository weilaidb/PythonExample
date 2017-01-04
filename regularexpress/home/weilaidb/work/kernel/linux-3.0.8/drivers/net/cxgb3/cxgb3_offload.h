#define _CXGB3_OFFLOAD_H
struct adapter;
void cxgb3_offload_init(void);
void cxgb3_adapter_ofld(struct adapter *adapter);
void cxgb3_adapter_unofld(struct adapter *adapter);
int cxgb3_offload_activate(struct adapter *adapter);
void cxgb3_offload_deactivate(struct adapter *adapter);
void cxgb3_set_dummy_ops(struct t3cdev *dev);
struct t3cdev *dev2t3cdev(struct net_device *dev);
void cxgb3_register_client(struct cxgb3_client *client);
void cxgb3_unregister_client(struct cxgb3_client *client);
void cxgb3_add_clients(struct t3cdev *tdev);
void cxgb3_remove_clients(struct t3cdev *tdev);
void cxgb3_event_notify(struct t3cdev *tdev, u32 event, u32 port);
typedef int (*cxgb3_cpl_handler_func)(struct t3cdev *dev,
struct sk_buff *skb, void *ctx);
enum ;
struct cxgb3_client ;
int cxgb3_alloc_atid(struct t3cdev *dev, struct cxgb3_client *client,
void *ctx);
int cxgb3_alloc_stid(struct t3cdev *dev, struct cxgb3_client *client,
void *ctx);
void *cxgb3_free_atid(struct t3cdev *dev, int atid);
void cxgb3_free_stid(struct t3cdev *dev, int stid);
void cxgb3_insert_tid(struct t3cdev *dev, struct cxgb3_client *client,
void *ctx, unsigned int tid);
void cxgb3_queue_tid_release(struct t3cdev *dev, unsigned int tid);
void cxgb3_remove_tid(struct t3cdev *dev, void *ctx, unsigned int tid);
struct t3c_tid_entry ;
enum ;
enum ;
typedef int (*cpl_handler_func)(struct t3cdev *dev, struct sk_buff *skb);
static inline void *cplhdr(struct sk_buff *skb)
void t3_register_cpl_handler(unsigned int opcode, cpl_handler_func h);
union listen_entry ;
union active_open_entry ;
struct tid_info ;
struct t3c_data ;
#define T3C_DATA(dev) (*(struct t3c_data **)&(dev)->l4opt)
