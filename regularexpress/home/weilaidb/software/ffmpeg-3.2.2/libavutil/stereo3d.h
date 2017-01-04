#define AVUTIL_STEREO3D_H
enum AVStereo3DType ;
#define AV_STEREO3D_FLAG_INVERT     (1 << 0)
typedef struct AVStereo3D  AVStereo3D;
AVStereo3D *av_stereo3d_alloc(void);
AVStereo3D *av_stereo3d_create_side_data(AVFrame *frame);
const char *av_stereo3d_type_name(unsigned int type);
int av_stereo3d_from_name(const char *name);
