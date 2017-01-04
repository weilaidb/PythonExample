#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static DEFINE_MUTEX(ioctl_mutex);
static LIST_HEAD(ioctl_list);
void register_atm_ioctl(struct atm_ioctl *ioctl)
EXPORT_SYMBOL(register_atm_ioctl);
void deregister_atm_ioctl(struct atm_ioctl *ioctl)
EXPORT_SYMBOL(deregister_atm_ioctl);
static int do_vcc_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg, int compat)
int vcc_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
#define ATM_GETLINKRATE32 _IOW('a', ATMIOC_ITF+1, struct compat_atmif_sioc)
#define ATM_GETNAMES32    _IOW('a', ATMIOC_ITF+3, struct compat_atm_iobuf)
#define ATM_GETTYPE32     _IOW('a', ATMIOC_ITF+4, struct compat_atmif_sioc)
#define ATM_GETESI32	  _IOW('a', ATMIOC_ITF+5, struct compat_atmif_sioc)
#define ATM_GETADDR32	  _IOW('a', ATMIOC_ITF+6, struct compat_atmif_sioc)
#define ATM_RSTADDR32	  _IOW('a', ATMIOC_ITF+7, struct compat_atmif_sioc)
#define ATM_ADDADDR32	  _IOW('a', ATMIOC_ITF+8, struct compat_atmif_sioc)
#define ATM_DELADDR32	  _IOW('a', ATMIOC_ITF+9, struct compat_atmif_sioc)
#define ATM_GETCIRANGE32  _IOW('a', ATMIOC_ITF+10, struct compat_atmif_sioc)
#define ATM_SETCIRANGE32  _IOW('a', ATMIOC_ITF+11, struct compat_atmif_sioc)
#define ATM_SETESI32      _IOW('a', ATMIOC_ITF+12, struct compat_atmif_sioc)
#define ATM_SETESIF32     _IOW('a', ATMIOC_ITF+13, struct compat_atmif_sioc)
#define ATM_GETSTAT32     _IOW('a', ATMIOC_SARCOM+0, struct compat_atmif_sioc)
#define ATM_GETSTATZ32    _IOW('a', ATMIOC_SARCOM+1, struct compat_atmif_sioc)
#define ATM_GETLOOP32	  _IOW('a', ATMIOC_SARCOM+2, struct compat_atmif_sioc)
#define ATM_SETLOOP32	  _IOW('a', ATMIOC_SARCOM+3, struct compat_atmif_sioc)
#define ATM_QUERYLOOP32	  _IOW('a', ATMIOC_SARCOM+4, struct compat_atmif_sioc)
static struct  atm_ioctl_map[] = ;
#define NR_ATM_IOCTL ARRAY_SIZE(atm_ioctl_map)
static int do_atm_iobuf(struct socket *sock, unsigned int cmd,
unsigned long arg)
static int do_atmif_sioc(struct socket *sock, unsigned int cmd,
unsigned long arg)
static int do_atm_ioctl(struct socket *sock, unsigned int cmd32,
unsigned long arg)
int vcc_compat_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
