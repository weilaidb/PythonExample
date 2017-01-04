#define BNX2X_STATS_H
struct bnx2x_eth_q_stats ;
#define Q_STATS_OFFSET32(stat_name) \
(offsetof(struct bnx2x_eth_q_stats, stat_name) / 4)
struct nig_stats ;
enum bnx2x_stats_event ;
enum bnx2x_stats_state ;
struct bnx2x_eth_stats ;
#define STATS_OFFSET32(stat_name) \
(offsetof(struct bnx2x_eth_stats, stat_name) / 4)
struct bnx2x;
void bnx2x_stats_init(struct bnx2x *bp);
extern const u32 dmae_reg_go_c[];
