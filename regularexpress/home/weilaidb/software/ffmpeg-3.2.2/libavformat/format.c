static AVInputFormat *first_iformat = NULL;
static AVOutputFormat *first_oformat = NULL;
static AVInputFormat **last_iformat = &first_iformat;
static AVOutputFormat **last_oformat = &first_oformat;
*av_iformat_next
*av_oformat_next
av_register_input_format
av_register_output_format
av_match_ext
*av_guess_format
av_guess_codec
*av_find_input_format
*av_probe_input_format3
*av_probe_input_format2
*av_probe_input_format
av_probe_input_buffer2
av_probe_input_buffer
