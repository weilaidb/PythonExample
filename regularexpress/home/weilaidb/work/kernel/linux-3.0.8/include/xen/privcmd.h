#define __LINUX_PUBLIC_PRIVCMD_H__
typedef unsigned long xen_pfn_t;
struct privcmd_hypercall ;
struct privcmd_mmap_entry ;
struct privcmd_mmap ;
struct privcmd_mmapbatch ;
#define IOCTL_PRIVCMD_HYPERCALL					\
_IOC(_IOC_NONE, 'P', 0, sizeof(struct privcmd_hypercall))
#define IOCTL_PRIVCMD_MMAP					\
_IOC(_IOC_NONE, 'P', 2, sizeof(struct privcmd_mmap))
#define IOCTL_PRIVCMD_MMAPBATCH					\
_IOC(_IOC_NONE, 'P', 3, sizeof(struct privcmd_mmapbatch))
