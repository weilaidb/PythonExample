vdpau_mpeg_start_frame
vdpau_mpeg_decode_slice
#if CONFIG_MPEG1_VDPAU_HWACCEL
vdpau_mpeg1_init
AVHWAccel ff_mpeg1_vdpau_hwaccel = ;
#if CONFIG_MPEG2_VDPAU_HWACCEL
vdpau_mpeg2_init
AVHWAccel ff_mpeg2_vdpau_hwaccel = ;
