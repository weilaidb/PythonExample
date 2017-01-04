#define _DLOAD_INTERNAL_
typedef s32 rvalue;
typedef u32 urvalue;
#define REASONABLE_SECTION_LIMIT 100
#define DLOAD_FILL_BSS 0
#define REORDER_MAP(rawmap) ((rawmap) ^ 0x3030303)
#if defined(_BIG_ENDIAN)
#define HOST_BYTE_ORDER(cookedmap) ((cookedmap) ^ 0x3030303)
#define HOST_BYTE_ORDER(cookedmap) (cookedmap)
#if !defined(_BIG_ENDIAN) || TARGET_AU_BITS > 16
#define TARGET_ORDER(cookedmap) (cookedmap)
#elif TARGET_AU_BITS > 8
#define TARGET_ORDER(cookedmap) ((cookedmap) ^ 0x2020202)
#define TARGET_ORDER(cookedmap) ((cookedmap) ^ 0x3030303)
struct my_handle;
struct dbg_mirror_root ;
struct dbg_mirror_list ;
#define VARIABLE_SIZE 1
struct my_handle ;
#define MY_HANDLE_SIZE (sizeof(struct my_handle) -\
sizeof(struct ldr_section_info))
struct local_symbol ;
#define TRAMP_NO_GEN_AVAIL              65535
#define TRAMP_SYM_PREFIX                "__$dbTR__"
#define TRAMP_SECT_NAME                 ".dbTR"
#define TRAMP_SYM_PREFIX_LEN            9
#define TRAMP_SYM_HEX_ASCII_LEN         9
#define GET_CONTAINER(ptr, type, field) ((type *)((unsigned long)ptr -\
(unsigned long)(&((type *)0)->field)))
#define FIELD_OFFSET(type, field)       ((unsigned long)(&((type *)0)->field))
struct tramp_gen_code_hdr ;
struct tramp_img_pkt ;
struct tramp_img_dup_relo ;
struct tramp_img_dup_pkt ;
struct tramp_sym ;
struct tramp_string ;
struct tramp_info ;
enum cinit_mode ;
struct dload_state ;
#define TARGET_BIG_ENDIAN TARGET_ENDIANNESS
#define TARGET_BIG_ENDIAN (dlthis->big_e_target)
extern void dload_error(struct dload_state *dlthis, const char *errtxt, ...);
extern void dload_syms_error(struct dynamic_loader_sym *syms,
const char *errtxt, ...);
extern void dload_headers(struct dload_state *dlthis);
extern void dload_strings(struct dload_state *dlthis, bool sec_names_only);
extern void dload_sections(struct dload_state *dlthis);
extern void dload_reorder(void *data, int dsiz, u32 map);
extern u32 dload_checksum(void *data, unsigned siz);
#if HOST_ENDIANNESS
extern uint32_t dload_reverse_checksum(void *data, unsigned siz);
#if (TARGET_AU_BITS > 8) && (TARGET_AU_BITS < 32)
extern uint32_t dload_reverse_checksum16(void *data, unsigned siz);
extern void dload_relocate(struct dload_state *dlthis, tgt_au_t * data,
struct reloc_record_t *rp, bool * tramps_generated,
bool second_pass);
extern rvalue dload_unpack(struct dload_state *dlthis, tgt_au_t * data,
int fieldsz, int offset, unsigned sgn);
extern int dload_repack(struct dload_state *dlthis, rvalue val, tgt_au_t * data,
int fieldsz, int offset, unsigned sgn);
extern bool dload_tramp_avail(struct dload_state *dlthis,
struct reloc_record_t *rp);
int dload_tramp_generate(struct dload_state *dlthis, s16 secnn,
u32 image_offset, struct image_packet_t *ipacket,
struct reloc_record_t *rp);
extern int dload_tramp_pkt_udpate(struct dload_state *dlthis,
s16 secnn, u32 image_offset,
struct image_packet_t *ipacket);
extern int dload_tramp_finalize(struct dload_state *dlthis);
extern void dload_tramp_cleanup(struct dload_state *dlthis);
