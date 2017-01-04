#define __RC_MINSTREL_HT_H
#define MINSTREL_MAX_STREAMS	3
#define MINSTREL_STREAM_GROUPS	4
#define MINSTREL_SCALE	16
#define MINSTREL_FRAC(val, div) (((val) << MINSTREL_SCALE) / div)
#define MINSTREL_TRUNC(val) ((val) >> MINSTREL_SCALE)
#define MCS_GROUP_RATES	8
struct mcs_group ;
extern const struct mcs_group minstrel_mcs_groups[];
struct minstrel_rate_stats ;
struct minstrel_mcs_group_data ;
struct minstrel_ht_sta ;
struct minstrel_ht_sta_priv ;
void minstrel_ht_add_sta_debugfs(void *priv, void *priv_sta, struct dentry *dir);
void minstrel_ht_remove_sta_debugfs(void *priv, void *priv_sta);
