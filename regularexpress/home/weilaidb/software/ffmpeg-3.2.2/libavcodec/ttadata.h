#define AVCODEC_TTADATA_H
#define MAX_ORDER 16
typedef struct TTAFilter  TTAFilter;
typedef struct TTARice  TTARice;
typedef struct TTAChannel  TTAChannel;
extern const uint32_t ff_tta_shift_1[];
extern const uint32_t * const ff_tta_shift_16;
extern const uint8_t ff_tta_filter_configs[];
ff_tta_rice_init;
ff_tta_filter_init;
