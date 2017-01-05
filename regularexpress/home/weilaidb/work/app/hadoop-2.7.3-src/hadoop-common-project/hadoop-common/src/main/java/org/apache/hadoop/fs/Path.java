package org.apache.hadoop.fs;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.regex.Pattern;
import org.apache.avro.reflect.Stringable;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@Stringable
@InterfaceAudience.Public
@InterfaceStability.Stable
public class Path implements Comparable
