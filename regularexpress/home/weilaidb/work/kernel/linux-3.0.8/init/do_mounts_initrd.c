unsigned long initrd_start, initrd_end;
int initrd_below_start_ok;
unsigned int real_root_dev;
static int __initdata old_fd, root_fd;
static int __initdata mount_initrd = 1;
static int __init no_initrd(char *str)
__setup("noinitrd", no_initrd);
static int __init do_linuxrc(void *_shell)
static void __init handle_initrd(void)
int __init initrd_load(void)
