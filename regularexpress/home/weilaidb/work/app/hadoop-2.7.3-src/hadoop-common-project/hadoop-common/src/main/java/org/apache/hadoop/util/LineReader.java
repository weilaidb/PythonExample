package org.apache.hadoop.util;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class LineReader implements Closeable
