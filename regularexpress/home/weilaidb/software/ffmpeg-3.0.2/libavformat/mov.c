#if CONFIG_ZLIB
typedef struct MOVParseTableEntry  MOVParseTableEntry;
static int mov_read_default(MOVContext *c, AVIOContext *pb, MOVAtom atom);
static int mov_read_mfra(MOVContext *c, AVIOContext *f);
static int mov_metadata_track_or_disc_number(MOVContext *c, AVIOContext *pb,
unsigned len, const char *key)
static int mov_metadata_int8_bypass_padding(MOVContext *c, AVIOContext *pb,
unsigned len, const char *key)
static int mov_metadata_int8_no_padding(MOVContext *c, AVIOContext *pb,
unsigned len, const char *key)
static int mov_metadata_gnre(MOVContext *c, AVIOContext *pb,
unsigned len, const char *key)
static const uint32_t mac_to_unicode[128] = ;
static int mov_read_mac_string(MOVContext *c, AVIOContext *pb, int len,
char *dst, int dstlen)
static int mov_read_covr(MOVContext *c, AVIOContext *pb, int type, int len)
static int mov_metadata_loci(MOVContext *c, AVIOContext *pb, unsigned len)
static int mov_read_udta_string(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_chpl(MOVContext *c, AVIOContext *pb, MOVAtom atom)
#define MIN_DATA_ENTRY_BOX_SIZE 12
static int mov_read_dref(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_hdlr(MOVContext *c, AVIOContext *pb, MOVAtom atom)
int ff_mov_read_esds(AVFormatContext *fc, AVIOContext *pb)
static int mov_read_esds(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_dac3(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_dec3(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_ddts(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_chan(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_wfex(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_pasp(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_mdat(MOVContext *c, AVIOContext *pb, MOVAtom atom)
#define DRM_BLOB_SIZE 56
static int mov_read_adrm(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int aax_filter(uint8_t *input, int size, MOVContext *c)
static int mov_read_ftyp(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_moov(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_moof(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static void mov_metadata_creation_time(AVDictionary **metadata, int64_t time)
static int mov_read_mdhd(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_mvhd(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_enda(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_colr(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_fiel(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_realloc_extradata(AVCodecContext *codec, MOVAtom atom)
static int64_t mov_read_atom_into_extradata(MOVContext *c, AVIOContext *pb, MOVAtom atom,
AVCodecContext *codec, uint8_t *buf)
static int mov_read_extradata(MOVContext *c, AVIOContext *pb, MOVAtom atom,
enum AVCodecID codec_id)
static int mov_read_alac(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_avss(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_jp2h(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_dpxe(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_avid(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_targa_y216(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_ares(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_aclr(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_svq3(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_wave(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_glbl(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_dvc1(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_strf(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_stco(MOVContext *c, AVIOContext *pb, MOVAtom atom)
enum AVCodecID ff_mov_get_lpcm_codec_id(int bps, int flags)
static int mov_codec_id(AVStream *st, uint32_t format)
static void mov_parse_stsd_video(MOVContext *c, AVIOContext *pb,
AVStream *st, MOVStreamContext *sc)
static void mov_parse_stsd_audio(MOVContext *c, AVIOContext *pb,
AVStream *st, MOVStreamContext *sc)
static void mov_parse_stsd_subtitle(MOVContext *c, AVIOContext *pb,
AVStream *st, MOVStreamContext *sc,
int64_t size)
static uint32_t yuv_to_rgba(uint32_t ycbcr)
static int mov_rewrite_dvd_sub_extradata(AVStream *st)
static int mov_parse_stsd_data(MOVContext *c, AVIOContext *pb,
AVStream *st, MOVStreamContext *sc,
int64_t size)
static int mov_finalize_stsd_codec(MOVContext *c, AVIOContext *pb,
AVStream *st, MOVStreamContext *sc)
static int mov_skip_multiple_stsd(MOVContext *c, AVIOContext *pb,
int codec_tag, int format,
int64_t size)
int ff_mov_read_stsd_entries(MOVContext *c, AVIOContext *pb, int entries)
static int mov_read_stsd(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_stsc(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_stps(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_stss(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_stsz(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_stts(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static void mov_update_dts_shift(MOVStreamContext *sc, int duration)
static int mov_read_ctts(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_sbgp(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static void mov_build_index(MOVContext *mov, AVStream *st)
static int test_same_origin(const char *src, const char *ref)
static int mov_open_dref(MOVContext *c, AVIOContext **pb, const char *src, MOVDref *ref)
static void fix_timescale(MOVContext *c, MOVStreamContext *sc)
static int mov_read_trak(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_ilst(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_keys(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_custom_2plus(MOVContext *c, AVIOContext *pb, int size)
static int mov_read_custom(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_meta(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_tkhd(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_tfhd(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_chap(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_trex(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_tfdt(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_trun(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_sidx(MOVContext *c, AVIOContext *pb, MOVAtom atom)
if (avio_rb32(pb) != 0)
atom.type = avio_rl32(pb);
atom.size -= 8;
if (atom.type != MKTAG('m','d','a','t'))
err = mov_read_mdat(c, pb, atom);
return err;
}
static int mov_read_cmov(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_elst(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_tmcd(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_uuid(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_free(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_frma(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_read_senc(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int cenc_filter(MOVContext *c, MOVStreamContext *sc, uint8_t *input, int size)
static const MOVParseTableEntry mov_default_parse_table[] = ;
static int mov_read_default(MOVContext *c, AVIOContext *pb, MOVAtom atom)
static int mov_probe(AVProbeData *p)
static void mov_read_chapters(AVFormatContext *s)
static int parse_timecode_in_framenum_format(AVFormatContext *s, AVStream *st,
uint32_t value, int flags)
static int mov_read_timecode_track(AVFormatContext *s, AVStream *st)
static int mov_read_close(AVFormatContext *s)
static int tmcd_is_referenced(AVFormatContext *s, int tmcd_id)
static void export_orphan_timecode(AVFormatContext *s)
static int read_tfra(MOVContext *mov, AVIOContext *f)
static int mov_read_mfra(MOVContext *c, AVIOContext *f)
static int mov_read_header(AVFormatContext *s)
static AVIndexEntry *mov_find_next_sample(AVFormatContext *s, AVStream **st)
static int should_retry(AVIOContext *pb, int error_code)
static int mov_switch_root(AVFormatContext *s, int64_t target)
static int mov_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mov_seek_fragment(AVFormatContext *s, AVStream *st, int64_t timestamp)
static int mov_seek_stream(AVFormatContext *s, AVStream *st, int64_t timestamp, int flags)
static int mov_read_seek(AVFormatContext *s, int stream_index, int64_t sample_time, int flags)
#define OFFSET(x) offsetof(MOVContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption mov_options[] = ;
static const AVClass mov_class = ;
AVInputFormat ff_mov_demuxer = ;
