#define _LINUX_DM_KCOPYD_H
#define DM_KCOPYD_MAX_REGIONS 8
#define DM_KCOPYD_IGNORE_ERROR 1
struct dm_kcopyd_client;
struct dm_kcopyd_client *dm_kcopyd_client_create(void);
void dm_kcopyd_client_destroy(struct dm_kcopyd_client *kc);
typedef void (*dm_kcopyd_notify_fn)(int read_err, unsigned long write_err,
void *context);
int dm_kcopyd_copy(struct dm_kcopyd_client *kc, struct dm_io_region *from,
unsigned num_dests, struct dm_io_region *dests,
unsigned flags, dm_kcopyd_notify_fn fn, void *context);
