#define _MDP_SCALE_TABLES_H_
struct mdp_table_entry ;
extern struct mdp_table_entry mdp_upscale_table[64];
enum ;
extern struct mdp_table_entry *mdp_downscale_x_table[MDP_DOWNSCALE_MAX];
extern struct mdp_table_entry *mdp_downscale_y_table[MDP_DOWNSCALE_MAX];
extern struct mdp_table_entry mdp_gaussian_blur_table[];
