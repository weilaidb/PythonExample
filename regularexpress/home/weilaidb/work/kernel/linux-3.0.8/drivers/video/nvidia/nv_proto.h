#define __NV_PROTO_H__
int NVCommonSetup(struct fb_info *info);
void NVWriteCrtc(struct nvidia_par *par, u8 index, u8 value);
u8 NVReadCrtc(struct nvidia_par *par, u8 index);
void NVWriteGr(struct nvidia_par *par, u8 index, u8 value);
u8 NVReadGr(struct nvidia_par *par, u8 index);
void NVWriteSeq(struct nvidia_par *par, u8 index, u8 value);
u8 NVReadSeq(struct nvidia_par *par, u8 index);
void NVWriteAttr(struct nvidia_par *par, u8 index, u8 value);
u8 NVReadAttr(struct nvidia_par *par, u8 index);
void NVWriteMiscOut(struct nvidia_par *par, u8 value);
u8 NVReadMiscOut(struct nvidia_par *par);
void NVWriteDacMask(struct nvidia_par *par, u8 value);
void NVWriteDacReadAddr(struct nvidia_par *par, u8 value);
void NVWriteDacWriteAddr(struct nvidia_par *par, u8 value);
void NVWriteDacData(struct nvidia_par *par, u8 value);
u8 NVReadDacData(struct nvidia_par *par);
void NVCalcStateExt(struct nvidia_par *par, struct _riva_hw_state *,
int, int, int, int, int, int);
void NVLoadStateExt(struct nvidia_par *par, struct _riva_hw_state *);
void NVUnloadStateExt(struct nvidia_par *par, struct _riva_hw_state *);
void NVSetStartAddress(struct nvidia_par *par, u32);
int NVShowHideCursor(struct nvidia_par *par, int);
void NVLockUnlock(struct nvidia_par *par, int);
void nvidia_create_i2c_busses(struct nvidia_par *par);
void nvidia_delete_i2c_busses(struct nvidia_par *par);
int nvidia_probe_i2c_connector(struct fb_info *info, int conn,
u8 ** out_edid);
#define nvidia_create_i2c_busses(...)
#define nvidia_delete_i2c_busses(...)
#define nvidia_probe_i2c_connector(p, c, edid) (-1)
int nvidia_probe_of_connector(struct fb_info *info, int conn,
u8 ** out_edid);
static inline int nvidia_probe_of_connector(struct fb_info *info, int conn,
u8 ** out_edid)
extern void NVResetGraphics(struct fb_info *info);
extern void nvidiafb_copyarea(struct fb_info *info,
const struct fb_copyarea *region);
extern void nvidiafb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect);
extern void nvidiafb_imageblit(struct fb_info *info,
const struct fb_image *image);
extern int nvidiafb_sync(struct fb_info *info);
extern void nvidia_bl_init(struct nvidia_par *par);
extern void nvidia_bl_exit(struct nvidia_par *par);
static inline void nvidia_bl_init(struct nvidia_par *par)
static inline void nvidia_bl_exit(struct nvidia_par *par)
