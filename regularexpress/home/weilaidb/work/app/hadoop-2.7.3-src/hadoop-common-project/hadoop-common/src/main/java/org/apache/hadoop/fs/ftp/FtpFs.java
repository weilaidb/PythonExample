package org.apache.hadoop.fs.ftp;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.commons.net.ftp.FTP;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.AbstractFileSystem;
import org.apache.hadoop.fs.DelegateToFileSystem;
import org.apache.hadoop.fs.FsConstants;
import org.apache.hadoop.fs.FsServerDefaults;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class FtpFs extends DelegateToFileSystem
