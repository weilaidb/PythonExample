package org.apache.hadoop.tools;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.tools.util.DistCpUtils;
import org.apache.hadoop.security.Credentials;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.net.URI;
import java.util.Set;
import com.google.common.collect.Sets;
public abstract class CopyListing extends Configured
