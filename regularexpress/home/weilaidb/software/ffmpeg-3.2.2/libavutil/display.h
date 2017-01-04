#define AVUTIL_DISPLAY_H
double av_display_rotation_get(const int32_t matrix[9]);
void av_display_rotation_set(int32_t matrix[9], double angle);
void av_display_matrix_flip(int32_t matrix[9], int hflip, int vflip);
