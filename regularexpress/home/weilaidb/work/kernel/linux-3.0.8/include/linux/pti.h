#define PTI_H_
#define PTI_LASTDWORD_DTS	0x30
struct pti_masterchannel ;
void pti_writedata(struct pti_masterchannel *mc, u8 *buf, int count);
struct pti_masterchannel *pti_request_masterchannel(u8 type);
void pti_release_masterchannel(struct pti_masterchannel *mc);
