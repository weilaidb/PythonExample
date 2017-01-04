#define FSCACHE_DEBUG_LEVEL CACHE
static uint16_t fscache_fsdef_netfs_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax);
static uint16_t fscache_fsdef_netfs_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax);
static
enum fscache_checkaux fscache_fsdef_netfs_check_aux(void *cookie_netfs_data,
const void *data,
uint16_t datalen);
static struct fscache_cookie_def fscache_fsdef_index_def = ;
struct fscache_cookie fscache_fsdef_index = ;
EXPORT_SYMBOL(fscache_fsdef_index);
struct fscache_cookie_def fscache_fsdef_netfs_def = ;
static uint16_t fscache_fsdef_netfs_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static uint16_t fscache_fsdef_netfs_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static enum fscache_checkaux fscache_fsdef_netfs_check_aux(
void *cookie_netfs_data,
const void *data,
uint16_t datalen)
