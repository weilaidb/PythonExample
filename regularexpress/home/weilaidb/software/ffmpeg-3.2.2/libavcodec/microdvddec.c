static int indexof(const char *s, int c)
struct microdvd_tag ;
#define MICRODVD_PERSISTENT_OFF     0
#define MICRODVD_PERSISTENT_ON      1
#define MICRODVD_PERSISTENT_OPENED  2
#define MICRODVD_TAGS "cfshyYpo"
static void microdvd_set_tag(struct microdvd_tag *tags, struct microdvd_tag tag)
#define MICRODVD_STYLES "ibus"
static char *check_for_italic_slash_marker(struct microdvd_tag *tags, char *s)
static char *microdvd_load_tags(struct microdvd_tag *tags, char *s)
case 'S':
tag.persistent = MICRODVD_PERSISTENT_ON;
case 's':
tag.data1 = strtol(s, &s, 10);
if (*s != '}')
break;
tag.key = 's';
break;
case 'H': ');
if (len < 0)
break;
tag.data_string = s;
tag.data_string_len = len;
s += len;
tag.key = 'h';
break;
}
case 'P':
if (!*s)
break;
tag.persistent = MICRODVD_PERSISTENT_ON;
tag.data1 = (*s++ == '1');
if (*s != '}')
break;
tag.key = 'p';
break;
case 'o':
tag.persistent = MICRODVD_PERSISTENT_ON;
tag.data1 = strtol(s, &s, 10);
if (*s != ',')
break;
s++;
tag.data2 = strtol(s, &s, 10);
if (*s != '}')
break;
tag.key = 'o';
break;
default:
break;
}
if (tag.key == 0)
return start;
microdvd_set_tag(tags, tag);
s++;
}
return check_for_italic_slash_marker(tags, s);
}
static void microdvd_open_tags(AVBPrint *new_line, struct microdvd_tag *tags)
static void microdvd_close_no_persistent_tags(AVBPrint *new_line,
struct microdvd_tag *tags)
static int microdvd_decode_frame(AVCodecContext *avctx,
void *data, int *got_sub_ptr, AVPacket *avpkt)
static int microdvd_init(AVCodecContext *avctx)
AVCodec ff_microdvd_decoder = ;
