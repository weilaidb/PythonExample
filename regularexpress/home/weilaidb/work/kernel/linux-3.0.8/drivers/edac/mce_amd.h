#define _EDAC_MCE_AMD_H
#define BIT_64(n)			(U64_C(1) << (n))
#define EC(x)				((x) & 0xffff)
#define XEC(x, mask)			(((x) >> 16) & mask)
#define LOW_SYNDROME(x)			(((x) >> 15) & 0xff)
#define HIGH_SYNDROME(x)		(((x) >> 24) & 0xff)
#define TLB_ERROR(x)			(((x) & 0xFFF0) == 0x0010)
#define MEM_ERROR(x)			(((x) & 0xFF00) == 0x0100)
#define BUS_ERROR(x)			(((x) & 0xF800) == 0x0800)
#define TT(x)				(((x) >> 2) & 0x3)
#define TT_MSG(x)			tt_msgs[TT(x)]
#define II(x)				(((x) >> 2) & 0x3)
#define II_MSG(x)			ii_msgs[II(x)]
#define LL(x)				((x) & 0x3)
#define LL_MSG(x)			ll_msgs[LL(x)]
#define TO(x)				(((x) >> 8) & 0x1)
#define TO_MSG(x)			to_msgs[TO(x)]
#define PP(x)				(((x) >> 9) & 0x3)
#define PP_MSG(x)			pp_msgs[PP(x)]
#define R4(x)				(((x) >> 4) & 0xf)
#define R4_MSG(x)			((R4(x) < 9) ?  rrrr_msgs[R4(x)] : "Wrong R4!")
#define NBSH_ERR_CPU_VAL		BIT(24)
enum tt_ids ;
enum ll_ids ;
enum ii_ids ;
enum rrrr_ids ;
extern const char *tt_msgs[];
extern const char *ll_msgs[];
extern const char *rrrr_msgs[];
extern const char *pp_msgs[];
extern const char *to_msgs[];
extern const char *ii_msgs[];
struct amd_decoder_ops ;
void amd_report_gart_errors(bool);
void amd_register_ecc_decoder(void (*f)(int, struct mce *, u32));
void amd_unregister_ecc_decoder(void (*f)(int, struct mce *, u32));
void amd_decode_nb_mce(int, struct mce *, u32);
int amd_decode_mce(struct notifier_block *nb, unsigned long val, void *data);
