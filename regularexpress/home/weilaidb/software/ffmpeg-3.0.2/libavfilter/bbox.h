#define AVFILTER_BBOX_H
typedef struct  FFBoundingBox;
int ff_calculate_bounding_box(FFBoundingBox *bbox,
const uint8_t *data, int linesize,
int w, int h, int min_val);
