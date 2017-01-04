#define _DOFF_H
#define BYTE_RESHUFFLE_VALUE 0x00010203
struct doff_filehdr_t ;
#define  DF_LITTLE   0x100
#define  DF_BIG      0x200
#define  DF_BYTE_ORDER (DF_LITTLE | DF_BIG)
#define TMS470_ID   0x97
#define LEAD_ID     0x98
#define TMS32060_ID 0x99
#define LEAD3_ID    0x9c
#if TMS32060
#define TARGET_ID   TMS32060_ID
struct doff_verify_rec_t ;
struct doff_scnhdr_t ;
struct doff_syment_t ;
#define  DN_UNDEF  0
#define  DN_ABS    (-1)
#define DN_EXT     2
#define DN_STATLAB 20
#define DN_EXTLAB  21
#define IMAGE_PACKET_SIZE 1024
struct image_packet_t ;
struct reloc_record_t ;
#define TYPE      _u_reloc._r_sym._type
#define UVAL      _u_reloc._r_uval._uval
#define SYMNDX    _u_reloc._r_sym._symndx
#define OFFSET    _u_reloc._r_field._offset
#define FIELDSZ   _u_reloc._r_field._fieldsz
#define WORDSZ    _u_reloc._r_field._wordsz
#define R_DISP      _u_reloc._r_sym._disp
#define         DOFF0                       0
#define         DOFF_ALIGN(addr)            (((addr) + 3) & ~3UL)
#define DS_SECTION_TYPE_MASK	0xF
#define DS_ALLOCATE_MASK            0x10
#define DS_DOWNLOAD_MASK            0x20
#define DS_ALIGNMENT_SHIFT	8
static inline bool dload_check_type(struct doff_scnhdr_t *sptr, u32 flag)
static inline bool ds_needs_allocation(struct doff_scnhdr_t *sptr)
static inline bool ds_needs_download(struct doff_scnhdr_t *sptr)
static inline int ds_alignment(u16 ds_flags)
