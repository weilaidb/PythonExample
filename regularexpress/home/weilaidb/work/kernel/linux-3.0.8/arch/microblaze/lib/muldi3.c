#define DWtype long long
#define UWtype unsigned long
#define UHWtype unsigned short
#define W_TYPE_SIZE 32
#define __ll_B ((UWtype) 1 << (W_TYPE_SIZE / 2))
#define __ll_lowpart(t) ((UWtype) (t) & (__ll_B - 1))
#define __ll_highpart(t) ((UWtype) (t) >> (W_TYPE_SIZE / 2))
#if !defined(umul_ppmm)
#define umul_ppmm(w1, w0, u, v)						\
do  while (0)
#if !defined(__umulsidi3)
#define __umulsidi3(u, v) ()
DWtype __muldi3(DWtype u, DWtype v)
EXPORT_SYMBOL(__muldi3);
