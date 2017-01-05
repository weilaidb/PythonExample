package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class MultiFileInputFormat<K, V>
extends FileInputFormat<K, V>
