static DEFINE_RATELIMIT_STATE(nouveau_ratelimit_state, 3 * HZ, 20);
void
nouveau_bitfield_print(const struct nouveau_bitfield *bf, u32 value)
const struct nouveau_enum *
nouveau_enum_find(const struct nouveau_enum *en, u32 value)
void
nouveau_enum_print(const struct nouveau_enum *en, u32 value)
int
nouveau_ratelimit(void)
