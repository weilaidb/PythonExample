#define __LINUX_PKT_SCHED_H
#define TC_PRIO_BESTEFFORT		0
#define TC_PRIO_FILLER			1
#define TC_PRIO_BULK			2
#define TC_PRIO_INTERACTIVE_BULK	4
#define TC_PRIO_INTERACTIVE		6
#define TC_PRIO_CONTROL			7
#define TC_PRIO_MAX			15
struct tc_stats ;
struct tc_estimator ;
#define TC_H_MAJ_MASK (0xFFFF0000U)
#define TC_H_MIN_MASK (0x0000FFFFU)
#define TC_H_MAJ(h) ((h)&TC_H_MAJ_MASK)
#define TC_H_MIN(h) ((h)&TC_H_MIN_MASK)
#define TC_H_MAKE(maj,min) (((maj)&TC_H_MAJ_MASK)|((min)&TC_H_MIN_MASK))
#define TC_H_UNSPEC	(0U)
#define TC_H_ROOT	(0xFFFFFFFFU)
#define TC_H_INGRESS    (0xFFFFFFF1U)
struct tc_ratespec ;
#define TC_RTAB_SIZE	1024
struct tc_sizespec ;
enum ;
#define TCA_STAB_MAX (__TCA_STAB_MAX - 1)
struct tc_fifo_qopt ;
#define TCQ_PRIO_BANDS	16
#define TCQ_MIN_PRIO_BANDS 2
struct tc_prio_qopt ;
struct tc_multiq_qopt ;
struct tc_tbf_qopt ;
enum ;
#define TCA_TBF_MAX (__TCA_TBF_MAX - 1)
struct tc_sfq_qopt ;
struct tc_sfq_xstats ;
enum ;
#define TCA_RED_MAX (__TCA_RED_MAX - 1)
struct tc_red_qopt ;
struct tc_red_xstats ;
#define MAX_DPs 16
enum ;
#define TCA_GRED_MAX (__TCA_GRED_MAX - 1)
struct tc_gred_qopt ;
struct tc_gred_sopt ;
enum ;
#define TCA_CHOKE_MAX (__TCA_CHOKE_MAX - 1)
struct tc_choke_qopt ;
struct tc_choke_xstats ;
#define TC_HTB_NUMPRIO		8
#define TC_HTB_MAXDEPTH		8
#define TC_HTB_PROTOVER		3
struct tc_htb_opt ;
struct tc_htb_glob ;
enum ;
#define TCA_HTB_MAX (__TCA_HTB_MAX - 1)
struct tc_htb_xstats ;
struct tc_hfsc_qopt ;
struct tc_service_curve ;
struct tc_hfsc_stats ;
enum ;
#define TCA_HFSC_MAX (__TCA_HFSC_MAX - 1)
#define TC_CBQ_MAXPRIO		8
#define TC_CBQ_MAXLEVEL		8
#define TC_CBQ_DEF_EWMA		5
struct tc_cbq_lssopt ;
struct tc_cbq_wrropt ;
struct tc_cbq_ovl ;
struct tc_cbq_police ;
struct tc_cbq_fopt ;
struct tc_cbq_xstats ;
enum ;
#define TCA_CBQ_MAX	(__TCA_CBQ_MAX - 1)
enum ;
#define TCA_DSMARK_MAX (__TCA_DSMARK_MAX - 1)
enum ;
#define TCA_ATM_MAX	(__TCA_ATM_MAX - 1)
enum ;
#define TCA_NETEM_MAX (__TCA_NETEM_MAX - 1)
struct tc_netem_qopt ;
struct tc_netem_corr ;
struct tc_netem_reorder ;
struct tc_netem_corrupt ;
enum ;
#define NETEM_LOSS_MAX (__NETEM_LOSS_MAX - 1)
struct tc_netem_gimodel ;
struct tc_netem_gemodel ;
#define NETEM_DIST_SCALE	8192
#define NETEM_DIST_MAX		16384
enum ;
#define TCA_DRR_MAX	(__TCA_DRR_MAX - 1)
struct tc_drr_stats ;
#define TC_QOPT_BITMASK 15
#define TC_QOPT_MAX_QUEUE 16
struct tc_mqprio_qopt ;
enum ;
#define TCA_SFB_MAX (__TCA_SFB_MAX - 1)
struct tc_sfb_qopt ;
struct tc_sfb_xstats ;
#define SFB_MAX_PROB 0xFFFF
enum ;
#define TCA_QFQ_MAX	(__TCA_QFQ_MAX - 1)
struct tc_qfq_stats ;
