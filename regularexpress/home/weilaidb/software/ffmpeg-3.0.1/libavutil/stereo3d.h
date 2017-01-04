#define AVUTIL_STEREO3D_H
enum AVStereo3DType ;
#define AV_STEREO3D_FLAG_INVERT     (1 << 0)
typedef struct AVStereo3D  AVStereo3D;
AVStereo3D *av_stereo3d_alloc(void);
AVStereo3D *av_stereo3d_create_side_data(AVFrame *frame);
