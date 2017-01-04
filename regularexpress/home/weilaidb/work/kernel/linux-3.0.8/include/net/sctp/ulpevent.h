#define __sctp_ulpevent_h__
struct sctp_ulpevent ;
static inline struct sk_buff *sctp_event2skb(const struct sctp_ulpevent *ev)
static inline struct sctp_ulpevent *sctp_skb2event(struct sk_buff *skb)
void sctp_ulpevent_free(struct sctp_ulpevent *);
int sctp_ulpevent_is_notification(const struct sctp_ulpevent *);
unsigned int sctp_queue_purge_ulpevents(struct sk_buff_head *list);
struct sctp_ulpevent *sctp_ulpevent_make_assoc_change(
const struct sctp_association *asoc,
__u16 flags,
__u16 state,
__u16 error,
__u16 outbound,
__u16 inbound,
struct sctp_chunk *chunk,
gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_peer_addr_change(
const struct sctp_association *asoc,
const struct sockaddr_storage *aaddr,
int flags,
int state,
int error,
gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_remote_error(
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
__u16 flags,
gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_send_failed(
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
__u16 flags,
__u32 error,
gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_shutdown_event(
const struct sctp_association *asoc,
__u16 flags,
gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_pdapi(
const struct sctp_association *asoc,
__u32 indication, gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_adaptation_indication(
const struct sctp_association *asoc, gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_rcvmsg(struct sctp_association *asoc,
struct sctp_chunk *chunk,
gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_authkey(
const struct sctp_association *asoc, __u16 key_id,
__u32 indication, gfp_t gfp);
struct sctp_ulpevent *sctp_ulpevent_make_sender_dry_event(
const struct sctp_association *asoc, gfp_t gfp);
void sctp_ulpevent_read_sndrcvinfo(const struct sctp_ulpevent *event,
struct msghdr *);
__u16 sctp_ulpevent_get_notification_type(const struct sctp_ulpevent *event);
static inline int sctp_ulpevent_type_enabled(__u16 sn_type,
struct sctp_event_subscribe *mask)
static inline int sctp_ulpevent_is_enabled(const struct sctp_ulpevent *event,
struct sctp_event_subscribe *mask)
