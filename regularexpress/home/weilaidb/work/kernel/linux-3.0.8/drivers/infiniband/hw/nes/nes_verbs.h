#define NES_VERBS_H
struct nes_device;
#define NES_MAX_USER_DB_REGIONS  4096
#define NES_MAX_USER_WQ_REGIONS  4096
#define NES_TERM_SENT            0x01
#define NES_TERM_RCVD            0x02
#define NES_TERM_DONE            0x04
struct nes_ucontext ;
struct nes_pd ;
struct nes_mr ;
struct nes_hw_pb ;
struct nes_vpbl ;
struct nes_root_vpbl ;
struct nes_fmr ;
struct nes_av;
struct nes_cq ;
struct nes_wq ;
struct disconn_work ;
struct iw_cm_id;
struct ietf_mpa_frame;
struct nes_qp ;
