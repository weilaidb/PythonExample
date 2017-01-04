#define __PVRUSB2_ENCODER_H
struct pvr2_hdw;
int pvr2_encoder_adjust(struct pvr2_hdw *);
int pvr2_encoder_configure(struct pvr2_hdw *);
int pvr2_encoder_start(struct pvr2_hdw *);
int pvr2_encoder_stop(struct pvr2_hdw *);
