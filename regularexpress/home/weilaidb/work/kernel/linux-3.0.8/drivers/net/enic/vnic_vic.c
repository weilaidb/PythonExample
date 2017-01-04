struct vic_provinfo *vic_provinfo_alloc(gfp_t flags, const u8 *oui,
const u8 type)
void vic_provinfo_free(struct vic_provinfo *vp)
int vic_provinfo_add_tlv(struct vic_provinfo *vp, u16 type, u16 length,
const void *value)
size_t vic_provinfo_size(struct vic_provinfo *vp)
