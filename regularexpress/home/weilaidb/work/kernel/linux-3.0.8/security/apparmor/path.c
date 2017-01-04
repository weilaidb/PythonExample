static int prepend(char **buffer, int buflen, const char *str, int namelen)
#define CHROOT_NSCONNECT (PATH_CHROOT_REL | PATH_CHROOT_NSCONNECT)
static int d_namespace_path(struct path *path, char *buf, int buflen,
char **name, int flags)
static int get_name_to_buffer(struct path *path, int flags, char *buffer,
int size, char **name)
int aa_get_name(struct path *path, int flags, char **buffer, const char **name)
