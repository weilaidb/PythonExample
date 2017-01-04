#define __BTRFS_ASYNC_THREAD_
struct btrfs_worker_thread;
struct btrfs_work ;
struct btrfs_workers ;
int btrfs_queue_worker(struct btrfs_workers *workers, struct btrfs_work *work);
int btrfs_start_workers(struct btrfs_workers *workers, int num_workers);
int btrfs_stop_workers(struct btrfs_workers *workers);
void btrfs_init_workers(struct btrfs_workers *workers, char *name, int max,
struct btrfs_workers *async_starter);
int btrfs_requeue_work(struct btrfs_work *work);
void btrfs_set_work_high_prio(struct btrfs_work *work);
