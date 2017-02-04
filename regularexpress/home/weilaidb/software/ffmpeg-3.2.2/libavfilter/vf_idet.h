#define AVFILTER_IDET_H
#define HIST_SIZE 4
typedef int (*ff_idet_filter_func)(const uint8_t *a, const uint8_t *b, const uint8_t *c, int w);
typedef enum  Type;
typedef enum  RepeatedField;
typedef struct  IDETContext;
ff_idet_init_x86;
ff_idet_filter_line_c;
ff_idet_filter_line_c_16bit;
