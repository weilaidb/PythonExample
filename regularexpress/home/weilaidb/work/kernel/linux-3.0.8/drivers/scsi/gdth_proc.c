int gdth_proc_info(struct Scsi_Host *host, char *buffer,char **start,off_t offset,int length,
int inout)
static int gdth_set_info(char *buffer,int length,struct Scsi_Host *host,
gdth_ha_str *ha)
static int gdth_set_asc_info(struct Scsi_Host *host, char *buffer,
int length, gdth_ha_str *ha)
static int gdth_get_info(char *buffer,char **start,off_t offset,int length,
struct Scsi_Host *host, gdth_ha_str *ha)
static char *gdth_ioctl_alloc(gdth_ha_str *ha, int size, int scratch,
u64 *paddr)
static void gdth_ioctl_free(gdth_ha_str *ha, int size, char *buf, u64 paddr)
static int gdth_ioctl_check_bin(gdth_ha_str *ha, u16 size)
static void gdth_wait_completion(gdth_ha_str *ha, int busnum, int id)
