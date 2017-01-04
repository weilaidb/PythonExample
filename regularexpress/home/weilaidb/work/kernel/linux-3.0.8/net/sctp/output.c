#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static sctp_xmit_t sctp_packet_can_append_data(struct sctp_packet *packet,
struct sctp_chunk *chunk);
static void sctp_packet_append_data(struct sctp_packet *packet,
struct sctp_chunk *chunk);
static sctp_xmit_t sctp_packet_will_fit(struct sctp_packet *packet,
struct sctp_chunk *chunk,
u16 chunk_len);
static void sctp_packet_reset(struct sctp_packet *packet)
struct sctp_packet *sctp_packet_config(struct sctp_packet *packet,
__u32 vtag, int ecn_capable)
struct sctp_packet *sctp_packet_init(struct sctp_packet *packet,
struct sctp_transport *transport,
__u16 sport, __u16 dport)
void sctp_packet_free(struct sctp_packet *packet)
sctp_xmit_t sctp_packet_transmit_chunk(struct sctp_packet *packet,
struct sctp_chunk *chunk,
int one_packet)
static sctp_xmit_t sctp_packet_bundle_auth(struct sctp_packet *pkt,
struct sctp_chunk *chunk)
static sctp_xmit_t sctp_packet_bundle_sack(struct sctp_packet *pkt,
struct sctp_chunk *chunk)
sctp_xmit_t sctp_packet_append_chunk(struct sctp_packet *packet,
struct sctp_chunk *chunk)
int sctp_packet_transmit(struct sctp_packet *packet)
static sctp_xmit_t sctp_packet_can_append_data(struct sctp_packet *packet,
struct sctp_chunk *chunk)
static void sctp_packet_append_data(struct sctp_packet *packet,
struct sctp_chunk *chunk)
static sctp_xmit_t sctp_packet_will_fit(struct sctp_packet *packet,
struct sctp_chunk *chunk,
u16 chunk_len)
