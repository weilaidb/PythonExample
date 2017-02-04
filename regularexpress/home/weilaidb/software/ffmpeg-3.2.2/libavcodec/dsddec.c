decode_init
decode_frame
DSD_DECODER \
AVCodec ff_##name_##_decoder = ;
DSD_DECODER(DSD_LSBF, dsd_lsbf, )
DSD_DECODER(DSD_MSBF, dsd_msbf, )
DSD_DECODER(DSD_MSBF_PLANAR, dsd_msbf_planar, )
DSD_DECODER(DSD_LSBF_PLANAR, dsd_lsbf_planar, )
