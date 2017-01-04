static inline int auto_gain_n_exposure(
struct gspca_dev *gspca_dev,
int avg_lum,
int desired_avg_lum,
int deadzone,
int gain_knee,
int exposure_knee)
static inline int coarse_grained_expo_autogain(
struct gspca_dev *gspca_dev,
int avg_lum,
int desired_avg_lum,
int deadzone)
