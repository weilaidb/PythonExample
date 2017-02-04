#define AVCODEC_ROQVIDEO_H
typedef struct roq_cell  roq_cell;
typedef struct roq_qcell  roq_qcell;
typedef struct motion_vect  motion_vect;
struct RoqTempData;
typedef struct RoqContext  RoqContext;
#define RoQ_INFO              0x1001
#define RoQ_QUAD_CODEBOOK     0x1002
#define RoQ_QUAD_VQ           0x1011
#define RoQ_SOUND_MONO        0x1020
#define RoQ_SOUND_STEREO      0x1021
#define RoQ_ID_MOT              0x00
#define RoQ_ID_FCC              0x01
#define RoQ_ID_SLD              0x02
#define RoQ_ID_CCC              0x03
ff_apply_vector_2x2;
ff_apply_vector_4x4;
ff_apply_motion_4x4;
ff_apply_motion_8x8;
