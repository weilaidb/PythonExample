#define _LINUX_SHM_H_
#define SHMMAX 0x2000000
#define SHMMIN 1
#define SHMMNI 4096
#define SHMALL (SHMMAX/PAGE_SIZE*(SHMMNI/16))
#define SHMALL (SHMMAX/getpagesize()*(SHMMNI/16))
#define SHMSEG SHMMNI
struct shmid_ds ;
#define SHM_R		0400
#define SHM_W		0200
#define	SHM_RDONLY	010000
#define	SHM_RND		020000
#define	SHM_REMAP	040000
#define	SHM_EXEC	0100000
#define SHM_LOCK 	11
#define SHM_UNLOCK 	12
#define SHM_STAT 	13
#define SHM_INFO 	14
struct	shminfo ;
struct shm_info ;
struct shmid_kernel
;
#define	SHM_DEST	01000
#define SHM_LOCKED      02000
#define SHM_HUGETLB     04000
#define SHM_NORESERVE   010000
long do_shmat(int shmid, char __user *shmaddr, int shmflg, unsigned long *addr);
extern int is_file_shm_hugepages(struct file *file);
static inline long do_shmat(int shmid, char __user *shmaddr,
int shmflg, unsigned long *addr)
static inline int is_file_shm_hugepages(struct file *file)
