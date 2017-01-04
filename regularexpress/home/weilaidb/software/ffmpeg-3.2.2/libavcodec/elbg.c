#define DELTA_ERR_MAX 0.1
typedef struct cell_s  cell;
typedef struct elbg_data  elbg_data;
static inline int distance_limited(int *a, int *b, int dim, int limit)
static inline void vect_division(int *res, int *vect, int div, int dim)
static int eval_error_cell(elbg_data *elbg, int *centroid, cell *cells)
static int get_closest_codebook(elbg_data *elbg, int index)
static int get_high_utility_cell(elbg_data *elbg)
static int simple_lbg(elbg_data *elbg,
int dim,
int *centroid[3],
int newutility[3],
int *points,
cell *cells)
static void get_new_centroids(elbg_data *elbg, int huc, int *newcentroid_i,
int *newcentroid_p)
static void shift_codebook(elbg_data *elbg, int *indexes,
int *newcentroid[3])
static void evaluate_utility_inc(elbg_data *elbg)
static void update_utility_and_n_cb(elbg_data *elbg, int idx, int newutility)
static void try_shift_candidate(elbg_data *elbg, int idx[3])
static void do_shiftings(elbg_data *elbg)
#define BIG_PRIME 433494437LL
int avpriv_init_elbg(int *points, int dim, int numpoints, int *codebook,
int numCB, int max_steps, int *closest_cb,
AVLFG *rand_state)
int avpriv_do_elbg(int *points, int dim, int numpoints, int *codebook,
int numCB, int max_steps, int *closest_cb,
AVLFG *rand_state)
