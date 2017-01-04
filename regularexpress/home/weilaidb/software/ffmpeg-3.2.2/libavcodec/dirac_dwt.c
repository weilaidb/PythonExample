#define TEMPLATE_8bit
#define TEMPLATE_10bit
#define TEMPLATE_12bit
int ff_spatial_idwt_init(DWTContext *d, DWTPlane *p, enum dwt_type type,
int decomposition_count, int bit_depth)
void ff_spatial_idwt_slice2(DWTContext *d, int y)
