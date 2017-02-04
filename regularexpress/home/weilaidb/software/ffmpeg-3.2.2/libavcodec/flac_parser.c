#define FLAC_MAX_SEQUENTIAL_HEADERS 4
#define FLAC_MIN_HEADERS 10
#define FLAC_AVG_FRAME_SIZE 8192
#define FLAC_HEADER_BASE_SCORE        10
#define FLAC_HEADER_CHANGED_PENALTY   7
#define FLAC_HEADER_CRC_FAIL_PENALTY  50
#define FLAC_HEADER_NOT_PENALIZED_YET 100000
#define FLAC_HEADER_NOT_SCORED_YET    -100000
#define MAX_FRAME_HEADER_SIZE 16
typedef struct FLACHeaderMarker  FLACHeaderMarker;
typedef struct FLACParseContext  FLACParseContext;
frame_header_is_valid
flac_fifo_read_wrap
flac_fifo_read
find_headers_search_validate
find_headers_search
find_new_headers
check_header_fi_mismatch
check_header_mismatch
score_header
score_sequences
get_best_header
flac_parse
flac_parse_init
flac_parse_close
AVCodecParser ff_flac_parser = ;
