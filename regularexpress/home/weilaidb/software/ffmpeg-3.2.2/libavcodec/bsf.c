struct AVBSFInternal ;
av_bsf_free
*bsf_child_next
static const AVClass bsf_class = ;
*av_bsf_get_class
av_bsf_alloc
av_bsf_init
av_bsf_send_packet
av_bsf_receive_packet
ff_bsf_get_packet
ff_bsf_get_packet_ref
typedef struct BSFListContext  BSFListContext;
bsf_list_init
bsf_list_filter
bsf_list_close
*bsf_list_item_name
static const AVClass bsf_list_class = ;
const AVBitStreamFilter ff_list_bsf = ;
struct AVBSFList ;
*av_bsf_list_alloc
av_bsf_list_free
av_bsf_list_append
av_bsf_list_append2
av_bsf_list_finalize
bsf_parse_single
av_bsf_list_parse_str
av_bsf_get_null_filter
