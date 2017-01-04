#define LINKER_MODULES_HEADER ("_" MODULES_HEADER)
static void dload_symbols(struct dload_state *dlthis);
static void dload_data(struct dload_state *dlthis);
static void allocate_sections(struct dload_state *dlthis);
static void string_table_free(struct dload_state *dlthis);
static void symbol_table_free(struct dload_state *dlthis);
static void section_table_free(struct dload_state *dlthis);
static void init_module_handle(struct dload_state *dlthis);
#if BITS_PER_AU > BITS_PER_BYTE
static char *unpack_name(struct dload_state *dlthis, u32 soffset);
static const char cinitname[] = ;
static const char loader_dllview_root[] = ;
static const char readstrm[] = ;
static const char err_alloc[] = ;
static const char tgtalloc[] = ;
static const char initfail[] = ;
static const char dlvwrite[] = ;
static const char iconnect[] = ;
static const char err_checksum[] = ;
void dload_error(struct dload_state *dlthis, const char *errtxt, ...)
#define DL_ERROR(zza, zzb) dload_error(dlthis, zza, zzb)
void dload_syms_error(struct dynamic_loader_sym *syms, const char *errtxt, ...)
int dynamic_load_module(struct dynamic_loader_stream *module,
struct dynamic_loader_sym *syms,
struct dynamic_loader_allocate *alloc,
struct dynamic_loader_initialize *init,
unsigned options, void **mhandle)
int
dynamic_open_module(struct dynamic_loader_stream *module,
struct dynamic_loader_sym *syms,
struct dynamic_loader_allocate *alloc,
struct dynamic_loader_initialize *init,
unsigned options, void **mhandle)
#define COMBINED_HEADER_SIZE (sizeof(struct doff_filehdr_t)+ \
sizeof(struct doff_verify_rec_t))
void dload_headers(struct dload_state *dlthis)
static const char secn_errid[] = ;
void dload_sections(struct dload_state *dlthis)
static void allocate_sections(struct dload_state *dlthis)
static void section_table_free(struct dload_state *dlthis)
static const char stringtbl[] = ;
void dload_strings(struct dload_state *dlthis, bool sec_names_only)
static void string_table_free(struct dload_state *dlthis)
#define DBG_HDR_SIZE (sizeof(struct dll_module) - sizeof(struct dll_sect))
static const char sym_errid[] = ;
#define MY_SYM_BUF_SIZ (BYTE_TO_HOST(IMAGE_PACKET_SIZE)/\
sizeof(struct doff_syment_t))
static void dload_symbols(struct dload_state *dlthis)
static void symbol_table_free(struct dload_state *dlthis)
static const struct ldr_section_info cinit_info_init = ;
static void cload_cinit(struct dload_state *dlthis,
struct image_packet_t *ipacket)
#define MY_RELOC_BUF_SIZ 8
static int relocate_packet(struct dload_state *dlthis,
struct image_packet_t *ipacket,
u32 *checks, bool *tramps_generated)
#define IPH_SIZE (sizeof(struct image_packet_t) - sizeof(u32))
static const char imagepak[] = ;
static void dload_data(struct dload_state *dlthis)
#define SHIFT_COUNT_MASK (3 << LOG_BITS_PER_BYTE)
void dload_reorder(void *data, int dsiz, unsigned int map)
u32 dload_checksum(void *data, unsigned siz)
#if HOST_ENDIANNESS
u32 dload_reverse_checksum(void *data, unsigned siz)
#if (TARGET_AU_BITS > 8) && (TARGET_AU_BITS < 32)
u32 dload_reverse_checksum16(void *data, unsigned siz)
static void swap_words(void *data, unsigned siz, unsigned bitmap)
static char *copy_tgt_strings(void *dstp, void *srcp, unsigned charcount)
static const struct ldr_section_info dllview_info_init = ;
static const struct ldr_section_info dllview_info_init = ;
static void init_module_handle(struct dload_state *dlthis)
int dynamic_unload_module(void *mhandle,
struct dynamic_loader_sym *syms,
struct dynamic_loader_allocate *alloc,
struct dynamic_loader_initialize *init)
#if BITS_PER_AU > BITS_PER_BYTE
static char *unpack_name(struct dload_state *dlthis, u32 soffset)
