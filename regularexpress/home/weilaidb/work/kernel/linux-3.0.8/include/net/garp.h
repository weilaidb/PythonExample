#define _NET_GARP_H
#define GARP_PROTOCOL_ID	0x1
#define GARP_END_MARK		0x0
struct garp_pdu_hdr ;
struct garp_msg_hdr ;
enum garp_attr_event ;
struct garp_attr_hdr ;
struct garp_skb_cb ;
static inline struct garp_skb_cb *garp_cb(struct sk_buff *skb)
enum garp_applicant_state ;
#define GARP_APPLICANT_MAX	(__GARP_APPLICANT_MAX - 1)
enum garp_event ;
#define GARP_EVENT_MAX		(__GARP_EVENT_MAX - 1)
enum garp_action ;
struct garp_attr ;
enum garp_applications ;
#define GARP_APPLICATION_MAX	(__GARP_APPLICATION_MAX - 1)
struct garp_application ;
struct garp_applicant ;
struct garp_port ;
extern int	garp_register_application(struct garp_application *app);
extern void	garp_unregister_application(struct garp_application *app);
extern int	garp_init_applicant(struct net_device *dev,
struct garp_application *app);
extern void	garp_uninit_applicant(struct net_device *dev,
struct garp_application *app);
extern int	garp_request_join(const struct net_device *dev,
const struct garp_application *app,
const void *data, u8 len, u8 type);
extern void	garp_request_leave(const struct net_device *dev,
const struct garp_application *app,
const void *data, u8 len, u8 type);
