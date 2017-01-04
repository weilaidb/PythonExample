DECLARE_RWSEM(afs_proc_cells_sem);
LIST_HEAD(afs_proc_cells);
static LIST_HEAD(afs_cells);
static DEFINE_RWLOCK(afs_cells_lock);
static DECLARE_RWSEM(afs_cells_sem);
static DECLARE_WAIT_QUEUE_HEAD(afs_cells_freeable_wq);
static struct afs_cell *afs_cell_root;
static struct afs_cell *afs_cell_alloc(const char *name, unsigned namelen,
char *vllist)
struct afs_cell *afs_cell_create(const char *name, unsigned namesz,
char *vllist, bool retref)
int afs_cell_init(char *rootcell)
struct afs_cell *afs_cell_lookup(const char *name, unsigned namesz,
bool dns_cell)
void afs_put_cell(struct afs_cell *cell)
static void afs_cell_destroy(struct afs_cell *cell)
void afs_cell_purge(void)
