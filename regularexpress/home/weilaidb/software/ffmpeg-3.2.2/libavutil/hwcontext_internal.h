#define AVUTIL_HWCONTEXT_INTERNAL_H
typedef struct HWContextType  HWContextType;
struct AVHWDeviceInternal ;
struct AVHWFramesInternal ;
extern const HWContextType ff_hwcontext_type_cuda;
extern const HWContextType ff_hwcontext_type_dxva2;
extern const HWContextType ff_hwcontext_type_qsv;
extern const HWContextType ff_hwcontext_type_vaapi;
extern const HWContextType ff_hwcontext_type_vdpau;
