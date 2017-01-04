static int dirac_probe(AVProbeData *p)
FF_DEF_RAWVIDEO_DEMUXER(dirac, "raw Dirac", dirac_probe, NULL, AV_CODEC_ID_DIRAC)
