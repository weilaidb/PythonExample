#define _VBEXT_
struct DWORDREGS ;
struct WORDREGS ;
struct BYTEREGS ;
typedef union _X86_REGS  X86_REGS, *PX86_REGS;
extern void XGI_GetSenseStatus(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo);
extern unsigned short XGINew_SenseLCD(struct xgi_hw_device_info *,
struct vb_device_info *pVBInfo);
