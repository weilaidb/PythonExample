const char hex_asc[] = "0123456789abcdef";
EXPORT_SYMBOL(hex_asc);
int hex_to_bin(char ch)
EXPORT_SYMBOL(hex_to_bin);
void hex2bin(u8 *dst, const char *src, size_t count)
EXPORT_SYMBOL(hex2bin);
void hex_dump_to_buffer(const void *buf, size_t len, int rowsize,
int groupsize, char *linebuf, size_t linebuflen,
bool ascii)
EXPORT_SYMBOL(hex_dump_to_buffer);
void print_hex_dump(const char *level, const char *prefix_str, int prefix_type,
int rowsize, int groupsize,
const void *buf, size_t len, bool ascii)
EXPORT_SYMBOL(print_hex_dump);
void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
const void *buf, size_t len)
EXPORT_SYMBOL(print_hex_dump_bytes);
