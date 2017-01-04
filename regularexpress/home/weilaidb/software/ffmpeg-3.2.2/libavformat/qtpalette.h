#define AVFORMAT_QTPALETTE_H
static const uint8_t ff_qt_default_palette_2[2 * 3] = ;
static const uint8_t ff_qt_default_palette_4[4 * 3] = ;
static const uint8_t ff_qt_default_palette_16[16 * 3] = ;
static const uint8_t ff_qt_default_palette_256[256 * 3] = ;
int ff_get_qtpalette(int codec_id, AVIOContext *pb, uint32_t *palette);
