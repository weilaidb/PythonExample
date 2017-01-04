int __initdata rd_doload;
int root_mountflags = MS_RDONLY | MS_SILENT;
static char * __initdata root_device_name;
static char __initdata saved_root_name[64];
static int __initdata root_wait;
dev_t ROOT_DEV;
static int __init load_ramdisk(char *str)
__setup("load_ramdisk=", load_ramdisk);
static int __init readonly(char *str)
static int __init readwrite(char *str)
__setup("ro", readonly);
__setup("rw", readwrite);
static int match_dev_by_uuid(struct device *dev, void *data)
static dev_t devt_from_partuuid(char *uuid_str)
dev_t name_to_dev_t(char *name)
static int __init root_dev_setup(char *line)
__setup("root=", root_dev_setup);
static int __init rootwait_setup(char *str)
__setup("rootwait", rootwait_setup);
static char * __initdata root_mount_data;
static int __init root_data_setup(char *str)
static char * __initdata root_fs_names;
static int __init fs_names_setup(char *str)
static unsigned int __initdata root_delay;
static int __init root_delay_setup(char *str)
__setup("rootflags=", root_data_setup);
__setup("rootfstype=", fs_names_setup);
__setup("rootdelay=", root_delay_setup);
static void __init get_fs_names(char *page)
static int __init do_mount_root(char *name, char *fs, int flags, void *data)
void __init mount_block_root(char *name, int flags)
static int __init mount_nfs_root(void)
#if defined(CONFIG_BLK_DEV_RAM) || defined(CONFIG_BLK_DEV_FD)
void __init change_floppy(char *fmt, ...)
void __init mount_root(void)
void __init prepare_namespace(void)
