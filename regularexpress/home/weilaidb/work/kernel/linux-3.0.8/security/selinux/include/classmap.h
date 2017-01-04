#define COMMON_FILE_SOCK_PERMS "ioctl", "read", "write", "create", \
"getattr", "setattr", "lock", "relabelfrom", "relabelto", "append"
#define COMMON_FILE_PERMS COMMON_FILE_SOCK_PERMS, "unlink", "link", \
"rename", "execute", "swapon", "quotaon", "mounton", "audit_access", \
"open", "execmod"
#define COMMON_SOCK_PERMS COMMON_FILE_SOCK_PERMS, "bind", "connect", \
"listen", "accept", "getopt", "setopt", "shutdown", "recvfrom",  \
"sendto", "recv_msg", "send_msg", "name_bind"
#define COMMON_IPC_PERMS "create", "destroy", "getattr", "setattr", "read", \
"write", "associate", "unix_read", "unix_write"
struct security_class_mapping secclass_map[] = ;
