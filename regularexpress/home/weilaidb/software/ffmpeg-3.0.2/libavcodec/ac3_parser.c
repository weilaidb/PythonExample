#define AC3_HEADER_SIZE 7
static const uint8_t eac3_blocks[4] = ;
static const uint8_t center_levels[4] = ;
static const uint8_t surround_levels[4] = ;
int avpriv_ac3_parse_header(GetBitContext *gbc, AC3HeaderInfo **phdr)
static int ac3_sync(uint64_t state, AACAC3ParseContext *hdr_info,
int *need_next_header, int *new_frame_start)
static av_cold int ac3_parse_init(AVCodecParserContext *s1)
AVCodecParser ff_ac3_parser = ;
