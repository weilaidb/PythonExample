#define _ISIF_H
struct isif_float_8 ;
struct isif_float_16 ;
struct isif_vdfc_entry ;
#define ISIF_VDFC_TABLE_SIZE		8
struct isif_dfc ;
struct isif_horz_bclamp ;
struct isif_vert_bclamp ;
struct isif_black_clamp ;
#define ISIF_CSC_NUM_COEFF	16
struct isif_color_space_conv ;
struct isif_black_comp ;
struct isif_gain ;
#define ISIF_LINEAR_TAB_SIZE	192
struct isif_linearize ;
#define ISIF_RED	0
#define	ISIF_GREEN_RED	1
#define ISIF_GREEN_BLUE	2
#define ISIF_BLUE	3
struct isif_col_pat ;
struct isif_fmtplen ;
struct isif_fmt_cfg ;
struct isif_fmt_addr_ptr ;
struct isif_fmtpgm_ap ;
struct isif_data_formatter ;
struct isif_df_csc ;
struct isif_gain_offsets_adj ;
struct isif_cul ;
struct isif_compress ;
struct isif_config_params_raw ;
struct isif_ycbcr_config ;
enum isif_data_msb ;
enum isif_cfa_pattern ;
struct isif_params_raw ;
enum isif_data_pack ;
#define ISIF_WIN_NTSC
#define ISIF_WIN_VGA
