#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define STATIC
#define STATIC  static
extern int  cxt1e1_log_level;
extern int  error_flag;
extern int  drvr_state;
void        c4_stopwd (ci_t *);
struct net_device * __init c4_add_dev (hdw_info_t *, int, unsigned long, unsigned long, int, int);
struct s_hdw_info hdw_info[MAX_BOARDS];
void        __init
show_two (hdw_info_t * hi, int brdno)
void        __init
hdw_sn_get (hdw_info_t * hi, int brdno)
void        __init
prep_hdw_info (void)
void
cleanup_ioremap (void)
void
cleanup_devs (void)
STATIC int  __init
c4_hdw_init (struct pci_dev * pdev, int found)
status_t    __init
c4hw_attach_all (void)
