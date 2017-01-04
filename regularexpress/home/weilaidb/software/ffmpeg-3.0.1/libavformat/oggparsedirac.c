static int dirac_header(AVFormatContext *s, int idx)
static uint64_t dirac_gptopts(AVFormatContext *s, int idx, uint64_t granule,
int64_t *dts_out)
static int old_dirac_header(AVFormatContext *s, int idx)
static uint64_t old_dirac_gptopts(AVFormatContext *s, int idx, uint64_t gp,
int64_t *dts)
const struct ogg_codec ff_dirac_codec = ;
const struct ogg_codec ff_old_dirac_codec = ;
