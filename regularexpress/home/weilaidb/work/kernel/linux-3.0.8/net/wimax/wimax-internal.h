#define __WIMAX_INTERNAL_H__
static inline __must_check
int wimax_dev_is_ready(struct wimax_dev *wimax_dev)
static inline
void __wimax_state_set(struct wimax_dev *wimax_dev, enum wimax_st state)
extern void __wimax_state_change(struct wimax_dev *, enum wimax_st);
extern int wimax_debugfs_add(struct wimax_dev *);
extern void wimax_debugfs_rm(struct wimax_dev *);
static inline int wimax_debugfs_add(struct wimax_dev *wimax_dev)
static inline void wimax_debugfs_rm(struct wimax_dev *wimax_dev)
extern void wimax_id_table_add(struct wimax_dev *);
extern struct wimax_dev *wimax_dev_get_by_genl_info(struct genl_info *, int);
extern void wimax_id_table_rm(struct wimax_dev *);
extern void wimax_id_table_release(void);
extern int wimax_rfkill_add(struct wimax_dev *);
extern void wimax_rfkill_rm(struct wimax_dev *);
extern struct genl_family wimax_gnl_family;
extern struct genl_multicast_group wimax_gnl_mcg;
