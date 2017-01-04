#define __NOUVEAU_UTIL_H__
struct nouveau_bitfield ;
struct nouveau_enum ;
void nouveau_bitfield_print(const struct nouveau_bitfield *, u32 value);
void nouveau_enum_print(const struct nouveau_enum *, u32 value);
const struct nouveau_enum *
nouveau_enum_find(const struct nouveau_enum *, u32 value);
int nouveau_ratelimit(void);
