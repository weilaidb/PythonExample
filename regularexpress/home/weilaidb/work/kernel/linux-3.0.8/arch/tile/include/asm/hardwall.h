#define _ASM_TILE_HARDWALL_H
#define HARDWALL_IOCTL_BASE 0xa2
#define _HARDWALL_CREATE 1
#define HARDWALL_CREATE(size) \
_IOC(_IOC_READ, HARDWALL_IOCTL_BASE, _HARDWALL_CREATE, (size))
#define _HARDWALL_ACTIVATE 2
#define HARDWALL_ACTIVATE \
_IO(HARDWALL_IOCTL_BASE, _HARDWALL_ACTIVATE)
#define _HARDWALL_DEACTIVATE 3
#define HARDWALL_DEACTIVATE \
_IO(HARDWALL_IOCTL_BASE, _HARDWALL_DEACTIVATE)
#define _HARDWALL_GET_ID 4
#define HARDWALL_GET_ID \
_IO(HARDWALL_IOCTL_BASE, _HARDWALL_GET_ID)
#define HARDWALL_FILE "/dev/hardwall"
struct proc_dir_entry;
void proc_tile_hardwall_init(struct proc_dir_entry *root);
int proc_pid_hardwall(struct task_struct *task, char *buffer);
static inline void proc_tile_hardwall_init(struct proc_dir_entry *root)
