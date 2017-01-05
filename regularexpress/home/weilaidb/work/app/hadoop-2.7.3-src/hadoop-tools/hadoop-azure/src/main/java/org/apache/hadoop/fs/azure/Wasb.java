package org.apache.hadoop.fs.azure;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.DelegateToFileSystem;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class Wasb extends DelegateToFileSystem
