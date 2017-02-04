#define TEMPLATE_REMATRIX_FLT
#undef TEMPLATE_REMATRIX_FLT
#define TEMPLATE_REMATRIX_DBL
#undef TEMPLATE_REMATRIX_DBL
#define TEMPLATE_REMATRIX_S16
#define TEMPLATE_CLIP
#undef TEMPLATE_CLIP
#undef TEMPLATE_REMATRIX_S16
#define TEMPLATE_REMATRIX_S32
#undef TEMPLATE_REMATRIX_S32
#define FRONT_LEFT             0
#define FRONT_RIGHT            1
#define FRONT_CENTER           2
#define LOW_FREQUENCY          3
#define BACK_LEFT              4
#define BACK_RIGHT             5
#define FRONT_LEFT_OF_CENTER   6
#define FRONT_RIGHT_OF_CENTER  7
#define BACK_CENTER            8
#define SIDE_LEFT              9
#define SIDE_RIGHT             10
#define TOP_CENTER             11
#define TOP_FRONT_LEFT         12
#define TOP_FRONT_CENTER       13
#define TOP_FRONT_RIGHT        14
#define TOP_BACK_LEFT          15
#define TOP_BACK_CENTER        16
#define TOP_BACK_RIGHT         17
#define NUM_NAMED_CHANNELS     18
swr_set_matrix
even
clean_layout
sane_layout
swr_build_matrix
auto_matrix
swri_rematrix_init
swri_rematrix_free
swri_rematrix
