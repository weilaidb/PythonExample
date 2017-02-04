typedef struct FFIIRFilterCoeffs  FFIIRFilterCoeffs;
typedef struct FFIIRFilterState  FFIIRFilterState;
#define MAXORDER 30
butterworth_init_coeffs
biquad_init_coeffs
*ff_iir_filter_init_coeffs
*ff_iir_filter_init_state
CONV_S16 dest = av_clip_int16(lrintf(source));
CONV_FLT dest = source;
FILTER_BW_O4_1             \
in = *src0    * c->gain  +                          \
c->cy[0] * s->x[i0] +                          \
c->cy[1] * s->x[i1] +                          \
c->cy[2] * s->x[i2] +                          \
c->cy[3] * s->x[i3];                           \
res = (s->x[i0] + in)       * 1 +                   \
(s->x[i1] + s->x[i3]) * 4 +                   \
s->x[i2]             * 6;                    \
CONV_ ## fmt(*dst0, res)                            \
s->x[i0] = in;                                      \
src0    += sstep;                                   \
dst0    += dstep;
FILTER_BW_O4
FILTER_DIRECT_FORM_II
FILTER_O2
ff_iir_filter
ff_iir_filter_flt
ff_iir_filter_free_statep
ff_iir_filter_free_coeffsp
ff_iir_filter_init
