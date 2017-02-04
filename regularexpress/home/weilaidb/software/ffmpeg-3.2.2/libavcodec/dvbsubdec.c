#define DVBSUB_PAGE_SEGMENT     0x10
#define DVBSUB_REGION_SEGMENT   0x11
#define DVBSUB_CLUT_SEGMENT     0x12
#define DVBSUB_OBJECT_SEGMENT   0x13
#define DVBSUB_DISPLAYDEFINITION_SEGMENT 0x14
#define DVBSUB_DISPLAY_SEGMENT  0x80
#define cm (ff_crop_tab + MAX_NEG_CROP)
png_save2
RGBA (((unsigned)(a) << 24) | ((r) << 16) | ((g) << 8) | (b))
typedef struct DVBSubCLUT  DVBSubCLUT;
static DVBSubCLUT default_clut;
typedef struct DVBSubObjectDisplay  DVBSubObjectDisplay;
typedef struct DVBSubObject  DVBSubObject;
typedef struct DVBSubRegionDisplay  DVBSubRegionDisplay;
typedef struct DVBSubRegion  DVBSubRegion;
typedef struct DVBSubDisplayDefinition  DVBSubDisplayDefinition;
typedef struct DVBSubContext  DVBSubContext;
get_object
get_clut
get_region
delete_region_display_list
delete_cluts
delete_objects
delete_regions
dvbsub_init_decoder
dvbsub_close_decoder
dvbsub_read_2bit_string
dvbsub_read_4bit_string
dvbsub_read_8bit_string
compute_default_clut
save_subtitle_set
dvbsub_parse_pixel_data_block
dvbsub_parse_object_segment
dvbsub_parse_clut_segment
dvbsub_parse_region_segment
dvbsub_parse_page_segment
save_display_set
dvbsub_parse_display_definition_segment
dvbsub_display_end_segment
dvbsub_decode
#define DS AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_SUBTITLE_PARAM
static const AVOption options[] = ;
static const AVClass dvbsubdec_class = ;
AVCodec ff_dvbsub_decoder = ;
