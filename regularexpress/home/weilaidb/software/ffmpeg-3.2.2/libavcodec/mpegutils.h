#define AVCODEC_MPEGUTILS_H
#define FRAME_SKIPPED 100
#define PICT_TOP_FIELD     1
#define PICT_BOTTOM_FIELD  2
#define PICT_FRAME         3
#define DELAYED_PIC_REF 4
#define MAX_MB_BYTES    (30 * 16 * 16 * 3 / 8 + 120)
#define MAX_FCODE        7
#if !FF_API_MB_TYPE
#define MB_TYPE_INTRA4x4   (1 <<  0)
#define MB_TYPE_INTRA16x16 (1 <<  1)
#define MB_TYPE_INTRA_PCM  (1 <<  2)
#define MB_TYPE_16x16      (1 <<  3)
#define MB_TYPE_16x8       (1 <<  4)
#define MB_TYPE_8x16       (1 <<  5)
#define MB_TYPE_8x8        (1 <<  6)
#define MB_TYPE_INTERLACED (1 <<  7)
#define MB_TYPE_DIRECT2    (1 <<  8)
#define MB_TYPE_ACPRED     (1 <<  9)
#define MB_TYPE_GMC        (1 << 10)
#define MB_TYPE_SKIP       (1 << 11)
#define MB_TYPE_P0L0       (1 << 12)
#define MB_TYPE_P1L0       (1 << 13)
#define MB_TYPE_P0L1       (1 << 14)
#define MB_TYPE_P1L1       (1 << 15)
#define MB_TYPE_L0         (MB_TYPE_P0L0 | MB_TYPE_P1L0)
#define MB_TYPE_L1         (MB_TYPE_P0L1 | MB_TYPE_P1L1)
#define MB_TYPE_L0L1       (MB_TYPE_L0   | MB_TYPE_L1)
#define MB_TYPE_QUANT      (1 << 16)
#define MB_TYPE_CBP        (1 << 17)
#define MB_TYPE_INTRA    MB_TYPE_INTRA4x4
#define IS_INTRA4x4(a)   ((a) & MB_TYPE_INTRA4x4)
#define IS_INTRA16x16(a) ((a) & MB_TYPE_INTRA16x16)
#define IS_PCM(a)        ((a) & MB_TYPE_INTRA_PCM)
#define IS_INTRA(a)      ((a) & 7)
#define IS_INTER(a)      ((a) & (MB_TYPE_16x16 | MB_TYPE_16x8 | \
MB_TYPE_8x16  | MB_TYPE_8x8))
#define IS_SKIP(a)       ((a) & MB_TYPE_SKIP)
#define IS_INTRA_PCM(a)  ((a) & MB_TYPE_INTRA_PCM)
#define IS_INTERLACED(a) ((a) & MB_TYPE_INTERLACED)
#define IS_DIRECT(a)     ((a) & MB_TYPE_DIRECT2)
#define IS_GMC(a)        ((a) & MB_TYPE_GMC)
#define IS_16X16(a)      ((a) & MB_TYPE_16x16)
#define IS_16X8(a)       ((a) & MB_TYPE_16x8)
#define IS_8X16(a)       ((a) & MB_TYPE_8x16)
#define IS_8X8(a)        ((a) & MB_TYPE_8x8)
#define IS_SUB_8X8(a)    ((a) & MB_TYPE_16x16)
#define IS_SUB_8X4(a)    ((a) & MB_TYPE_16x8)
#define IS_SUB_4X8(a)    ((a) & MB_TYPE_8x16)
#define IS_SUB_4X4(a)    ((a) & MB_TYPE_8x8)
#define IS_ACPRED(a)     ((a) & MB_TYPE_ACPRED)
#define IS_QUANT(a)      ((a) & MB_TYPE_QUANT)
#define IS_DIR(a, part, list) ((a) & (MB_TYPE_P0L0 << ((part) + 2 * (list))))
#define USES_LIST(a, list) ((a) & ((MB_TYPE_P0L0 | MB_TYPE_P1L0) << (2 * (list))))
#define HAS_CBP(a)       ((a) & MB_TYPE_CBP)
#define CANDIDATE_MB_TYPE_INTRA      (1 <<  0)
#define CANDIDATE_MB_TYPE_INTER      (1 <<  1)
#define CANDIDATE_MB_TYPE_INTER4V    (1 <<  2)
#define CANDIDATE_MB_TYPE_SKIPPED    (1 <<  3)
#define CANDIDATE_MB_TYPE_DIRECT     (1 <<  4)
#define CANDIDATE_MB_TYPE_FORWARD    (1 <<  5)
#define CANDIDATE_MB_TYPE_BACKWARD   (1 <<  6)
#define CANDIDATE_MB_TYPE_BIDIR      (1 <<  7)
#define CANDIDATE_MB_TYPE_INTER_I    (1 <<  8)
#define CANDIDATE_MB_TYPE_FORWARD_I  (1 <<  9)
#define CANDIDATE_MB_TYPE_BACKWARD_I (1 << 10)
#define CANDIDATE_MB_TYPE_BIDIR_I    (1 << 11)
#define CANDIDATE_MB_TYPE_DIRECT0    (1 << 12)
#define INPLACE_OFFSET 16
enum OutputFormat ;
void ff_draw_horiz_band(AVCodecContext *avctx, AVFrame *cur, AVFrame *last,
int y, int h, int picture_structure, int first_field,
int low_delay);
