#define TRUE 1
#define FALSE 0
static int
get_bit (int in, int bit)
static int
get_bits (int in, int begin, int end)
static int
decode_header (const uchar *edid)
static int
decode_vendor_and_product_identification (const uchar *edid, MonitorInfo *info)
static int
decode_edid_version (const uchar *edid, MonitorInfo *info)
static int
decode_display_parameters (const uchar *edid, MonitorInfo *info)
static double
decode_fraction (int high, int low)
static int
decode_color_characteristics (const uchar *edid, MonitorInfo *info)
static int
decode_established_timings (const uchar *edid, MonitorInfo *info)
static int
decode_standard_timings (const uchar *edid, MonitorInfo *info)
static void
decode_lf_string (const uchar *s, int n_chars, char *result)
static void
decode_display_descriptor (const uchar *desc,
MonitorInfo *info)
static void
decode_detailed_timing (const uchar *timing,
DetailedTiming *detailed)
static int
decode_descriptors (const uchar *edid, MonitorInfo *info)
static void
decode_check_sum (const uchar *edid,
MonitorInfo *info)
MonitorInfo *
decode_edid (const uchar *edid)
static const char *
yesno (int v)
void
dump_monitor_info (MonitorInfo *info)
