#define PRI_PRETTY_GUID \
ARG_PRETTY_GUID \
AV_RL32(g),AV_RL16(g+4),AV_RL16(g+6),g[8],g[9],g[10],g[11],g[12],g[13],g[14],g[15]
#define LEN_PRETTY_GUID 34
typedef struct WtvFile  WtvFile;
seek_by_sector
wtvfile_read_packet
wtvfile_seek
read_ints
wtvfile_open_sector
wtvfile_open2
wtvfile_open \
wtvfile_open2(s, buf, buf_size, filename, sizeof(filename))
wtvfile_close
typedef struct WtvStream  WtvStream;
typedef struct WtvContext  WtvContext;
static const ff_asf_guid EVENTID_SubtitleSpanningEvent =
;
static const ff_asf_guid EVENTID_LanguageSpanningEvent =
;
static const ff_asf_guid EVENTID_AudioDescriptorSpanningEvent =
;
static const ff_asf_guid EVENTID_CtxADescriptorSpanningEvent =
;
static const ff_asf_guid EVENTID_CSDescriptorSpanningEvent =
;
static const ff_asf_guid EVENTID_DVBScramblingControlSpanningEvent =
;
static const ff_asf_guid EVENTID_StreamIDSpanningEvent =
;
static const ff_asf_guid EVENTID_TeletextSpanningEvent =
;
static const ff_asf_guid EVENTID_AudioTypeSpanningEvent =
;
static const ff_asf_guid mediasubtype_mpeg1payload =
;
static const ff_asf_guid mediatype_mpeg2_sections =
;
static const ff_asf_guid mediatype_mpeg2_pes =
;
static const ff_asf_guid mediatype_mstvcaption =
;
static const ff_asf_guid mediasubtype_dvb_subtitle =
;
static const ff_asf_guid mediasubtype_teletext =
;
static const ff_asf_guid mediasubtype_dtvccdata =
;
static const ff_asf_guid mediasubtype_mpeg2_sections =
;
read_probe
filetime_to_iso8601
crazytime_to_iso8601
oledate_to_iso8601
get_attachment
get_tag
parse_legacy_attrib
parse_videoinfoheader2
parse_mpeg1waveformatex
new_stream
parse_media_type
enum ;
recover
parse_chunks
read_header
read_packet
read_seek
read_close
AVInputFormat ff_wtv_demuxer = ;
