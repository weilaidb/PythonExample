static const char readstrm[] = ;
static const char seek[] = ;
static const char isiz[] = ;
static const char err_checksum[] = ;
static const char err_reloc[] = ;
#if BITS_PER_AU > BITS_PER_BYTE
static const char err_alloc[] = ;
static const char stbl[] = ;
#if BITS_PER_AU > BITS_PER_BYTE
static char *unpack_sec_name(struct dload_state *dlthis, u32 soffset, char *dst)
static void expand_sec_names(struct dload_state *dlthis)
void *dload_module_open(struct dynamic_loader_stream *module,
struct dynamic_loader_sym *syms)
int dload_get_section_info(void *minfo, const char *section_name,
const struct ldr_section_info **const section_info)
#define IPH_SIZE (sizeof(struct image_packet_t) - sizeof(u32))
int dload_get_section(void *minfo,
const struct ldr_section_info *section_info,
void *section_data)
void dload_module_close(void *minfo)
