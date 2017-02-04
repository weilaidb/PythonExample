typedef struct  Super2xSaIContext;
GET_RESULT ((A != C || A != D) - (B != C || B != D))
INTERPOLATE (((A & hi_pixel_mask) >> 1) + ((B & hi_pixel_mask) >> 1) + (A & B & lo_pixel_mask))
Q_INTERPOLATE ((A & q_hi_pixel_mask) >> 2) + ((B & q_hi_pixel_mask) >> 2) + ((C & q_hi_pixel_mask) >> 2) + ((D & q_hi_pixel_mask) >> 2) \
+ ((((A & q_lo_pixel_mask) + (B & q_lo_pixel_mask) + (C & q_lo_pixel_mask) + (D & q_lo_pixel_mask)) >> 2) & q_lo_pixel_mask)
super2xsai
query_formats
config_input
config_output
filter_frame
static const AVFilterPad super2xsai_inputs[] = ;
static const AVFilterPad super2xsai_outputs[] = ;
AVFilter ff_vf_super2xsai = ;
