#define AVCODEC_RV34VLC_H
#define NUM_INTRA_TABLES 5
#define NUM_INTER_TABLES 7
#define CBPPAT_VLC_SIZE   1296
#define CBP_VLC_SIZE        16
#define FIRSTBLK_VLC_SIZE  864
#define OTHERBLK_VLC_SIZE  108
#define COEFF_VLC_SIZE      32
#define MAX_VLC_SIZE      1296
static const uint8_t rv34_table_intra_cbppat[NUM_INTRA_TABLES][2][CBPPAT_VLC_SIZE] = ;
static const uint8_t rv34_table_intra_cbp[NUM_INTRA_TABLES][8][CBP_VLC_SIZE] = ;
static const uint8_t rv34_table_intra_firstpat[NUM_INTRA_TABLES][4][FIRSTBLK_VLC_SIZE] = ;
static const uint8_t rv34_table_intra_secondpat[NUM_INTRA_TABLES][2][OTHERBLK_VLC_SIZE] = ;
static const uint8_t rv34_table_intra_thirdpat[NUM_INTRA_TABLES][2][OTHERBLK_VLC_SIZE] = ;
static const uint8_t rv34_intra_coeff[NUM_INTRA_TABLES][COEFF_VLC_SIZE] = ;
static const uint8_t rv34_inter_cbppat[NUM_INTER_TABLES][CBPPAT_VLC_SIZE] = ;
static const uint8_t rv34_inter_cbp[NUM_INTER_TABLES][4][CBP_VLC_SIZE] = ;
static const uint8_t rv34_table_inter_firstpat[NUM_INTER_TABLES][2][FIRSTBLK_VLC_SIZE] = ;
static const uint8_t rv34_table_inter_secondpat[NUM_INTER_TABLES][2][OTHERBLK_VLC_SIZE] = ;
static const uint8_t rv34_table_inter_thirdpat[NUM_INTER_TABLES][2][OTHERBLK_VLC_SIZE] = ;
static const uint8_t rv34_inter_coeff[NUM_INTER_TABLES][COEFF_VLC_SIZE] = ;
