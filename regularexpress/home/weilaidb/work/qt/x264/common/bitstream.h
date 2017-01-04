#define X264_BS_H
typedef struct
vlc_t;
typedef struct
vlc_large_t;
typedef struct bs_s
bs_t;
typedef struct
x264_run_level_t;
extern const vlc_t x264_coeff0_token[6];
extern const vlc_t x264_coeff_token[6][16][4];
extern const vlc_t x264_total_zeros[15][16];
extern const vlc_t x264_total_zeros_2x2_dc[3][4];
extern const vlc_t x264_total_zeros_2x4_dc[7][8];
typedef struct
x264_bitstream_function_t;
void x264_bitstream_init( int cpu, x264_bitstream_function_t *pf );
#define LEVEL_TABLE_SIZE 128
extern vlc_large_t x264_level_token[7][LEVEL_TABLE_SIZE];
extern uint32_t x264_run_before[1<<16];
static inline void bs_init( bs_t *s, void *p_data, int i_data )
static inline int bs_pos( bs_t *s )
static inline void bs_flush( bs_t *s )
static inline void bs_realign( bs_t *s )
static inline void bs_write( bs_t *s, int i_count, uint32_t i_bits )
static inline void bs_write32( bs_t *s, uint32_t i_bits )
static inline void bs_write1( bs_t *s, uint32_t i_bit )
static inline void bs_align_0( bs_t *s )
static inline void bs_align_1( bs_t *s )
static inline void bs_align_10( bs_t *s )
static const uint8_t x264_ue_size_tab[256] =
;
static inline void bs_write_ue_big( bs_t *s, unsigned int val )
static inline void bs_write_ue( bs_t *s, int val )
static inline void bs_write_se( bs_t *s, int val )
static inline void bs_write_te( bs_t *s, int x, int val )
static inline void bs_rbsp_trailing( bs_t *s )
static ALWAYS_INLINE int bs_size_ue( unsigned int val )
static ALWAYS_INLINE int bs_size_ue_big( unsigned int val )
static ALWAYS_INLINE int bs_size_se( int val )
static ALWAYS_INLINE int bs_size_te( int x, int val )
