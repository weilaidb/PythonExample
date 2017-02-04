#define AVCODEC_IIRFILTER_H
struct FFIIRFilterCoeffs;
struct FFIIRFilterState;
enum IIRFilterType;
enum IIRFilterMode;
typedef struct FFIIRFilterContext  FFIIRFilterContext;
ff_iir_filter_init;
ff_iir_filter_init_mips;
ff_iir_filter_init_coeffs;
ff_iir_filter_init_state;
ff_iir_filter_free_coeffsp;
ff_iir_filter_free_statep;
ff_iir_filter;
ff_iir_filter_flt;
