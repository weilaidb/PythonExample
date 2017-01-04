#define AVFILTER_VOLUME_H
enum PrecisionType ;
enum EvalMode ;
enum VolumeVarName ;
enum ReplayGainType ;
typedef struct VolumeContext  VolumeContext;
void ff_volume_init_x86(VolumeContext *vol);
