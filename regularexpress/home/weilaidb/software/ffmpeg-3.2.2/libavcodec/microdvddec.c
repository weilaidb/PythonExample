indexof
struct microdvd_tag ;
#define MICRODVD_PERSISTENT_OFF     0
#define MICRODVD_PERSISTENT_ON      1
#define MICRODVD_PERSISTENT_OPENED  2
#define MICRODVD_TAGS
microdvd_set_tag
#define MICRODVD_STYLES
*check_for_italic_slash_marker
*microdvd_load_tags
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
check_for_italic_slash_marker;
}
microdvd_open_tags
microdvd_close_no_persistent_tags
microdvd_decode_frame
microdvd_init
AVCodec ff_microdvd_decoder = ;
