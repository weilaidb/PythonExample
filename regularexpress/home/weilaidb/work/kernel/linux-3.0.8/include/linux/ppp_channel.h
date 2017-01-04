#define _PPP_CHANNEL_H_
struct ppp_channel;
struct ppp_channel_ops ;
struct ppp_channel ;
extern void ppp_output_wakeup(struct ppp_channel *);
extern void ppp_input(struct ppp_channel *, struct sk_buff *);
extern void ppp_input_error(struct ppp_channel *, int code);
extern int ppp_register_net_channel(struct net *, struct ppp_channel *);
extern int ppp_register_channel(struct ppp_channel *);
extern void ppp_unregister_channel(struct ppp_channel *);
extern int ppp_channel_index(struct ppp_channel *);
extern int ppp_unit_number(struct ppp_channel *);
extern char *ppp_dev_name(struct ppp_channel *);
