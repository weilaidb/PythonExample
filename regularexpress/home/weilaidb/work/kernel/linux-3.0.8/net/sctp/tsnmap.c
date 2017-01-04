static void sctp_tsnmap_update(struct sctp_tsnmap *map);
static void sctp_tsnmap_find_gap_ack(unsigned long *map, __u16 off,
__u16 len, __u16 *start, __u16 *end);
static int sctp_tsnmap_grow(struct sctp_tsnmap *map, u16 gap);
struct sctp_tsnmap *sctp_tsnmap_init(struct sctp_tsnmap *map, __u16 len,
__u32 initial_tsn, gfp_t gfp)
void sctp_tsnmap_free(struct sctp_tsnmap *map)
int sctp_tsnmap_check(const struct sctp_tsnmap *map, __u32 tsn)
int sctp_tsnmap_mark(struct sctp_tsnmap *map, __u32 tsn)
SCTP_STATIC void sctp_tsnmap_iter_init(const struct sctp_tsnmap *map,
struct sctp_tsnmap_iter *iter)
SCTP_STATIC int sctp_tsnmap_next_gap_ack(const struct sctp_tsnmap *map,
struct sctp_tsnmap_iter *iter,
__u16 *start, __u16 *end)
void sctp_tsnmap_skip(struct sctp_tsnmap *map, __u32 tsn)
static void sctp_tsnmap_update(struct sctp_tsnmap *map)
__u16 sctp_tsnmap_pending(struct sctp_tsnmap *map)
static void sctp_tsnmap_find_gap_ack(unsigned long *map, __u16 off,
__u16 len, __u16 *start, __u16 *end)
void sctp_tsnmap_renege(struct sctp_tsnmap *map, __u32 tsn)
__u16 sctp_tsnmap_num_gabs(struct sctp_tsnmap *map,
struct sctp_gap_ack_block *gabs)
static int sctp_tsnmap_grow(struct sctp_tsnmap *map, u16 gap)
