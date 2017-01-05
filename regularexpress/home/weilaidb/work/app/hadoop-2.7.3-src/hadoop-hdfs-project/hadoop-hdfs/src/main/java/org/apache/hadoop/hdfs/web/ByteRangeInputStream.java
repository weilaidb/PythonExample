package org.apache.hadoop.hdfs.web;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;
import org.apache.commons.io.input.BoundedInputStream;
import org.apache.hadoop.fs.FSInputStream;
import org.apache.http.HttpStatus;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.net.HttpHeaders;
public abstract class ByteRangeInputStream extends FSInputStream
