#define __sctp_tsnmap_h__
struct sctp_tsnmap ;
struct sctp_tsnmap_iter ;
struct sctp_tsnmap *sctp_tsnmap_init(struct sctp_tsnmap *, __u16 len,
__u32 initial_tsn, gfp_t gfp);
void sctp_tsnmap_free(struct sctp_tsnmap *map);
int sctp_tsnmap_check(const struct sctp_tsnmap *, __u32 tsn);
int sctp_tsnmap_mark(struct sctp_tsnmap *, __u32 tsn);
void sctp_tsnmap_skip(struct sctp_tsnmap *map, __u32 tsn);
static inline __u32 sctp_tsnmap_get_ctsn(const struct sctp_tsnmap *map)
static inline __u32 sctp_tsnmap_get_max_tsn_seen(const struct sctp_tsnmap *map)
static inline __u16 sctp_tsnmap_num_dups(struct sctp_tsnmap *map)
static inline __be32 *sctp_tsnmap_get_dups(struct sctp_tsnmap *map)
__u16 sctp_tsnmap_num_gabs(struct sctp_tsnmap *map,
struct sctp_gap_ack_block *gabs);
__u16 sctp_tsnmap_pending(struct sctp_tsnmap *map);
static inline int sctp_tsnmap_has_gap(const struct sctp_tsnmap *map)
static inline void sctp_tsnmap_mark_dup(struct sctp_tsnmap *map, __u32 tsn)
void sctp_tsnmap_renege(struct sctp_tsnmap *, __u32 tsn);
int sctp_tsnmap_has_gap(const struct sctp_tsnmap *);
