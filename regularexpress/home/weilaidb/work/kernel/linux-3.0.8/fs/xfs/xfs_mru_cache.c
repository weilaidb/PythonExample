typedef struct xfs_mru_cache_elem
xfs_mru_cache_elem_t;
static kmem_zone_t		*xfs_mru_elem_zone;
static struct workqueue_struct	*xfs_mru_reap_wq;
STATIC unsigned long
_xfs_mru_cache_migrate(
xfs_mru_cache_t	*mru,
unsigned long	now)
STATIC void
_xfs_mru_cache_list_insert(
xfs_mru_cache_t		*mru,
xfs_mru_cache_elem_t	*elem)
STATIC void
_xfs_mru_cache_clear_reap_list(
xfs_mru_cache_t		*mru) __releases(mru->lock) __acquires(mru->lock)
STATIC void
_xfs_mru_cache_reap(
struct work_struct	*work)
int
xfs_mru_cache_init(void)
void
xfs_mru_cache_uninit(void)
int
xfs_mru_cache_create(
xfs_mru_cache_t		**mrup,
unsigned int		lifetime_ms,
unsigned int		grp_count,
xfs_mru_cache_free_func_t free_func)
static void
xfs_mru_cache_flush(
xfs_mru_cache_t		*mru)
void
xfs_mru_cache_destroy(
xfs_mru_cache_t		*mru)
int
xfs_mru_cache_insert(
xfs_mru_cache_t	*mru,
unsigned long	key,
void		*value)
void *
xfs_mru_cache_remove(
xfs_mru_cache_t	*mru,
unsigned long	key)
void
xfs_mru_cache_delete(
xfs_mru_cache_t	*mru,
unsigned long	key)
void *
xfs_mru_cache_lookup(
xfs_mru_cache_t	*mru,
unsigned long	key)
void
xfs_mru_cache_done(
xfs_mru_cache_t	*mru) __releases(mru->lock)
