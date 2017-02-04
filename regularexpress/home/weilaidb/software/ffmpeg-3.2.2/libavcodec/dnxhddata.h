#define AVCODEC_DNXHDDATA_H
#define DNXHD_INTERLACED   (1<<0)
#define DNXHD_MBAFF        (1<<1)
#define DNXHD_444          (1<<2)
#define DNXHD_HEADER_INITIAL 0x000002800100
#define DNXHD_HEADER_444     0x000002800200
#define DNXHD_VARIABLE 0
typedef struct CIDEntry  CIDEntry;
extern const CIDEntry ff_dnxhd_cid_table[];
ff_dnxhd_get_cid_table;
ff_dnxhd_find_cid;
ff_dnxhd_print_profiles;
ff_dnxhd_check_header_prefix_hr
ff_dnxhd_check_header_prefix
ff_dnxhd_parse_header_prefix
avpriv_dnxhd_get_frame_size;
avpriv_dnxhd_get_interlaced;
#if LIBAVCODEC_VERSION_MAJOR < 58
attribute_deprecated
avpriv_dnxhd_parse_header_prefix;
