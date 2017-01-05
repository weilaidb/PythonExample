package org.apache.hadoop.fs.ftp;
import java.io.IOException;
import java.io.InputStream;
import org.apache.commons.net.ftp.FTPClient;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FSInputStream;
import org.apache.hadoop.fs.FileSystem;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class FTPInputStream extends FSInputStream
