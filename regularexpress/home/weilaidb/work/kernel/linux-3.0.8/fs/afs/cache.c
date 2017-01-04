static uint16_t afs_cell_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t buflen);
static uint16_t afs_cell_cache_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t buflen);
static enum fscache_checkaux afs_cell_cache_check_aux(void *cookie_netfs_data,
const void *buffer,
uint16_t buflen);
static uint16_t afs_vlocation_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t buflen);
static uint16_t afs_vlocation_cache_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t buflen);
static enum fscache_checkaux afs_vlocation_cache_check_aux(
void *cookie_netfs_data, const void *buffer, uint16_t buflen);
static uint16_t afs_volume_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t buflen);
static uint16_t afs_vnode_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t buflen);
static void afs_vnode_cache_get_attr(const void *cookie_netfs_data,
uint64_t *size);
static uint16_t afs_vnode_cache_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t buflen);
static enum fscache_checkaux afs_vnode_cache_check_aux(void *cookie_netfs_data,
const void *buffer,
uint16_t buflen);
static void afs_vnode_cache_now_uncached(void *cookie_netfs_data);
struct fscache_netfs afs_cache_netfs = ;
struct fscache_cookie_def afs_cell_cache_index_def = ;
struct fscache_cookie_def afs_vlocation_cache_index_def = ;
struct fscache_cookie_def afs_volume_cache_index_def = ;
struct fscache_cookie_def afs_vnode_cache_index_def = ;
static uint16_t afs_cell_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static uint16_t afs_cell_cache_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static enum fscache_checkaux afs_cell_cache_check_aux(void *cookie_netfs_data,
const void *buffer,
uint16_t buflen)
static uint16_t afs_vlocation_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static uint16_t afs_vlocation_cache_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static
enum fscache_checkaux afs_vlocation_cache_check_aux(void *cookie_netfs_data,
const void *buffer,
uint16_t buflen)
static uint16_t afs_volume_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static uint16_t afs_vnode_cache_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static void afs_vnode_cache_get_attr(const void *cookie_netfs_data,
uint64_t *size)
static uint16_t afs_vnode_cache_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static enum fscache_checkaux afs_vnode_cache_check_aux(void *cookie_netfs_data,
const void *buffer,
uint16_t buflen)
static void afs_vnode_cache_now_uncached(void *cookie_netfs_data)
