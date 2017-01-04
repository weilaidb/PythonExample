enum CieSystem ;
enum ColorsSystems ;
typedef struct CiescopeContext  CiescopeContext;
#define OFFSET(x) offsetof(CiescopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption ciescope_options[] = ;
AVFILTER_DEFINE_CLASS(ciescope);
static const enum AVPixelFormat in_pix_fmts[] = ;
static const enum AVPixelFormat out_pix_fmts[] = ;
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
struct ColorSystem ;
static float const spectral_chromaticity[][3] = ;
#define C     0.310063, 0.316158
#define E     1.0/3.0, 1.0/3.0
#define D50   0.34570, 0.3585
#define D65   0.312713, 0.329016
#define GAMMA_REC709    0.
static const struct ColorSystem color_systems[] = ;
static void
uv_to_xy(double   const u,
double   const v,
double * const xc,
double * const yc)
static void
upvp_to_xy(double   const up,
double   const vp,
double * const xc,
double * const yc)
static void
xy_to_upvp(double xc,
double yc,
double * const up,
double * const vp)
static void
xy_to_uv(double xc,
double yc,
double * const u,
double * const v)
static void
xyz_to_rgb(const double m[3][3],
double xc, double yc, double zc,
double * const r, double * const g, double * const b)
static void invert_matrix3x3(double in[3][3], double out[3][3])
static void get_rgb2xyz_matrix(struct ColorSystem system, double m[3][3])
static void
rgb_to_xy(double rc,
double gc,
double bc,
double * const x,
double * const y,
double * const z,
const double m[3][3])
static int
constrain_rgb(double * const r,
double * const g,
double * const b)
static void
gamma_correct(const struct ColorSystem * const cs,
double *                   const c)
static void
gamma_correct_rgb(const struct ColorSystem * const cs,
double * const r,
double * const g,
double * const b)
#define Sz(x) (((x) * (int)FFMIN(w, h)) / 512)
static void
monochrome_color_location(double waveLength, int w, int h,
int cie, int *xP, int *yP)
static void
find_tongue(uint16_t* const pixels,
int       const w,
int       const linesize,
int       const row,
int *     const presentP,
int *     const leftEdgeP,
int *     const rightEdgeP)
static void draw_line(uint16_t *const pixels, int linesize,
int x0, int y0, int x1, int y1,
int w, int h,
const uint16_t *const rgbcolor)
static void draw_rline(uint16_t *const pixels, int linesize,
int x0, int y0, int x1, int y1,
int w, int h)
static void
tongue_outline(uint16_t* const pixels,
int       const linesize,
int       const w,
int       const h,
uint16_t  const maxval,
int       const cie)
static void
fill_in_tongue(uint16_t*                  const pixels,
int                        const linesize,
int                        const w,
int                        const h,
uint16_t                   const maxval,
const struct ColorSystem * const cs,
double                     const m[3][3],
int                        const cie,
int                        const correct_gamma,
float                      const contrast)
static void
plot_white_point(uint16_t*      pixels,
int      const linesize,
int      const w,
int      const h,
int      const maxval,
int      const color_system,
int      const cie)
static int draw_background(AVFilterContext *ctx)
static void filter_rgb48(AVFilterContext *ctx, AVFrame *in, double *cx, double *cy, int x, int y)
static void filter_rgba64(AVFilterContext *ctx, AVFrame *in, double *cx, double *cy, int x, int y)
static void filter_rgb24(AVFilterContext *ctx, AVFrame *in, double *cx, double *cy, int x, int y)
static void filter_rgba(AVFilterContext *ctx, AVFrame *in, double *cx, double *cy, int x, int y)
static void filter_xyz(AVFilterContext *ctx, AVFrame *in, double *cx, double *cy, int x, int y)
static void plot_gamuts(uint16_t *pixels, int linesize, int w, int h,
int cie, int gamuts)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static void av_cold uninit(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_ciescope = ;
