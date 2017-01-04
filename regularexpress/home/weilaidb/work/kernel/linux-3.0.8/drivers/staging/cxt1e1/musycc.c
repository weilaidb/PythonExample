unsigned int max_intcnt = 0;
unsigned int max_bh = 0;
char        SBEid_pmcc4_musyccc[] =
"@(#)musycc.c - $Revision: 2.1 $      (c) Copyright 2004-2006 SBE, Inc.";
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define STATIC
#define STATIC  static
#define sd_find_chan(ci,ch)   c4_find_chan(ch)
extern ci_t *c4_list;
extern int  drvr_state;
extern int  cxt1e1_log_level;
extern int  cxt1e1_max_mru;
extern int  cxt1e1_max_mtu;
extern int  max_rxdesc_used;
extern int  max_txdesc_used;
extern ci_t *CI;
void        c4_fifo_free (mpi_t *, int);
void        c4_wk_chan_restart (mch_t *);
void        musycc_bh_tx_eom (mpi_t *, int);
int         musycc_chan_up (ci_t *, int);
status_t __init musycc_init (ci_t *);
STATIC void __init musycc_init_port (mpi_t *);
void        musycc_intr_bh_tasklet (ci_t *);
void        musycc_serv_req (mpi_t *, u_int32_t);
void        musycc_update_timeslots (mpi_t *);
#if 1
STATIC int
musycc_dump_rxbuffer_ring (mch_t * ch, int lockit)
#if 1
STATIC int
musycc_dump_txbuffer_ring (mch_t * ch, int lockit)
status_t
musycc_dump_ring (ci_t * ci, unsigned int chan)
status_t
musycc_dump_rings (ci_t * ci, unsigned int start_chan)
void
musycc_init_mdt (mpi_t * pi)
void
musycc_update_tx_thp (mch_t * ch)
void
musycc_wq_chan_restart (void *arg)
void
musycc_chan_restart (mch_t * ch)
void
rld_put_led (mpi_t * pi, u_int32_t ledval)
#define MUSYCC_SR_RETRY_CNT  9
void
musycc_serv_req (mpi_t * pi, u_int32_t req)
void
musycc_update_timeslots (mpi_t * pi)
void
musycc_update_timeslots (mpi_t * pi)
u_int32_t
musycc_chan_proto (int proto)
STATIC void __init
musycc_init_port (mpi_t * pi)
status_t    __init
musycc_init (ci_t * ci)
void
musycc_bh_tx_eom (mpi_t * pi, int gchan)
STATIC void
musycc_bh_rx_eom (mpi_t * pi, int gchan)
irqreturn_t
musycc_intr_th_handler (void *devp)
#if defined(SBE_ISR_IMMEDIATE)
unsigned long
void
musycc_intr_bh_tasklet (ci_t * ci)
ch->p.chan_mode = CFG_CH_PROTO_HDLC_FCS16;
ch->p.idlecode = CFG_CH_FLAG_7E;
ch->p.pad_fill_count = 2;
spin_lock_init (&ch->ch_rxlock);
spin_lock_init (&ch->ch_txlock);
return 0;
}
status_t
musycc_chan_down (ci_t * dummy, int channum)
int
musycc_del_chan (ci_t * ci, int channum)
int
musycc_del_chan_stats (ci_t * ci, int channum)
int
musycc_start_xmit (ci_t * ci, int channum, void *mem_token)
