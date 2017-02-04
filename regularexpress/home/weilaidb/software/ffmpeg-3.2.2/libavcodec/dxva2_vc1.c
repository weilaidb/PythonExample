struct dxva2_picture_context ;
fill_picture_parameters
fill_slice
commit_bitstream_and_slice_buffer
dxva2_vc1_start_frame
dxva2_vc1_decode_slice
dxva2_vc1_end_frame
#if CONFIG_WMV3_DXVA2_HWACCEL
AVHWAccel ff_wmv3_dxva2_hwaccel = ;
#if CONFIG_VC1_DXVA2_HWACCEL
AVHWAccel ff_vc1_dxva2_hwaccel = ;
#if CONFIG_WMV3_D3D11VA_HWACCEL
AVHWAccel ff_wmv3_d3d11va_hwaccel = ;
#if CONFIG_VC1_D3D11VA_HWACCEL
AVHWAccel ff_vc1_d3d11va_hwaccel = ;
