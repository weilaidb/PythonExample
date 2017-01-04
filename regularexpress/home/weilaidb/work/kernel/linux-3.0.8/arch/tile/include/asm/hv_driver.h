#define _ASM_TILE_HV_DRIVER_H
struct hv_driver_cb;
typedef void hv_driver_callback_t(struct hv_driver_cb *cb, __hv32 result);
struct hv_driver_cb ;
static inline int
tile_hv_dev_preada(int devhdl, __hv32 flags, __hv32 sgl_len,
HV_SGL sgl[], __hv64 offset,
struct hv_driver_cb *callback)
static inline int
tile_hv_dev_pwritea(int devhdl, __hv32 flags, __hv32 sgl_len,
HV_SGL sgl[], __hv64 offset,
struct hv_driver_cb *callback)
