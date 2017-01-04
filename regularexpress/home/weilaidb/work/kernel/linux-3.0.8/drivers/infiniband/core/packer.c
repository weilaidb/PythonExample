static u64 value_read(int offset, int size, void *structure)
void ib_pack(const struct ib_field        *desc,
int                           desc_len,
void                         *structure,
void                         *buf)
EXPORT_SYMBOL(ib_pack);
static void value_write(int offset, int size, u64 val, void *structure)
void ib_unpack(const struct ib_field        *desc,
int                           desc_len,
void                         *buf,
void                         *structure)
EXPORT_SYMBOL(ib_unpack);
