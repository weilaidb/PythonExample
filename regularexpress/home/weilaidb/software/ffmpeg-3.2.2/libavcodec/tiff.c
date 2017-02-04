#if CONFIG_ZLIB
#if CONFIG_LZMA
#define LZMA_API_STATIC
typedef struct TiffContext  TiffContext;
free_geotags
RET_GEOKEY\
if (key >= TIFF_##TYPE##_KEY_ID_OFFSET &&\
key - TIFF_##TYPE##_KEY_ID_OFFSET < FF_ARRAY_ELEMS(ff_tiff_##array##_name_type_map))\
return ff_tiff_##array##_name_type_map[key - TIFF_##TYPE##_KEY_ID_OFFSET].element;
*get_geokey_name
get_geokey_type
cmp_id_key
*search_keyval
*get_geokey_val
*doubles2str
add_metadata
horizontal_fill
deinvert_buffer
unpack_yuv
#if CONFIG_ZLIB
tiff_uncompress
tiff_unpack_zlib
#if CONFIG_LZMA
tiff_uncompress_lzma
tiff_unpack_lzma
tiff_unpack_fax
tiff_unpack_strip
init_image
set_sar
tiff_decode_tag
decode_frame
tiff_init
tiff_end
AVCodec ff_tiff_decoder = ;
