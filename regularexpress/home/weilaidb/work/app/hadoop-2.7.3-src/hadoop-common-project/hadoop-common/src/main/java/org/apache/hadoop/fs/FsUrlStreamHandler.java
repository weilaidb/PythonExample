package org.apache.hadoop.fs;
import java.io.IOException;
import java.net.URL;
import java.net.URLStreamHandler;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class FsUrlStreamHandler extends URLStreamHandler
