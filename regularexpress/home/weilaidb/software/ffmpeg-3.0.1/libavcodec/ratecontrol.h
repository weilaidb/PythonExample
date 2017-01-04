#define AVCODEC_RATECONTROL_H
typedef struct Predictor Predictor;
typedef struct RateControlEntryRateControlEntry;
typedef struct RateControlContextRateControlContext;
struct MpegEncContext;
int ff_rate_control_init(struct MpegEncContext *s);
float ff_rate_estimate_qscale(struct MpegEncContext *s, int dry_run);
void ff_write_pass1_stats(struct MpegEncContext *s);
void ff_rate_control_uninit(struct MpegEncContext *s);
int ff_vbv_update(struct MpegEncContext *s, int frame_size);
void ff_get_2pass_fcode(struct MpegEncContext *s);
int ff_xvid_rate_control_init(struct MpegEncContext *s);
void ff_xvid_rate_control_uninit(struct MpegEncContext *s);
float ff_xvid_rate_estimate_qscale(struct MpegEncContext *s, int dry_run);
