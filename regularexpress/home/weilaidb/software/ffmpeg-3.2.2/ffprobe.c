typedef struct InputStream  InputStream;
typedef struct InputFile  InputFile;
const char program_name[] = ;
const int program_birth_year = 2007;
static int do_bitexact = 0;
static int do_count_frames = 0;
static int do_count_packets = 0;
static int do_read_frames  = 0;
static int do_read_packets = 0;
static int do_show_chapters = 0;
static int do_show_error   = 0;
static int do_show_format  = 0;
static int do_show_frames  = 0;
static int do_show_packets = 0;
static int do_show_programs = 0;
static int do_show_streams = 0;
static int do_show_stream_disposition = 0;
static int do_show_data    = 0;
static int do_show_program_version  = 0;
static int do_show_library_versions = 0;
static int do_show_pixel_formats = 0;
static int do_show_pixel_format_flags = 0;
static int do_show_pixel_format_components = 0;
static int do_show_chapter_tags = 0;
static int do_show_format_tags = 0;
static int do_show_frame_tags = 0;
static int do_show_program_tags = 0;
static int do_show_stream_tags = 0;
static int do_show_packet_tags = 0;
static int show_value_unit              = 0;
static int use_value_prefix             = 0;
static int use_byte_value_binary_prefix = 0;
static int use_value_sexagesimal_format = 0;
static int show_private_data            = 1;
static char *print_format;
static char *stream_specifier;
static char *show_data_hash;
typedef struct ReadInterval  ReadInterval;
static ReadInterval *read_intervals;
static int read_intervals_nb = 0;
#define SECTION_MAX_NB_CHILDREN 10
struct section ;
typedef enum  SectionID;
static struct section sections[] = ;
static const OptionDef *options;
static const char *input_filename;
static AVInputFormat *iformat = NULL;
static struct AVHashContext *hash;
static const struct  si_prefixes[] = ;
static const char unit_second_str[]         =     ;
static const char unit_hertz_str[]          =    ;
static const char unit_byte_str[]           =  ;
static const char unit_bit_per_second_str[] = ;
static int nb_streams;
static uint64_t *nb_streams_packets;
static uint64_t *nb_streams_frames;
static int *selected_streams;
ffprobe_cleanup
struct unit_value ;
*value_string
typedef struct WriterContext WriterContext;
#define WRITER_FLAG_DISPLAY_OPTIONAL_FIELDS 1
#define WRITER_FLAG_PUT_PACKETS_AND_FRAMES_IN_SAME_CHAPTER 2
typedef enum  StringValidation;
typedef struct Writer  Writer;
#define SECTION_MAX_NB_LEVELS 10
struct WriterContext ;
*writer_get_name
OFFSET offsetof(WriterContext, x)
static const AVOption writer_options[] = ,
},
};
*writer_child_next
static const AVClass writer_class = ;
writer_close
bprint_bytes
writer_open
writer_print_section_header
writer_print_section_footer
writer_print_integer
validate_string
#define PRINT_STRING_OPT      1
#define PRINT_STRING_VALIDATE 2
writer_print_string
writer_print_rational
writer_print_time
writer_print_ts
writer_print_data
writer_print_data_hash
writer_print_integers
#define MAX_REGISTERED_WRITERS_NB 64
static const Writer *registered_writers[MAX_REGISTERED_WRITERS_NB + 1];
writer_register
*writer_get_by_name
DEFINE_WRITER_CLASS                   \
static const char *name##_get_name(void *ctx)       \
\
static const AVClass name##_class =
typedef struct DefaultContext  DefaultContext;
#undef OFFSET
OFFSET offsetof(DefaultContext, x)
static const AVOption default_options[] = ;
DEFINE_WRITER_CLASS(default);
*upcase_string
default_print_section_header
default_print_section_footer
default_print_str
default_print_int
static const Writer default_writer = ;
*c_escape_str
*csv_escape_str
*none_escape_str
typedef struct CompactContext  CompactContext;
#undef OFFSET
OFFSET offsetof(CompactContext, x)
static const AVOption compact_options[]= ,
,  CHAR_MIN, CHAR_MAX },
,
,
,  CHAR_MIN, CHAR_MAX },
,  CHAR_MIN, CHAR_MAX },
,
,
,
};
DEFINE_WRITER_CLASS(compact);
compact_init
compact_print_section_header
compact_print_section_footer
compact_print_str
compact_print_int
static const Writer compact_writer = ;
#undef OFFSET
OFFSET offsetof(CompactContext, x)
static const AVOption csv_options[] = ,
,  CHAR_MIN, CHAR_MAX },
,
,
, CHAR_MIN, CHAR_MAX },
, CHAR_MIN, CHAR_MAX },
,
,
,
};
DEFINE_WRITER_CLASS(csv);
static const Writer csv_writer = ;
typedef struct FlatContext  FlatContext;
#undef OFFSET
OFFSET offsetof(FlatContext, x)
static const AVOption flat_options[]= ,
,  CHAR_MIN, CHAR_MAX },
,
,
,
};
DEFINE_WRITER_CLASS(flat);
flat_init
*flat_escape_key_str
*flat_escape_value_str
flat_print_section_header
flat_print_int
flat_print_str
static const Writer flat_writer = ;
typedef struct INIContext  INIContext;
#undef OFFSET
OFFSET offsetof(INIContext, x)
static const AVOption ini_options[] = ;
DEFINE_WRITER_CLASS(ini);
*ini_escape_str
ini_print_section_header
ini_print_str
ini_print_int
static const Writer ini_writer = ;
typedef struct JSONContext  JSONContext;
#undef OFFSET
OFFSET offsetof(JSONContext, x)
static const AVOption json_options[]= ;
DEFINE_WRITER_CLASS(json);
json_init
*json_escape_str
JSON_INDENT printf(, json->indent_level * 4, ' ')
json_print_section_header
json_print_section_footer
json_print_item_str
json_print_str
json_print_int
static const Writer json_writer = ;
typedef struct XMLContext  XMLContext;
#undef OFFSET
OFFSET offsetof(XMLContext, x)
static const AVOption xml_options[] = ;
DEFINE_WRITER_CLASS(xml);
xml_init
*xml_escape_str
XML_INDENT printf(, xml->indent_level * 4, ' ')
xml_print_section_header
xml_print_section_footer
xml_print_str
xml_print_int
static Writer xml_writer = ;
writer_register_all
print_fmt do  while (0)
print_int         writer_print_integer(w, k, v)
print_q        writer_print_rational(w, k, v, s)
print_str         writer_print_string(w, k, v, 0)
print_str_opt     writer_print_string(w, k, v, PRINT_STRING_OPT)
print_str_validate writer_print_string(w, k, v, PRINT_STRING_VALIDATE)
print_time    writer_print_time(w, k, v, tb, 0)
print_ts          writer_print_ts(w, k, v, 0)
print_duration_time writer_print_time(w, k, v, tb, 1)
print_duration_ts       writer_print_ts(w, k, v, 1)
print_val do  while (0)
print_section_header writer_print_section_header(w, s)
print_section_footer writer_print_section_footer(w, s)
REALLOCZ_ARRAY_STREAM                        \
show_tags
print_pkt_side_data
show_packet
show_subtitle
show_frame
process_frame
log_read_interval
read_interval_packets
read_packets
show_stream
show_streams
show_program
show_programs
show_chapters
show_format
show_error
open_input_file
close_input_file
probe_file
show_usage
ffprobe_show_program_version
SHOW_LIB_VERSION                              \
do  while (0)
ffprobe_show_library_versions
PRINT_PIX_FMT_FLAG                                \
do  while (0)
ffprobe_show_pixel_formats
opt_format
mark_section_show_entries
match_section
opt_show_entries
opt_show_format_entry
opt_input_file
opt_input_file_i
show_help_default
parse_read_interval
parse_read_intervals
opt_read_intervals
opt_pretty
print_section
opt_sections
opt_show_versions
DEFINE_OPT_SHOW_SECTION             \
static int opt_show_##section(const char *opt, const char *arg)     \
DEFINE_OPT_SHOW_SECTION(chapters,         CHAPTERS)
DEFINE_OPT_SHOW_SECTION(error,            ERROR)
DEFINE_OPT_SHOW_SECTION(format,           FORMAT)
DEFINE_OPT_SHOW_SECTION(frames,           FRAMES)
DEFINE_OPT_SHOW_SECTION(library_versions, LIBRARY_VERSIONS)
DEFINE_OPT_SHOW_SECTION(packets,          PACKETS)
DEFINE_OPT_SHOW_SECTION(pixel_formats,    PIXEL_FORMATS)
DEFINE_OPT_SHOW_SECTION(program_version,  PROGRAM_VERSION)
DEFINE_OPT_SHOW_SECTION(streams,          STREAMS)
DEFINE_OPT_SHOW_SECTION(programs,         PROGRAMS)
static const OptionDef real_options[] = ;
check_section_show_entries
SET_DO_SHOW do  while (0)
main
