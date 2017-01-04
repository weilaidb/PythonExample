#define __PVRUSB2_DVB_H__
#define PVR2_DVB_BUFFER_COUNT 32
#define PVR2_DVB_BUFFER_SIZE PAGE_ALIGN(0x4000)
struct pvr2_dvb_adapter ;
struct pvr2_dvb_props ;
struct pvr2_dvb_adapter *pvr2_dvb_create(struct pvr2_context *pvr);
