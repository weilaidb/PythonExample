package org.apache.hadoop.tools.util;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.PositionedReadable;
import com.google.common.base.Preconditions;
public class ThrottledInputStream extends InputStream
