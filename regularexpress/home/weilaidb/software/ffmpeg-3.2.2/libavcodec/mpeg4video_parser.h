#define AVCODEC_MPEG4VIDEO_PARSER_H
int ff_mpeg4_find_frame_end(ParseContext *pc, const uint8_t *buf, int buf_size);
