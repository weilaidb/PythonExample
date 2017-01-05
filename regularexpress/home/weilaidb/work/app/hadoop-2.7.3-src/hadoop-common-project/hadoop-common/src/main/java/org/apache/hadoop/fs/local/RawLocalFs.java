package org.apache.hadoop.fs.local;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.AbstractFileSystem;
import org.apache.hadoop.fs.DelegateToFileSystem;
import org.apache.hadoop.fs.FsConstants;
import org.apache.hadoop.fs.FsServerDefaults;
import org.apache.hadoop.fs.RawLocalFileSystem;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class RawLocalFs extends DelegateToFileSystem
