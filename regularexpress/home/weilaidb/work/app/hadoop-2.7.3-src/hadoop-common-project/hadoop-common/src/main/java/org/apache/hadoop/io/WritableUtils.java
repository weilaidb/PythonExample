package org.apache.hadoop.io;
import java.io.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.ReflectionUtils;
import java.util.zip.GZIPInputStream;
import java.util.zip.GZIPOutputStream;
@InterfaceAudience.Public
@InterfaceStability.Stable
public final class WritableUtils
