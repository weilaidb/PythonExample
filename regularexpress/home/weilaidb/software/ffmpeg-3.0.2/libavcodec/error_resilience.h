#define AVCODEC_ERROR_RESILIENCE_H
#define VP_START               1
#define ER_AC_ERROR            2
#define ER_DC_ERROR            4
#define ER_MV_ERROR            8
#define ER_AC_END              16
#define ER_DC_END              32
#define ER_MV_END              64
#define ER_MB_ERROR (ER_AC_ERROR|ER_DC_ERROR|ER_MV_ERROR)
#define ER_MB_END   (ER_AC_END|ER_DC_END|ER_MV_END)
typedef struct ERPicture  ERPicture;
typedef struct ERContext  ERContext;
void ff_er_frame_start(ERContext *s);
void ff_er_frame_end(ERContext *s);
void ff_er_add_slice(ERContext *s, int startx, int starty, int endx, int endy,
int status);
