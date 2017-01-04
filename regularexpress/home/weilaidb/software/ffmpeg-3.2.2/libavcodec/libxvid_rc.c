#if HAVE_IO_H
#if HAVE_UNISTD_H
av_cold int ff_xvid_rate_control_init(MpegEncContext *s)
float ff_xvid_rate_estimate_qscale(MpegEncContext *s, int dry_run)
av_cold void ff_xvid_rate_control_uninit(MpegEncContext *s)
