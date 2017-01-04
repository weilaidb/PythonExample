#define AVFORMAT_FLAC_PICTURE_H
#define RETURN_ERROR(code) do  while (0)
int ff_flac_parse_picture(AVFormatContext *s, uint8_t *buf, int buf_size);
