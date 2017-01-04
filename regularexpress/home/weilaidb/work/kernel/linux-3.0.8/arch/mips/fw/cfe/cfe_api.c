#define XPTR_FROM_NATIVE(n)	((cfe_xptr_t) (intptr_t) (n))
#define NATIVE_FROM_XPTR(x)	((void *) (intptr_t) (x))
int cfe_iocb_dispatch(struct cfe_xiocb *xiocb);
static int (*cfe_dispfunc) (intptr_t handle, intptr_t xiocb);
static u64 cfe_handle;
int cfe_init(u64 handle, u64 ept)
int cfe_iocb_dispatch(struct cfe_xiocb * xiocb)
int cfe_close(int handle)
int cfe_cpu_start(int cpu, void (*fn) (void), long sp, long gp, long a1)
int cfe_cpu_stop(int cpu)
int cfe_enumenv(int idx, char *name, int namelen, char *val, int vallen)
int
cfe_enummem(int idx, int flags, u64 *start, u64 *length, u64 *type)
int cfe_exit(int warm, int status)
int cfe_flushcache(int flg)
int cfe_getdevinfo(char *name)
int cfe_getenv(char *name, char *dest, int destlen)
int cfe_getfwinfo(cfe_fwinfo_t * info)
int cfe_getstdhandle(int flg)
int64_t
cfe_getticks(void)
int cfe_inpstat(int handle)
int
cfe_ioctl(int handle, unsigned int ioctlnum, unsigned char *buffer,
int length, int *retlen, u64 offset)
int cfe_open(char *name)
int cfe_read(int handle, unsigned char *buffer, int length)
int cfe_readblk(int handle, s64 offset, unsigned char *buffer, int length)
int cfe_setenv(char *name, char *val)
int cfe_write(int handle, unsigned char *buffer, int length)
int cfe_writeblk(int handle, s64 offset, unsigned char *buffer, int length)
