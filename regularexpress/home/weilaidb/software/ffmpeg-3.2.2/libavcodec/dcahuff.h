#define AVCODEC_DCAHUFF_H
#define DCA_CODE_BOOKS      10
typedef struct DCAVLC  DCAVLC;
extern DCAVLC   ff_dca_vlc_bit_allocation;
extern DCAVLC   ff_dca_vlc_transition_mode;
extern DCAVLC   ff_dca_vlc_scale_factor;
extern DCAVLC   ff_dca_vlc_quant_index[DCA_CODE_BOOKS];
extern VLC  ff_dca_vlc_tnl_grp[5];
extern VLC  ff_dca_vlc_tnl_scf;
extern VLC  ff_dca_vlc_damp;
extern VLC  ff_dca_vlc_dph;
extern VLC  ff_dca_vlc_fst_rsd_amp;
extern VLC  ff_dca_vlc_rsd_apprx;
extern VLC  ff_dca_vlc_rsd_amp;
extern VLC  ff_dca_vlc_avg_g3;
extern VLC  ff_dca_vlc_st_grid;
extern VLC  ff_dca_vlc_grid_2;
extern VLC  ff_dca_vlc_grid_3;
extern VLC  ff_dca_vlc_rsd;
ff_dca_init_vlcs;
