static int debugfs_premounted;
static char debugfs_mountpoint[MAX_PATH+1];
static const char *debugfs_known_mountpoints[] = ;
void debugfs_force_cleanup(void)
int debugfs_make_path(const char *element, char *buffer, int size)
static int debugfs_found;
const char *debugfs_find_mountpoint(void)
int debugfs_valid_mountpoint(const char *debugfs)
int debugfs_valid_entry(const char *path)
char *debugfs_mount(const char *mountpoint)
int debugfs_umount(void)
int debugfs_write(const char *entry, const char *value)
int debugfs_read(const char *entry, char *buffer, size_t size)
