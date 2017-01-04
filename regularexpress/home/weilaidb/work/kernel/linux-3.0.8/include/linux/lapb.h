#define	LAPB_KERNEL_H
#define	LAPB_OK			0
#define	LAPB_BADTOKEN		1
#define	LAPB_INVALUE		2
#define	LAPB_CONNECTED		3
#define	LAPB_NOTCONNECTED	4
#define	LAPB_REFUSED		5
#define	LAPB_TIMEDOUT		6
#define	LAPB_NOMEM		7
#define	LAPB_STANDARD		0x00
#define	LAPB_EXTENDED		0x01
#define	LAPB_SLP		0x00
#define	LAPB_MLP		0x02
#define	LAPB_DTE		0x00
#define	LAPB_DCE		0x04
struct lapb_register_struct ;
struct lapb_parms_struct ;
extern int lapb_register(struct net_device *dev, struct lapb_register_struct *callbacks);
extern int lapb_unregister(struct net_device *dev);
extern int lapb_getparms(struct net_device *dev, struct lapb_parms_struct *parms);
extern int lapb_setparms(struct net_device *dev, struct lapb_parms_struct *parms);
extern int lapb_connect_request(struct net_device *dev);
extern int lapb_disconnect_request(struct net_device *dev);
extern int lapb_data_request(struct net_device *dev, struct sk_buff *skb);
extern int lapb_data_received(struct net_device *dev, struct sk_buff *skb);
