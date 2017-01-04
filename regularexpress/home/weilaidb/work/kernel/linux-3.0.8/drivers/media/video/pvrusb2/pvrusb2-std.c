struct std_name ;
#define CSTD_PAL \
(V4L2_STD_PAL_B| \
V4L2_STD_PAL_B1| \
V4L2_STD_PAL_G| \
V4L2_STD_PAL_H| \
V4L2_STD_PAL_I| \
V4L2_STD_PAL_D| \
V4L2_STD_PAL_D1| \
V4L2_STD_PAL_K| \
V4L2_STD_PAL_M| \
V4L2_STD_PAL_N| \
V4L2_STD_PAL_Nc| \
V4L2_STD_PAL_60)
#define CSTD_NTSC \
(V4L2_STD_NTSC_M| \
V4L2_STD_NTSC_M_JP| \
V4L2_STD_NTSC_M_KR| \
V4L2_STD_NTSC_443)
#define CSTD_ATSC \
(V4L2_STD_ATSC_8_VSB| \
V4L2_STD_ATSC_16_VSB)
#define CSTD_SECAM \
(V4L2_STD_SECAM_B| \
V4L2_STD_SECAM_D| \
V4L2_STD_SECAM_G| \
V4L2_STD_SECAM_H| \
V4L2_STD_SECAM_K| \
V4L2_STD_SECAM_K1| \
V4L2_STD_SECAM_L| \
V4L2_STD_SECAM_LC)
#define TSTD_B   (V4L2_STD_PAL_B|V4L2_STD_SECAM_B)
#define TSTD_B1  (V4L2_STD_PAL_B1)
#define TSTD_D   (V4L2_STD_PAL_D|V4L2_STD_SECAM_D)
#define TSTD_D1  (V4L2_STD_PAL_D1)
#define TSTD_G   (V4L2_STD_PAL_G|V4L2_STD_SECAM_G)
#define TSTD_H   (V4L2_STD_PAL_H|V4L2_STD_SECAM_H)
#define TSTD_I   (V4L2_STD_PAL_I)
#define TSTD_K   (V4L2_STD_PAL_K|V4L2_STD_SECAM_K)
#define TSTD_K1  (V4L2_STD_SECAM_K1)
#define TSTD_L   (V4L2_STD_SECAM_L)
#define TSTD_M   (V4L2_STD_PAL_M|V4L2_STD_NTSC_M)
#define TSTD_N   (V4L2_STD_PAL_N)
#define TSTD_Nc  (V4L2_STD_PAL_Nc)
#define TSTD_60  (V4L2_STD_PAL_60)
#define CSTD_ALL (CSTD_PAL|CSTD_NTSC|CSTD_ATSC|CSTD_SECAM)
static const struct std_name std_groups[] = ;
static const struct std_name std_items[] = ;
static const struct std_name *find_std_name(const struct std_name *arrPtr,
unsigned int arrSize,
const char *bufPtr,
unsigned int bufSize)
int pvr2_std_str_to_id(v4l2_std_id *idPtr,const char *bufPtr,
unsigned int bufSize)
unsigned int pvr2_std_id_to_str(char *bufPtr, unsigned int bufSize,
v4l2_std_id id)
static struct v4l2_standard generic_standards[] = ;
static struct v4l2_standard *match_std(v4l2_std_id id)
static int pvr2_std_fill(struct v4l2_standard *std,v4l2_std_id id)
static v4l2_std_id std_mixes[] = ;
struct v4l2_standard *pvr2_std_create_enum(unsigned int *countptr,
v4l2_std_id id)
v4l2_std_id pvr2_std_get_usable(void)
