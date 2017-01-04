#define _DM355_CCDC_H
enum ccdc_sample_length ;
enum ccdc_sample_line ;
enum ccdc_gamma_width ;
enum ccdc_colpats ;
struct ccdc_col_pat ;
enum ccdc_datasft ;
enum ccdc_data_size ;
enum ccdc_mfilt1 ;
enum ccdc_mfilt2 ;
struct ccdc_a_law ;
struct ccdc_black_clamp ;
struct ccdc_black_compensation ;
struct ccdc_float ;
#define CCDC_CSC_COEFF_TABLE_SIZE	16
struct ccdc_csc ;
enum ccdc_vdf_csl ;
enum ccdc_vdf_cuda ;
enum ccdc_dfc_mwr ;
enum ccdc_dfc_mrd ;
enum ccdc_dfc_ma_rst ;
enum ccdc_dfc_mclr ;
struct ccdc_dft_corr_ctl ;
struct ccdc_dft_corr_mem_ctl ;
#define CCDC_DFT_TABLE_SIZE	16
struct ccdc_vertical_dft ;
struct ccdc_data_offset ;
struct ccdc_config_params_raw ;
#define CCDC_WIN_PAL
#define CCDC_WIN_VGA
struct ccdc_params_ycbcr ;
struct ccdc_gain ;
struct ccdc_params_raw ;
