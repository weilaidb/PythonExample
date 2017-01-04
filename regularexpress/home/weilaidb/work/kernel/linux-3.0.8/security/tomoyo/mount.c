#define TOMOYO_MOUNT_BIND_KEYWORD                        "--bind"
#define TOMOYO_MOUNT_MOVE_KEYWORD                        "--move"
#define TOMOYO_MOUNT_REMOUNT_KEYWORD                     "--remount"
#define TOMOYO_MOUNT_MAKE_UNBINDABLE_KEYWORD             "--make-unbindable"
#define TOMOYO_MOUNT_MAKE_PRIVATE_KEYWORD                "--make-private"
#define TOMOYO_MOUNT_MAKE_SLAVE_KEYWORD                  "--make-slave"
#define TOMOYO_MOUNT_MAKE_SHARED_KEYWORD                 "--make-shared"
static int tomoyo_audit_mount_log(struct tomoyo_request_info *r)
static bool tomoyo_check_mount_acl(struct tomoyo_request_info *r,
const struct tomoyo_acl_info *ptr)
static int tomoyo_mount_acl(struct tomoyo_request_info *r, char *dev_name,
struct path *dir, char *type, unsigned long flags)
int tomoyo_mount_permission(char *dev_name, struct path *path, char *type,
unsigned long flags, void *data_page)
static bool tomoyo_same_mount_acl(const struct tomoyo_acl_info *a,
const struct tomoyo_acl_info *b)
int tomoyo_write_mount(char *data, struct tomoyo_domain_info *domain,
const bool is_delete)
