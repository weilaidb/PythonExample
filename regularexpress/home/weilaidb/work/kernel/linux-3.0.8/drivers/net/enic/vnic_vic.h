#define _VNIC_VIC_H_
#define VIC_PROVINFO_CISCO_OUI
#define VIC_PROVINFO_GENERIC_TYPE		0x4
enum vic_generic_prov_tlv_type ;
enum vic_generic_prov_os_type ;
struct vic_provinfo  __packed;
#define VIC_PROVINFO_ADD_TLV(vp, tlvtype, tlvlen, data) \
do  while (0)
#define VIC_PROVINFO_MAX_DATA		1385
#define VIC_PROVINFO_MAX_TLV_DATA (VIC_PROVINFO_MAX_DATA - \
sizeof(struct vic_provinfo))
struct vic_provinfo *vic_provinfo_alloc(gfp_t flags, const u8 *oui,
const u8 type);
void vic_provinfo_free(struct vic_provinfo *vp);
int vic_provinfo_add_tlv(struct vic_provinfo *vp, u16 type, u16 length,
const void *value);
size_t vic_provinfo_size(struct vic_provinfo *vp);
