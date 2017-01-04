#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if (__GNUC__ < 3) || (__GNUC__ == 3 && __GNUC_MINOR__ < 2)
#error Sorry, your GCC is too old. It builds incorrect kernels.
#if __GNUC__ == 4 && __GNUC_MINOR__ == 1 && __GNUC_PATCHLEVEL__ == 0
#warning gcc-4.1.0 is known to miscompile the kernel.  A different compiler version is recommended.
#define STATIC
#define STATIC  static
#define CHANNAME "hdlc"
status_t    c4_chan_work_init (mpi_t *, mch_t *);
void        musycc_wq_chan_restart (void *);
status_t __init c4_init (ci_t *, u_char *, u_char *);
status_t __init c4_init2 (ci_t *);
ci_t       *__init c4_new (void *);
int __init  c4hw_attach_all (void);
void __init hdw_sn_get (hdw_info_t *, int);
irqreturn_t c4_ebus_intr_th_handler (void *);
int         c4_frame_rw (ci_t *, struct sbecom_port_param *);
status_t    c4_get_port (ci_t *, int);
int         c4_loop_port (ci_t *, int, u_int8_t);
int         c4_musycc_rw (ci_t *, struct c4_musycc_param *);
int         c4_new_chan (ci_t *, int, int, void *);
status_t    c4_set_port (ci_t *, int);
int         c4_pld_rw (ci_t *, struct sbecom_port_param *);
void        cleanup_devs (void);
void        cleanup_ioremap (void);
status_t    musycc_chan_down (ci_t *, int);
irqreturn_t musycc_intr_th_handler (void *);
int         musycc_start_xmit (ci_t *, int, void *);
extern char pmcc4_OSSI_release[];
extern ci_t *CI;
extern struct s_hdw_info hdw_info[];
#if defined(CONFIG_SBE_HDLC_V7) || defined(CONFIG_SBE_WAN256T3_HDLC_V7) || \
defined(CONFIG_SBE_HDLC_V7_MODULE) || defined(CONFIG_SBE_WAN256T3_HDLC_V7_MODULE)
#define _v7_hdlc_  1
#define _v7_hdlc_  0
#if _v7_hdlc_
#define V7(x) (x ## _v7)
extern int  hdlc_netif_rx_v7 (hdlc_device *, struct sk_buff *);
extern int  register_hdlc_device_v7 (hdlc_device *);
extern int  unregister_hdlc_device_v7 (hdlc_device *);
#define V7(x) x
int         error_flag;
int         cxt1e1_log_level = LOG_ERROR;
int         log_level_default = LOG_ERROR;
module_param(cxt1e1_log_level, int, 0444);
int         cxt1e1_max_mru = MUSYCC_MRU;
int         max_mru_default = MUSYCC_MRU;
module_param(cxt1e1_max_mru, int, 0444);
int         cxt1e1_max_mtu = MUSYCC_MTU;
int         max_mtu_default = MUSYCC_MTU;
module_param(cxt1e1_max_mtu, int, 0444);
int         max_txdesc_used = MUSYCC_TXDESC_MIN;
int         max_txdesc_default = MUSYCC_TXDESC_MIN;
module_param(max_txdesc_used, int, 0444);
int         max_rxdesc_used = MUSYCC_RXDESC_MIN;
int         max_rxdesc_default = MUSYCC_RXDESC_MIN;
module_param(max_rxdesc_used, int, 0444);
void       *
getuserbychan (int channum)
char       *
get_hdlc_name (hdlc_device * hdlc)
static      status_t
mkret (int bsd)
void
c4_wk_chan_restart (mch_t * ch)
status_t
c4_wk_chan_init (mpi_t * pi, mch_t * ch)
status_t
c4_wq_port_init (mpi_t * pi)
void
c4_wq_port_cleanup (mpi_t * pi)
irqreturn_t
c4_linux_interrupt (int irq, void *dev_instance)
irqreturn_t
c4_ebus_interrupt (int irq, void *dev_instance)
static int
void_open (struct net_device * ndev)
STATIC int
chan_open (struct net_device * ndev)
STATIC int
chan_close (struct net_device * ndev)
STATIC int
chan_dev_ioctl (struct net_device * dev, struct ifreq * ifr, int cmd)
STATIC int
chan_attach_noop (struct net_device * ndev, unsigned short foo_1, unsigned short foo_2)
STATIC struct net_device_stats *
chan_get_stats (struct net_device * ndev)
static ci_t *
get_ci_by_dev (struct net_device * ndev)
STATIC int
c4_linux_xmit (struct sk_buff * skb, struct net_device * ndev)
static const struct net_device_ops chan_ops = ;
STATIC struct net_device *
create_chan (struct net_device * ndev, ci_t * ci,
struct sbecom_chan_param * cp)
STATIC      status_t
do_get_port (struct net_device * ndev, void *data)
STATIC      status_t
do_set_port (struct net_device * ndev, void *data)
STATIC      status_t
do_port_loop (struct net_device * ndev, void *data)
STATIC      status_t
do_framer_rw (struct net_device * ndev, void *data)
STATIC      status_t
do_pld_rw (struct net_device * ndev, void *data)
STATIC      status_t
do_musycc_rw (struct net_device * ndev, void *data)
STATIC      status_t
do_get_chan (struct net_device * ndev, void *data)
STATIC      status_t
do_set_chan (struct net_device * ndev, void *data)
STATIC      status_t
do_create_chan (struct net_device * ndev, void *data)
STATIC      status_t
do_get_chan_stats (struct net_device * ndev, void *data)
STATIC      status_t
do_set_loglevel (struct net_device * ndev, void *data)
STATIC      status_t
do_deluser (struct net_device * ndev, int lockit)
int
do_del_chan (struct net_device * musycc_dev, void *data)
int         c4_reset_board (void *);
int
do_reset (struct net_device * musycc_dev, void *data)
int
do_reset_chan_stats (struct net_device * musycc_dev, void *data)
STATIC      status_t
c4_ioctl (struct net_device * ndev, struct ifreq * ifr, int cmd)
static const struct net_device_ops c4_ops = ;
static void c4_setup(struct net_device *dev)
struct net_device *__init
c4_add_dev (hdw_info_t * hi, int brdno, unsigned long f0, unsigned long f1,
int irq0, int irq1)
STATIC int  __init
c4_mod_init (void)
STATIC void __exit
cleanup_hdlc (void)
STATIC void __exit
c4_mod_remove (void)
module_init (c4_mod_init);
module_exit (c4_mod_remove);
MODULE_AUTHOR ("SBE Technical Services <support@sbei.com>");
MODULE_DESCRIPTION ("wanPCI-CxT1E1 Generic HDLC WAN Driver module");
MODULE_LICENSE ("GPL");
