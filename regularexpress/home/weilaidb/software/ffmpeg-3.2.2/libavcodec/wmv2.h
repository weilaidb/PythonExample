#define AVCODEC_WMV2_H
#define SKIP_TYPE_NONE 0
#define SKIP_TYPE_MPEG 1
#define SKIP_TYPE_ROW  2
#define SKIP_TYPE_COL  3
typedef struct Wmv2Context  Wmv2Context;
ff_wmv2_common_init;
ff_wmv2_decode_mb;
ff_wmv2_encode_picture_header;
ff_wmv2_encode_mb;
ff_wmv2_decode_picture_header;
ff_wmv2_decode_secondary_picture_header;
ff_wmv2_add_mb;
ff_mspel_motion[4],
int motion_x, int motion_y, int h);
wmv2_get_cbp_table_index
