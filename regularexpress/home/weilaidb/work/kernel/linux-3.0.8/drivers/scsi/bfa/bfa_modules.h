#define __BFA_MODULES_H__
struct bfa_modules_s ;
enum ;
#define BFA_MODULE(__mod)						\
static void bfa_ ## __mod ## _meminfo(				\
struct bfa_iocfc_cfg_s *cfg, u32 *ndm_len,	\
u32 *dm_len);      \
static void bfa_ ## __mod ## _attach(struct bfa_s *bfa,		\
void *bfad, struct bfa_iocfc_cfg_s *cfg,	\
struct bfa_meminfo_s *meminfo,			\
struct bfa_pcidev_s *pcidev);      \
static void bfa_ ## __mod ## _detach(struct bfa_s *bfa);      \
static void bfa_ ## __mod ## _start(struct bfa_s *bfa);      \
static void bfa_ ## __mod ## _stop(struct bfa_s *bfa);      \
static void bfa_ ## __mod ## _iocdisable(struct bfa_s *bfa);      \
\
extern struct bfa_module_s hal_mod_ ## __mod;			\
struct bfa_module_s hal_mod_ ## __mod =
#define BFA_CACHELINE_SZ	(256)
struct bfa_module_s ;
struct bfa_s ;
extern bfa_boolean_t bfa_auto_recover;
extern struct bfa_module_s hal_mod_sgpg;
extern struct bfa_module_s hal_mod_fcport;
extern struct bfa_module_s hal_mod_fcxp;
extern struct bfa_module_s hal_mod_lps;
extern struct bfa_module_s hal_mod_uf;
extern struct bfa_module_s hal_mod_rport;
extern struct bfa_module_s hal_mod_fcpim;
