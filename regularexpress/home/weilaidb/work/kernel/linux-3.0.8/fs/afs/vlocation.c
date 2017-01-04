static unsigned afs_vlocation_timeout = 10;
static unsigned afs_vlocation_update_timeout = 10 * 60;
static void afs_vlocation_reaper(struct work_struct *);
static void afs_vlocation_updater(struct work_struct *);
static LIST_HEAD(afs_vlocation_updates);
static LIST_HEAD(afs_vlocation_graveyard);
static DEFINE_SPINLOCK(afs_vlocation_updates_lock);
static DEFINE_SPINLOCK(afs_vlocation_graveyard_lock);
static DECLARE_DELAYED_WORK(afs_vlocation_reap, afs_vlocation_reaper);
static DECLARE_DELAYED_WORK(afs_vlocation_update, afs_vlocation_updater);
static struct workqueue_struct *afs_vlocation_update_worker;
static int afs_vlocation_access_vl_by_name(struct afs_vlocation *vl,
struct key *key,
struct afs_cache_vlocation *vldb)
static int afs_vlocation_access_vl_by_id(struct afs_vlocation *vl,
struct key *key,
afs_volid_t volid,
afs_voltype_t voltype,
struct afs_cache_vlocation *vldb)
static struct afs_vlocation *afs_vlocation_alloc(struct afs_cell *cell,
const char *name,
size_t namesz)
static int afs_vlocation_update_record(struct afs_vlocation *vl,
struct key *key,
struct afs_cache_vlocation *vldb)
static void afs_vlocation_apply_update(struct afs_vlocation *vl,
struct afs_cache_vlocation *vldb)
static int afs_vlocation_fill_in_record(struct afs_vlocation *vl,
struct key *key)
static void afs_vlocation_queue_for_updates(struct afs_vlocation *vl)
struct afs_vlocation *afs_vlocation_lookup(struct afs_cell *cell,
struct key *key,
const char *name,
size_t namesz)
void afs_put_vlocation(struct afs_vlocation *vl)
static void afs_vlocation_destroy(struct afs_vlocation *vl)
static void afs_vlocation_reaper(struct work_struct *work)
int __init afs_vlocation_update_init(void)
void afs_vlocation_purge(void)
static void afs_vlocation_updater(struct work_struct *work)
