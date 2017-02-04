const int32_t ff_yuv2rgb_coeffs[11][4] = ;
*sws_getCoefficients
LOADCHROMA                               \
U = pu[i];                                      \
V = pv[i];                                      \
r = (void *)c->table_rV[V+YUVRGB_TABLE_HEADROOM];                     \
g = (void *)(c->table_gU[U+YUVRGB_TABLE_HEADROOM] + c->table_gV[V+YUVRGB_TABLE_HEADROOM]);  \
b = (void *)c->table_bU[U+YUVRGB_TABLE_HEADROOM];
PUTRGB                         \
Y              = src[2 * i];                    \
dst[2 * i]     = r[Y] + g[Y] + b[Y];            \
Y              = src[2 * i + 1];                \
dst[2 * i + 1] = r[Y] + g[Y] + b[Y];
PUTRGB24                       \
Y              = src[2 * i];                    \
dst[6 * i + 0] = r[Y];                          \
dst[6 * i + 1] = g[Y];                          \
dst[6 * i + 2] = b[Y];                          \
Y              = src[2 * i + 1];                \
dst[6 * i + 3] = r[Y];                          \
dst[6 * i + 4] = g[Y];                          \
dst[6 * i + 5] = b[Y];
PUTBGR24                       \
Y              = src[2 * i];                    \
dst[6 * i + 0] = b[Y];                          \
dst[6 * i + 1] = g[Y];                          \
dst[6 * i + 2] = r[Y];                          \
Y              = src[2 * i + 1];                \
dst[6 * i + 3] = b[Y];                          \
dst[6 * i + 4] = g[Y];                          \
dst[6 * i + 5] = r[Y];
PUTRGBA                                  \
Y              = ysrc[2 * i];                                       \
dst[2 * i]     = r[Y] + g[Y] + b[Y] + (asrc[2 * i]     << s);       \
Y              = ysrc[2 * i + 1];                                   \
dst[2 * i + 1] = r[Y] + g[Y] + b[Y] + (asrc[2 * i + 1] << s);
PUTRGB48                       \
Y                = src[ 2 * i];                 \
dst[12 * i +  0] = dst[12 * i +  1] = r[Y];     \
dst[12 * i +  2] = dst[12 * i +  3] = g[Y];     \
dst[12 * i +  4] = dst[12 * i +  5] = b[Y];     \
Y                = src[ 2 * i + 1];             \
dst[12 * i +  6] = dst[12 * i +  7] = r[Y];     \
dst[12 * i +  8] = dst[12 * i +  9] = g[Y];     \
dst[12 * i + 10] = dst[12 * i + 11] = b[Y];
PUTBGR48                       \
Y                = src[2 * i];                  \
dst[12 * i +  0] = dst[12 * i +  1] = b[Y];     \
dst[12 * i +  2] = dst[12 * i +  3] = g[Y];     \
dst[12 * i +  4] = dst[12 * i +  5] = r[Y];     \
Y                = src[2  * i +  1];            \
dst[12 * i +  6] = dst[12 * i +  7] = b[Y];     \
dst[12 * i +  8] = dst[12 * i +  9] = g[Y];     \
dst[12 * i + 10] = dst[12 * i + 11] = r[Y];
YUV2RGBFUNC                             \
func_name                   \
CLOSEYUV2RGBFUNC                 \
ENDYUV2RGBLINE(dst_delta, 0)                    \
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_48, uint8_t, 0)
LOADCHROMA(0);
PUTRGB48(dst_1, py_1, 0);
PUTRGB48(dst_2, py_2, 0);
LOADCHROMA(1);
PUTRGB48(dst_2, py_2, 1);
PUTRGB48(dst_1, py_1, 1);
LOADCHROMA(2);
PUTRGB48(dst_1, py_1, 2);
PUTRGB48(dst_2, py_2, 2);
LOADCHROMA(3);
PUTRGB48(dst_2, py_2, 3);
PUTRGB48(dst_1, py_1, 3);
ENDYUV2RGBLINE(48, 0)
LOADCHROMA(0);
PUTRGB48(dst_1, py_1, 0);
PUTRGB48(dst_2, py_2, 0);
LOADCHROMA(1);
PUTRGB48(dst_2, py_2, 1);
PUTRGB48(dst_1, py_1, 1);
ENDYUV2RGBLINE(48, 1)
LOADCHROMA(0);
PUTRGB48(dst_1, py_1, 0);
PUTRGB48(dst_2, py_2, 0);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_bgr48, uint8_t, 0)
LOADCHROMA(0);
PUTBGR48(dst_1, py_1, 0);
PUTBGR48(dst_2, py_2, 0);
LOADCHROMA(1);
PUTBGR48(dst_2, py_2, 1);
PUTBGR48(dst_1, py_1, 1);
LOADCHROMA(2);
PUTBGR48(dst_1, py_1, 2);
PUTBGR48(dst_2, py_2, 2);
LOADCHROMA(3);
PUTBGR48(dst_2, py_2, 3);
PUTBGR48(dst_1, py_1, 3);
ENDYUV2RGBLINE(48, 0)
LOADCHROMA(0);
PUTBGR48(dst_1, py_1, 0);
PUTBGR48(dst_2, py_2, 0);
LOADCHROMA(1);
PUTBGR48(dst_2, py_2, 1);
PUTBGR48(dst_1, py_1, 1);
ENDYUV2RGBLINE(48, 1)
LOADCHROMA(0);
PUTBGR48(dst_1, py_1, 0);
PUTBGR48(dst_2, py_2, 0);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_32, uint32_t, 0)
LOADCHROMA(0);
PUTRGB(dst_1, py_1, 0);
PUTRGB(dst_2, py_2, 0);
LOADCHROMA(1);
PUTRGB(dst_2, py_2, 1);
PUTRGB(dst_1, py_1, 1);
LOADCHROMA(2);
PUTRGB(dst_1, py_1, 2);
PUTRGB(dst_2, py_2, 2);
LOADCHROMA(3);
PUTRGB(dst_2, py_2, 3);
PUTRGB(dst_1, py_1, 3);
ENDYUV2RGBLINE(8, 0)
LOADCHROMA(0);
PUTRGB(dst_1, py_1, 0);
PUTRGB(dst_2, py_2, 0);
LOADCHROMA(1);
PUTRGB(dst_2, py_2, 1);
PUTRGB(dst_1, py_1, 1);
ENDYUV2RGBLINE(8, 1)
LOADCHROMA(0);
PUTRGB(dst_1, py_1, 0);
PUTRGB(dst_2, py_2, 0);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuva2rgba_c, uint32_t, 1)
LOADCHROMA(0);
PUTRGBA(dst_1, py_1, pa_1, 0, 24);
PUTRGBA(dst_2, py_2, pa_2, 0, 24);
LOADCHROMA(1);
PUTRGBA(dst_2, py_2, pa_2, 1, 24);
PUTRGBA(dst_1, py_1, pa_1, 1, 24);
LOADCHROMA(2);
PUTRGBA(dst_1, py_1, pa_1, 2, 24);
PUTRGBA(dst_2, py_2, pa_2, 2, 24);
LOADCHROMA(3);
PUTRGBA(dst_2, py_2, pa_2, 3, 24);
PUTRGBA(dst_1, py_1, pa_1, 3, 24);
pa_1 += 8;
pa_2 += 8;
ENDYUV2RGBLINE(8, 0)
LOADCHROMA(0);
PUTRGBA(dst_1, py_1, pa_1, 0, 24);
PUTRGBA(dst_2, py_2, pa_2, 0, 24);
LOADCHROMA(1);
PUTRGBA(dst_2, py_2, pa_2, 1, 24);
PUTRGBA(dst_1, py_1, pa_1, 1, 24);
pa_1 += 4;
pa_2 += 4;
ENDYUV2RGBLINE(8, 1)
LOADCHROMA(0);
PUTRGBA(dst_1, py_1, pa_1, 0, 24);
PUTRGBA(dst_2, py_2, pa_2, 0, 24);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuva2argb_c, uint32_t, 1)
LOADCHROMA(0);
PUTRGBA(dst_1, py_1, pa_1, 0, 0);
PUTRGBA(dst_2, py_2, pa_2, 0, 0);
LOADCHROMA(1);
PUTRGBA(dst_2, py_2, pa_2, 1, 0);
PUTRGBA(dst_1, py_1, pa_1, 1, 0);
LOADCHROMA(2);
PUTRGBA(dst_1, py_1, pa_1, 2, 0);
PUTRGBA(dst_2, py_2, pa_2, 2, 0);
LOADCHROMA(3);
PUTRGBA(dst_2, py_2, pa_2, 3, 0);
PUTRGBA(dst_1, py_1, pa_1, 3, 0);
pa_1 += 8;
pa_2 += 8;
ENDYUV2RGBLINE(8, 0)
LOADCHROMA(0);
PUTRGBA(dst_1, py_1, pa_1, 0, 0);
PUTRGBA(dst_2, py_2, pa_2, 0, 0);
LOADCHROMA(1);
PUTRGBA(dst_2, py_2, pa_2, 1, 0);
PUTRGBA(dst_1, py_1, pa_1, 1, 0);
pa_1 += 4;
pa_2 += 4;
ENDYUV2RGBLINE(8, 1)
LOADCHROMA(0);
PUTRGBA(dst_1, py_1, pa_1, 0, 0);
PUTRGBA(dst_2, py_2, pa_2, 0, 0);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_24_rgb, uint8_t, 0)
LOADCHROMA(0);
PUTRGB24(dst_1, py_1, 0);
PUTRGB24(dst_2, py_2, 0);
LOADCHROMA(1);
PUTRGB24(dst_2, py_2, 1);
PUTRGB24(dst_1, py_1, 1);
LOADCHROMA(2);
PUTRGB24(dst_1, py_1, 2);
PUTRGB24(dst_2, py_2, 2);
LOADCHROMA(3);
PUTRGB24(dst_2, py_2, 3);
PUTRGB24(dst_1, py_1, 3);
ENDYUV2RGBLINE(24, 0)
LOADCHROMA(0);
PUTRGB24(dst_1, py_1, 0);
PUTRGB24(dst_2, py_2, 0);
LOADCHROMA(1);
PUTRGB24(dst_2, py_2, 1);
PUTRGB24(dst_1, py_1, 1);
ENDYUV2RGBLINE(24, 1)
LOADCHROMA(0);
PUTRGB24(dst_1, py_1, 0);
PUTRGB24(dst_2, py_2, 0);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_24_bgr, uint8_t, 0)
LOADCHROMA(0);
PUTBGR24(dst_1, py_1, 0);
PUTBGR24(dst_2, py_2, 0);
LOADCHROMA(1);
PUTBGR24(dst_2, py_2, 1);
PUTBGR24(dst_1, py_1, 1);
LOADCHROMA(2);
PUTBGR24(dst_1, py_1, 2);
PUTBGR24(dst_2, py_2, 2);
LOADCHROMA(3);
PUTBGR24(dst_2, py_2, 3);
PUTBGR24(dst_1, py_1, 3);
ENDYUV2RGBLINE(24, 0)
LOADCHROMA(0);
PUTBGR24(dst_1, py_1, 0);
PUTBGR24(dst_2, py_2, 0);
LOADCHROMA(1);
PUTBGR24(dst_2, py_2, 1);
PUTBGR24(dst_1, py_1, 1);
ENDYUV2RGBLINE(24, 1)
LOADCHROMA(0);
PUTBGR24(dst_1, py_1, 0);
PUTBGR24(dst_2, py_2, 0);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_16_ordered_dither, uint16_t, 0)
const uint8_t *d16 = ff_dither_2x2_8[y & 1];
const uint8_t *e16 = ff_dither_2x2_4[y & 1];
const uint8_t *f16 = ff_dither_2x2_8[(y & 1)^1];
PUTRGB16                    \
Y              = src[2 * i];                    \
dst[2 * i]     = r[Y + d16[0 + o]] +            \
g[Y + e16[0 + o]] +            \
b[Y + f16[0 + o]];             \
Y              = src[2 * i + 1];                \
dst[2 * i + 1] = r[Y + d16[1 + o]] +            \
g[Y + e16[1 + o]] +            \
b[Y + f16[1 + o]];
LOADCHROMA(0);
PUTRGB16(dst_1, py_1, 0, 0);
PUTRGB16(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB16(dst_2, py_2, 1, 2 + 8);
PUTRGB16(dst_1, py_1, 1, 2);
LOADCHROMA(2);
PUTRGB16(dst_1, py_1, 2, 4);
PUTRGB16(dst_2, py_2, 2, 4 + 8);
LOADCHROMA(3);
PUTRGB16(dst_2, py_2, 3, 6 + 8);
PUTRGB16(dst_1, py_1, 3, 6);
CLOSEYUV2RGBFUNC(8)
YUV2RGBFUNC(yuv2rgb_c_15_ordered_dither, uint16_t, 0)
const uint8_t *d16 = ff_dither_2x2_8[y & 1];
const uint8_t *e16 = ff_dither_2x2_8[(y & 1)^1];
PUTRGB15                    \
Y              = src[2 * i];                    \
dst[2 * i]     = r[Y + d16[0 + o]] +            \
g[Y + d16[1 + o]] +            \
b[Y + e16[0 + o]];             \
Y              = src[2 * i + 1];                \
dst[2 * i + 1] = r[Y + d16[1 + o]] +            \
g[Y + d16[0 + o]] +            \
b[Y + e16[1 + o]];
LOADCHROMA(0);
PUTRGB15(dst_1, py_1, 0, 0);
PUTRGB15(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB15(dst_2, py_2, 1, 2 + 8);
PUTRGB15(dst_1, py_1, 1, 2);
LOADCHROMA(2);
PUTRGB15(dst_1, py_1, 2, 4);
PUTRGB15(dst_2, py_2, 2, 4 + 8);
LOADCHROMA(3);
PUTRGB15(dst_2, py_2, 3, 6 + 8);
PUTRGB15(dst_1, py_1, 3, 6);
CLOSEYUV2RGBFUNC(8)
YUV2RGBFUNC(yuv2rgb_c_12_ordered_dither, uint16_t, 0)
const uint8_t *d16 = ff_dither_4x4_16[y & 3];
PUTRGB12                    \
Y              = src[2 * i];                    \
dst[2 * i]     = r[Y + d16[0 + o]] +            \
g[Y + d16[0 + o]] +            \
b[Y + d16[0 + o]];             \
Y              = src[2 * i + 1];                \
dst[2 * i + 1] = r[Y + d16[1 + o]] +            \
g[Y + d16[1 + o]] +            \
b[Y + d16[1 + o]];
LOADCHROMA(0);
PUTRGB12(dst_1, py_1, 0, 0);
PUTRGB12(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB12(dst_2, py_2, 1, 2 + 8);
PUTRGB12(dst_1, py_1, 1, 2);
LOADCHROMA(2);
PUTRGB12(dst_1, py_1, 2, 4);
PUTRGB12(dst_2, py_2, 2, 4 + 8);
LOADCHROMA(3);
PUTRGB12(dst_2, py_2, 3, 6 + 8);
PUTRGB12(dst_1, py_1, 3, 6);
CLOSEYUV2RGBFUNC(8)
YUV2RGBFUNC(yuv2rgb_c_8_ordered_dither, uint8_t, 0)
const uint8_t *d32 = ff_dither_8x8_32[y & 7];
const uint8_t *d64 = ff_dither_8x8_73[y & 7];
PUTRGB8                     \
Y              = src[2 * i];                    \
dst[2 * i]     = r[Y + d32[0 + o]] +            \
g[Y + d32[0 + o]] +            \
b[Y + d64[0 + o]];             \
Y              = src[2 * i + 1];                \
dst[2 * i + 1] = r[Y + d32[1 + o]] +            \
g[Y + d32[1 + o]] +            \
b[Y + d64[1 + o]];
LOADCHROMA(0);
PUTRGB8(dst_1, py_1, 0, 0);
PUTRGB8(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB8(dst_2, py_2, 1, 2 + 8);
PUTRGB8(dst_1, py_1, 1, 2);
LOADCHROMA(2);
PUTRGB8(dst_1, py_1, 2, 4);
PUTRGB8(dst_2, py_2, 2, 4 + 8);
LOADCHROMA(3);
PUTRGB8(dst_2, py_2, 3, 6 + 8);
PUTRGB8(dst_1, py_1, 3, 6);
ENDYUV2RGBLINE(8, 0)
const uint8_t *d32 = ff_dither_8x8_32[y & 7];
const uint8_t *d64 = ff_dither_8x8_73[y & 7];
LOADCHROMA(0);
PUTRGB8(dst_1, py_1, 0, 0);
PUTRGB8(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB8(dst_2, py_2, 1, 2 + 8);
PUTRGB8(dst_1, py_1, 1, 2);
ENDYUV2RGBLINE(8, 1)
const uint8_t *d32 = ff_dither_8x8_32[y & 7];
const uint8_t *d64 = ff_dither_8x8_73[y & 7];
LOADCHROMA(0);
PUTRGB8(dst_1, py_1, 0, 0);
PUTRGB8(dst_2, py_2, 0, 0 + 8);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_4_ordered_dither, uint8_t, 0)
const uint8_t * d64 = ff_dither_8x8_73[y & 7];
const uint8_t *d128 = ff_dither_8x8_220[y & 7];
int acc;
PUTRGB4D                    \
Y      = src[2 * i];                            \
acc    = r[Y + d128[0 + o]] +                   \
g[Y +  d64[0 + o]] +                   \
b[Y + d128[0 + o]];                    \
Y      = src[2 * i + 1];                        \
acc   |= (r[Y + d128[1 + o]] +                  \
g[Y +  d64[1 + o]] +                  \
b[Y + d128[1 + o]]) << 4;             \
dst[i] = acc;
LOADCHROMA(0);
PUTRGB4D(dst_1, py_1, 0, 0);
PUTRGB4D(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB4D(dst_2, py_2, 1, 2 + 8);
PUTRGB4D(dst_1, py_1, 1, 2);
LOADCHROMA(2);
PUTRGB4D(dst_1, py_1, 2, 4);
PUTRGB4D(dst_2, py_2, 2, 4 + 8);
LOADCHROMA(3);
PUTRGB4D(dst_2, py_2, 3, 6 + 8);
PUTRGB4D(dst_1, py_1, 3, 6);
ENDYUV2RGBLINE(4, 0)
const uint8_t * d64 = ff_dither_8x8_73[y & 7];
const uint8_t *d128 = ff_dither_8x8_220[y & 7];
int acc;
LOADCHROMA(0);
PUTRGB4D(dst_1, py_1, 0, 0);
PUTRGB4D(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB4D(dst_2, py_2, 1, 2 + 8);
PUTRGB4D(dst_1, py_1, 1, 2);
ENDYUV2RGBLINE(4, 1)
const uint8_t * d64 = ff_dither_8x8_73[y & 7];
const uint8_t *d128 = ff_dither_8x8_220[y & 7];
int acc;
LOADCHROMA(0);
PUTRGB4D(dst_1, py_1, 0, 0);
PUTRGB4D(dst_2, py_2, 0, 0 + 8);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_4b_ordered_dither, uint8_t, 0)
const uint8_t *d64  = ff_dither_8x8_73[y & 7];
const uint8_t *d128 = ff_dither_8x8_220[y & 7];
PUTRGB4DB                   \
Y              = src[2 * i];                    \
dst[2 * i]     = r[Y + d128[0 + o]] +           \
g[Y +  d64[0 + o]] +           \
b[Y + d128[0 + o]];            \
Y              = src[2 * i + 1];                \
dst[2 * i + 1] = r[Y + d128[1 + o]] +           \
g[Y +  d64[1 + o]] +           \
b[Y + d128[1 + o]];
LOADCHROMA(0);
PUTRGB4DB(dst_1, py_1, 0, 0);
PUTRGB4DB(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB4DB(dst_2, py_2, 1, 2 + 8);
PUTRGB4DB(dst_1, py_1, 1, 2);
LOADCHROMA(2);
PUTRGB4DB(dst_1, py_1, 2, 4);
PUTRGB4DB(dst_2, py_2, 2, 4 + 8);
LOADCHROMA(3);
PUTRGB4DB(dst_2, py_2, 3, 6 + 8);
PUTRGB4DB(dst_1, py_1, 3, 6);
ENDYUV2RGBLINE(8, 0)
const uint8_t *d64  = ff_dither_8x8_73[y & 7];
const uint8_t *d128 = ff_dither_8x8_220[y & 7];
LOADCHROMA(0);
PUTRGB4DB(dst_1, py_1, 0, 0);
PUTRGB4DB(dst_2, py_2, 0, 0 + 8);
LOADCHROMA(1);
PUTRGB4DB(dst_2, py_2, 1, 2 + 8);
PUTRGB4DB(dst_1, py_1, 1, 2);
ENDYUV2RGBLINE(8, 1)
const uint8_t *d64  = ff_dither_8x8_73[y & 7];
const uint8_t *d128 = ff_dither_8x8_220[y & 7];
LOADCHROMA(0);
PUTRGB4DB(dst_1, py_1, 0, 0);
PUTRGB4DB(dst_2, py_2, 0, 0 + 8);
ENDYUV2RGBFUNC()
YUV2RGBFUNC(yuv2rgb_c_1_ordered_dither, uint8_t, 0)
const uint8_t *d128 = ff_dither_8x8_220[y & 7];
char out_1 = 0, out_2 = 0;
g = c->table_gU[128 + YUVRGB_TABLE_HEADROOM] + c->table_gV[128 + YUVRGB_TABLE_HEADROOM];
PUTRGB1                     \
Y    = src[2 * i];                              \
out += out + g[Y + d128[0 + o]];                \
Y    = src[2 * i + 1];                          \
out += out + g[Y + d128[1 + o]];
PUTRGB1(out_1, py_1, 0, 0);
PUTRGB1(out_2, py_2, 0, 0 + 8);
PUTRGB1(out_2, py_2, 1, 2 + 8);
PUTRGB1(out_1, py_1, 1, 2);
PUTRGB1(out_1, py_1, 2, 4);
PUTRGB1(out_2, py_2, 2, 4 + 8);
PUTRGB1(out_2, py_2, 3, 6 + 8);
PUTRGB1(out_1, py_1, 3, 6);
dst_1[0] = out_1;
dst_2[0] = out_2;
CLOSEYUV2RGBFUNC(1)
ff_yuv2rgb_get_func_ptr
fill_table
fill_gv_table
roundToInt16
ff_yuv2rgb_c_init_tables
