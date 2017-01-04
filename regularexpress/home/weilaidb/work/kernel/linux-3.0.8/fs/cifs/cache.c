struct fscache_netfs cifs_fscache_netfs = ;
int cifs_fscache_register(void)
void cifs_fscache_unregister(void)
struct cifs_server_key ;
static uint16_t cifs_server_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t maxbuf)
const struct fscache_cookie_def cifs_fscache_server_index_def = ;
struct cifs_fscache_super_auxdata ;
static char *extract_sharename(const char *treename)
static uint16_t cifs_super_get_key(const void *cookie_netfs_data, void *buffer,
uint16_t maxbuf)
static uint16_t
cifs_fscache_super_get_aux(const void *cookie_netfs_data, void *buffer,
uint16_t maxbuf)
static enum
fscache_checkaux cifs_fscache_super_check_aux(void *cookie_netfs_data,
const void *data,
uint16_t datalen)
const struct fscache_cookie_def cifs_fscache_super_index_def = ;
struct cifs_fscache_inode_auxdata ;
static uint16_t cifs_fscache_inode_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t maxbuf)
static void
cifs_fscache_inode_get_attr(const void *cookie_netfs_data, uint64_t *size)
static uint16_t
cifs_fscache_inode_get_aux(const void *cookie_netfs_data, void *buffer,
uint16_t maxbuf)
static enum
fscache_checkaux cifs_fscache_inode_check_aux(void *cookie_netfs_data,
const void *data,
uint16_t datalen)
static void cifs_fscache_inode_now_uncached(void *cookie_netfs_data)
const struct fscache_cookie_def cifs_fscache_inode_object_def = ;
