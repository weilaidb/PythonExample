#define AVCODEC_ELBG_H
int avpriv_do_elbg(int *points, int dim, int numpoints, int *codebook,
int numCB, int num_steps, int *closest_cb,
AVLFG *rand_state);
int avpriv_init_elbg(int *points, int dim, int numpoints, int *codebook,
int numCB, int num_steps, int *closest_cb,
AVLFG *rand_state);
