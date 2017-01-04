#define __DEBUGFS_H__
# define MAX_PATH 256
# define _STR(x) #x
# define STR(x) _STR(x)
extern const char *debugfs_find_mountpoint(void);
extern int debugfs_valid_mountpoint(const char *debugfs);
extern int debugfs_valid_entry(const char *path);
extern char *debugfs_mount(const char *mountpoint);
extern int debugfs_umount(void);
extern int debugfs_write(const char *entry, const char *value);
extern int debugfs_read(const char *entry, char *buffer, size_t size);
extern void debugfs_force_cleanup(void);
extern int debugfs_make_path(const char *element, char *buffer, int size);
