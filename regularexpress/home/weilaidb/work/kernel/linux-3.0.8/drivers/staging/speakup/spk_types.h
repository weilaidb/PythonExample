#define SPEAKUP_TYPES_H
enum var_type_t ;
enum ;
enum var_id_t ;
typedef int (*special_func)(struct vc_data *vc, u_char type, u_char ch,
u_short key);
#define COLOR_BUFFER_SIZE 160
struct spk_highlight_color_track ;
struct st_spk_t ;
#define spk_shut_up (speakup_console[vc->vc_num]->shut_up)
#define spk_killed (speakup_console[vc->vc_num]->shut_up & 0x40)
#define spk_x (speakup_console[vc->vc_num]->reading_x)
#define spk_cx (speakup_console[vc->vc_num]->cursor_x)
#define spk_y (speakup_console[vc->vc_num]->reading_y)
#define spk_cy (speakup_console[vc->vc_num]->cursor_y)
#define spk_pos (speakup_console[vc->vc_num]->reading_pos)
#define spk_cp (speakup_console[vc->vc_num]->cursor_pos)
#define goto_pos (speakup_console[vc->vc_num]->go_pos)
#define goto_x (speakup_console[vc->vc_num]->go_x)
#define win_top (speakup_console[vc->vc_num]->w_top)
#define win_bottom (speakup_console[vc->vc_num]->w_bottom)
#define win_left (speakup_console[vc->vc_num]->w_left)
#define win_right (speakup_console[vc->vc_num]->w_right)
#define win_start (speakup_console[vc->vc_num]->w_start)
#define win_enabled (speakup_console[vc->vc_num]->w_enabled)
#define spk_attr (speakup_console[vc->vc_num]->reading_attr)
#define spk_old_attr (speakup_console[vc->vc_num]->old_attr)
#define spk_parked (speakup_console[vc->vc_num]->parked)
struct st_var_header ;
struct num_var_t ;
struct punc_var_t ;
struct string_var_t ;
struct var_t ;
struct st_bits_data ;
struct synth_indexing ;
struct spk_synth ;
struct speakup_info_t ;
struct bleep ;
