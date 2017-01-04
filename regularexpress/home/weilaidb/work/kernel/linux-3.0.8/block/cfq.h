#define _CFQ_H
static inline void cfq_blkiocg_update_io_add_stats(struct blkio_group *blkg,
struct blkio_group *curr_blkg, bool direction, bool sync)
static inline void cfq_blkiocg_update_dequeue_stats(struct blkio_group *blkg,
unsigned long dequeue)
static inline void cfq_blkiocg_update_timeslice_used(struct blkio_group *blkg,
unsigned long time, unsigned long unaccounted_time)
static inline void cfq_blkiocg_set_start_empty_time(struct blkio_group *blkg)
static inline void cfq_blkiocg_update_io_remove_stats(struct blkio_group *blkg,
bool direction, bool sync)
static inline void cfq_blkiocg_update_io_merged_stats(struct blkio_group *blkg,
bool direction, bool sync)
static inline void cfq_blkiocg_update_idle_time_stats(struct blkio_group *blkg)
static inline void
cfq_blkiocg_update_avg_queue_size_stats(struct blkio_group *blkg)
static inline void
cfq_blkiocg_update_set_idle_time_stats(struct blkio_group *blkg)
static inline void cfq_blkiocg_update_dispatch_stats(struct blkio_group *blkg,
uint64_t bytes, bool direction, bool sync)
static inline void cfq_blkiocg_update_completion_stats(struct blkio_group *blkg, uint64_t start_time, uint64_t io_start_time, bool direction, bool sync)
static inline void cfq_blkiocg_add_blkio_group(struct blkio_cgroup *blkcg,
struct blkio_group *blkg, void *key, dev_t dev)
static inline int cfq_blkiocg_del_blkio_group(struct blkio_group *blkg)
static inline void cfq_blkiocg_update_io_add_stats(struct blkio_group *blkg,
struct blkio_group *curr_blkg, bool direction, bool sync)
static inline void cfq_blkiocg_update_dequeue_stats(struct blkio_group *blkg,
unsigned long dequeue)
static inline void cfq_blkiocg_update_timeslice_used(struct blkio_group *blkg,
unsigned long time, unsigned long unaccounted_time)
static inline void cfq_blkiocg_set_start_empty_time(struct blkio_group *blkg)
static inline void cfq_blkiocg_update_io_remove_stats(struct blkio_group *blkg,
bool direction, bool sync)
static inline void cfq_blkiocg_update_io_merged_stats(struct blkio_group *blkg,
bool direction, bool sync)
static inline void cfq_blkiocg_update_idle_time_stats(struct blkio_group *blkg)
static inline void
cfq_blkiocg_update_avg_queue_size_stats(struct blkio_group *blkg)
static inline void
cfq_blkiocg_update_set_idle_time_stats(struct blkio_group *blkg)
static inline void cfq_blkiocg_update_dispatch_stats(struct blkio_group *blkg,
uint64_t bytes, bool direction, bool sync)
static inline void cfq_blkiocg_update_completion_stats(struct blkio_group *blkg, uint64_t start_time, uint64_t io_start_time, bool direction, bool sync)
static inline void cfq_blkiocg_add_blkio_group(struct blkio_cgroup *blkcg,
struct blkio_group *blkg, void *key, dev_t dev)
static inline int cfq_blkiocg_del_blkio_group(struct blkio_group *blkg)
