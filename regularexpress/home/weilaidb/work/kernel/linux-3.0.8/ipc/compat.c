struct compat_msgbuf ;
struct compat_ipc_perm ;
struct compat_semid_ds ;
struct compat_msqid_ds ;
struct compat_shmid_ds ;
struct compat_ipc_kludge ;
struct compat_shminfo64 ;
struct compat_shm_info ;
extern int sem_ctls[];
#define sc_semopm	(sem_ctls[2])
static inline int compat_ipc_parse_version(int *cmd)
static inline int __get_compat_ipc64_perm(struct ipc64_perm *p64,
struct compat_ipc64_perm __user *up64)
static inline int __get_compat_ipc_perm(struct ipc64_perm *p,
struct compat_ipc_perm __user *up)
static inline int __put_compat_ipc64_perm(struct ipc64_perm *p64,
struct compat_ipc64_perm __user *up64)
static inline int __put_compat_ipc_perm(struct ipc64_perm *p,
struct compat_ipc_perm __user *up)
static inline int get_compat_semid64_ds(struct semid64_ds *s64,
struct compat_semid64_ds __user *up64)
static inline int get_compat_semid_ds(struct semid64_ds *s,
struct compat_semid_ds __user *up)
static inline int put_compat_semid64_ds(struct semid64_ds *s64,
struct compat_semid64_ds __user *up64)
static inline int put_compat_semid_ds(struct semid64_ds *s,
struct compat_semid_ds __user *up)
long compat_sys_semctl(int first, int second, int third, void __user *uptr)
long compat_sys_msgsnd(int first, int second, int third, void __user *uptr)
long compat_sys_msgrcv(int first, int second, int msgtyp, int third,
int version, void __user *uptr)
static inline int get_compat_msqid64(struct msqid64_ds *m64,
struct compat_msqid64_ds __user *up64)
static inline int get_compat_msqid(struct msqid64_ds *m,
struct compat_msqid_ds __user *up)
static inline int put_compat_msqid64_ds(struct msqid64_ds *m64,
struct compat_msqid64_ds __user *up64)
static inline int put_compat_msqid_ds(struct msqid64_ds *m,
struct compat_msqid_ds __user *up)
long compat_sys_msgctl(int first, int second, void __user *uptr)
long compat_sys_shmat(int first, int second, compat_uptr_t third, int version,
void __user *uptr)
static inline int get_compat_shmid64_ds(struct shmid64_ds *s64,
struct compat_shmid64_ds __user *up64)
static inline int get_compat_shmid_ds(struct shmid64_ds *s,
struct compat_shmid_ds __user *up)
static inline int put_compat_shmid64_ds(struct shmid64_ds *s64,
struct compat_shmid64_ds __user *up64)
static inline int put_compat_shmid_ds(struct shmid64_ds *s,
struct compat_shmid_ds __user *up)
static inline int put_compat_shminfo64(struct shminfo64 *smi,
struct compat_shminfo64 __user *up64)
static inline int put_compat_shminfo(struct shminfo64 *smi,
struct shminfo __user *up)
static inline int put_compat_shm_info(struct shm_info __user *ip,
struct compat_shm_info __user *uip)
long compat_sys_shmctl(int first, int second, void __user *uptr)
long compat_sys_semtimedop(int semid, struct sembuf __user *tsems,
unsigned nsops, const struct compat_timespec __user *timeout)
