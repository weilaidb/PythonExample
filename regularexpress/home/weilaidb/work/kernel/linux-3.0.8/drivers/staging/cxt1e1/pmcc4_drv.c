char        OSSIid_pmcc4_drvc[] =
"@(#)pmcc4_drv.c - $Revision: 3.1 $   (c) Copyright 2002-2007 One Stop Systems, Inc.";
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined (__FreeBSD__) || defined (__NetBSD__)
#define STATIC
#define STATIC  static
#define KERN_WARN KERN_WARNING
status_t    c4_wk_chan_init (mpi_t *, mch_t *);
void        c4_wq_port_cleanup (mpi_t *);
status_t    c4_wq_port_init (mpi_t *);
int         c4_loop_port (ci_t *, int, u_int8_t);
status_t    c4_set_port (ci_t *, int);
status_t    musycc_chan_down (ci_t *, int);
u_int32_t musycc_chan_proto (int);
status_t    musycc_dump_ring (ci_t *, unsigned int);
status_t __init musycc_init (ci_t *);
void        musycc_init_mdt (mpi_t *);
void        musycc_serv_req (mpi_t *, u_int32_t);
void        musycc_update_timeslots (mpi_t *);
extern void musycc_update_tx_thp (mch_t *);
extern int  cxt1e1_log_level;
extern int  cxt1e1_max_mru;
extern int  cxt1e1_max_mtu;
extern int  max_rxdesc_used, max_rxdesc_default;
extern int  max_txdesc_used, max_txdesc_default;
#if defined (__powerpc__)
extern void *memset (void *s, int c, size_t n);
int         drvr_state = SBE_DRVR_INIT;
ci_t       *c4_list = 0;
ci_t       *CI;
void
sbecom_set_loglevel (int d)
mch_t      *
c4_find_chan (int channum)
ci_t       *__init
c4_new (void *hi)
#define sbeLinkMask       0x41
#define sbeLinkChange     0x40
#define sbeLinkDown       0x01
#define sbeAlarmsMask     0x07
#define sbeE1AlarmsMask   0x107
#define COMET_LBCMD_READ  0x80
void
checkPorts (ci_t * ci)
STATIC void
c4_watchdog (ci_t * ci)
void
c4_cleanup (void)
int
c4_get_portcfg (ci_t * ci)
status_t    __init
c4_init (ci_t * ci, u_char *func0, u_char *func1)
status_t    __init
c4_init2 (ci_t * ci)
int
c4_loop_port (ci_t * ci, int portnum, u_int8_t cmd)
status_t
c4_frame_rw (ci_t * ci, struct sbecom_port_param * pp)
status_t
c4_pld_rw (ci_t * ci, struct sbecom_port_param * pp)
status_t
c4_musycc_rw (ci_t * ci, struct c4_musycc_param * mcp)
status_t
c4_get_port (ci_t * ci, int portnum)
status_t
c4_set_port (ci_t * ci, int portnum)
unsigned int max_int = 0;
status_t
c4_new_chan (ci_t * ci, int portnum, int channum, void *user)
status_t
c4_del_chan (int channum)
status_t
c4_del_chan_stats (int channum)
status_t
c4_set_chan (int channum, struct sbecom_chan_param * p)
status_t
c4_get_chan (int channum, struct sbecom_chan_param * p)
status_t
c4_get_chan_stats (int channum, struct sbecom_chan_stats * p)
STATIC int
c4_fifo_alloc (mpi_t * pi, int chan, int *len)
void
c4_fifo_free (mpi_t * pi, int chan)
status_t
c4_chan_up (ci_t * ci, int channum)
void
c4_stopwd (ci_t * ci)
void
sbecom_get_brdinfo (ci_t * ci, struct sbe_brd_info * bip, u_int8_t *bsn)
status_t
c4_get_iidinfo (ci_t * ci, struct sbe_iid_info * iip)
void        (*nciInterrupt[MAX_BOARDS][4]) (void);
extern void wanpmcC4T1E1_hookInterrupt (int cardID, int deviceID, void *handler);
void
wanpmcC4T1E1_hookInterrupt (int cardID, int deviceID, void *handler)
irqreturn_t
c4_ebus_intr_th_handler (void *devp)
unsigned long
wanpmcC4T1E1_getBaseAddress (int cardID, int deviceID)
