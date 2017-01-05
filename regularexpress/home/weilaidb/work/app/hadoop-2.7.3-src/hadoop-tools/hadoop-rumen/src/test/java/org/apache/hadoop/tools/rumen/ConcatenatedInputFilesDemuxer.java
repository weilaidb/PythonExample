package org.apache.hadoop.tools.rumen;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
public class ConcatenatedInputFilesDemuxer implements InputDemuxer
