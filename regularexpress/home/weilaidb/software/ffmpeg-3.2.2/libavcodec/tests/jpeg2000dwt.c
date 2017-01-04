#define MAX_W 256
static int test_dwt(int *array, int *ref, int border[2][2], int decomp_levels, int type, int max_diff)
static int test_dwtf(float *array, float *ref, int border[2][2], int decomp_levels, float max_diff)
static int array[MAX_W * MAX_W];
static int ref  [MAX_W * MAX_W];
static float arrayf[MAX_W * MAX_W];
static float reff  [MAX_W * MAX_W];
int main(void)
