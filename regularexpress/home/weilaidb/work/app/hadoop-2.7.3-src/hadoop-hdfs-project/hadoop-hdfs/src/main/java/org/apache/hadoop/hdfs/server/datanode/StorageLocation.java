package org.apache.hadoop.hdfs.server.datanode;
import java.util.regex.Pattern;
import java.io.File;
import java.io.IOException;
import java.net.URI;
import java.util.regex.Matcher;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
public class StorageLocation
