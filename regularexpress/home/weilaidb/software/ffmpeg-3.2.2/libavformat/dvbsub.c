static int dvbsub_probe(AVProbeData *p)
FF_DEF_RAWSUB_DEMUXER(dvbsub, "raw dvbsub", dvbsub_probe, NULL, AV_CODEC_ID_DVB_SUBTITLE, AVFMT_GENERIC_INDEX)
