package org.apache.hadoop.fs.local;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.AbstractFileSystem;
import org.apache.hadoop.fs.ChecksumFs;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class LocalFs extends ChecksumFs
