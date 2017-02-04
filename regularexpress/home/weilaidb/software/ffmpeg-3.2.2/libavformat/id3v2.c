#if CONFIG_ZLIB
const AVMetadataConv ff_id3v2_34_metadata_conv[] = ;
const AVMetadataConv ff_id3v2_4_metadata_conv[] = ;
static const AVMetadataConv id3v2_2_metadata_conv[] = ;
const char ff_id3v2_tags[][4] = ;
const char ff_id3v2_4_tags[][4] = ;
const char ff_id3v2_3_tags[][4] = ;
const char *ff_id3v2_picture_types[21] = ;
const CodecMime ff_id3v2_mime_tags[] = ;
ff_id3v2_match
ff_id3v2_tag_len
get_size
size_to_syncsafe
is_tag
check_tag
free_geobtag
decode_str
read_ttag
read_uslt
read_comment
read_geobtag
is_number
*get_date_tag
merge_date
free_apic
rstrip_spaces
read_apic
read_chapter
free_priv
read_priv
typedef struct ID3v2EMFunc  ID3v2EMFunc;
static const ID3v2EMFunc id3v2_extra_meta_funcs[] = ;
*get_extra_meta_func
id3v2_parse
id3v2_read_internal
ff_id3v2_read_dict
ff_id3v2_read
ff_id3v2_free_extra_meta
ff_id3v2_parse_apic
