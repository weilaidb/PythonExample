#define bs_write_ue bs_write_ue_big
static const uint8_t num_clock_ts[10] = ;
const static uint8_t avcintra_uuid[] = ;
static void transpose( uint8_t *buf, int w )
static void scaling_list_write( bs_t *s, x264_pps_t *pps, int idx )
void x264_sei_write( bs_t *s, uint8_t *payload, int payload_size, int payload_type )
void x264_sps_init( x264_sps_t *sps, int i_id, x264_param_t *param )
void x264_sps_init_reconfigurable( x264_sps_t *sps, x264_param_t *param )
void x264_sps_write( bs_t *s, x264_sps_t *sps )
void x264_pps_init( x264_pps_t *pps, int i_id, x264_param_t *param, x264_sps_t *sps )
void x264_pps_write( bs_t *s, x264_sps_t *sps, x264_pps_t *pps )
void x264_sei_recovery_point_write( x264_t *h, bs_t *s, int recovery_frame_cnt )
int x264_sei_version_write( x264_t *h, bs_t *s )
void x264_sei_buffering_period_write( x264_t *h, bs_t *s )
void x264_sei_pic_timing_write( x264_t *h, bs_t *s )
void x264_sei_frame_packing_write( x264_t *h, bs_t *s )
void x264_filler_write( x264_t *h, bs_t *s, int filler )
void x264_sei_dec_ref_pic_marking_write( x264_t *h, bs_t *s )
int x264_sei_avcintra_umid_write( x264_t *h, bs_t *s )
int x264_sei_avcintra_vanc_write( x264_t *h, bs_t *s, int len )
const x264_level_t x264_levels[] =
;
#define ERROR(...)\
int x264_validate_levels( x264_t *h, int verbose )
