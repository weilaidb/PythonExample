static struct amd_decoder_ops *fam_ops;
static u8 xec_mask	 = 0xf;
static u8 nb_err_cpumask = 0xf;
static bool report_gart_errors;
static void (*nb_bus_decoder)(int node_id, struct mce *m, u32 nbcfg);
void amd_report_gart_errors(bool v)
EXPORT_SYMBOL_GPL(amd_report_gart_errors);
void amd_register_ecc_decoder(void (*f)(int, struct mce *, u32))
EXPORT_SYMBOL_GPL(amd_register_ecc_decoder);
void amd_unregister_ecc_decoder(void (*f)(int, struct mce *, u32))
EXPORT_SYMBOL_GPL(amd_unregister_ecc_decoder);
const char *tt_msgs[] = ;
EXPORT_SYMBOL_GPL(tt_msgs);
const char *ll_msgs[] = ;
EXPORT_SYMBOL_GPL(ll_msgs);
const char *rrrr_msgs[] = ;
EXPORT_SYMBOL_GPL(rrrr_msgs);
const char *pp_msgs[] = ;
EXPORT_SYMBOL_GPL(pp_msgs);
const char *to_msgs[] = ;
EXPORT_SYMBOL_GPL(to_msgs);
const char *ii_msgs[] = ;
EXPORT_SYMBOL_GPL(ii_msgs);
static const char *f10h_nb_mce_desc[] = ;
static const char * const f15h_ic_mce_desc[] = ;
static const char * const f15h_cu_mce_desc[] = ;
static const char * const fr_ex_mce_desc[] = ;
static bool f12h_dc_mce(u16 ec, u8 xec)
static bool f10h_dc_mce(u16 ec, u8 xec)
static bool k8_dc_mce(u16 ec, u8 xec)
static bool f14h_dc_mce(u16 ec, u8 xec)
static bool f15h_dc_mce(u16 ec, u8 xec)
static void amd_decode_dc_mce(struct mce *m)
static bool k8_ic_mce(u16 ec, u8 xec)
static bool f14h_ic_mce(u16 ec, u8 xec)
static bool f15h_ic_mce(u16 ec, u8 xec)
static void amd_decode_ic_mce(struct mce *m)
static void amd_decode_bu_mce(struct mce *m)
static void amd_decode_cu_mce(struct mce *m)
static void amd_decode_ls_mce(struct mce *m)
static bool k8_nb_mce(u16 ec, u8 xec)
static bool f10h_nb_mce(u16 ec, u8 xec)
static bool nb_noop_mce(u16 ec, u8 xec)
void amd_decode_nb_mce(int node_id, struct mce *m, u32 nbcfg)
EXPORT_SYMBOL_GPL(amd_decode_nb_mce);
static void amd_decode_fr_mce(struct mce *m)
static void amd_decode_fp_mce(struct mce *m)
static inline void amd_decode_err_code(u16 ec)
static bool amd_filter_mce(struct mce *m)
int amd_decode_mce(struct notifier_block *nb, unsigned long val, void *data)
EXPORT_SYMBOL_GPL(amd_decode_mce);
static struct notifier_block amd_mce_dec_nb = ;
static int __init mce_amd_init(void)
early_initcall(mce_amd_init);
static void __exit mce_amd_exit(void)
MODULE_DESCRIPTION("AMD MCE decoder");
MODULE_ALIAS("edac-mce-amd");
MODULE_LICENSE("GPL");
module_exit(mce_amd_exit);
