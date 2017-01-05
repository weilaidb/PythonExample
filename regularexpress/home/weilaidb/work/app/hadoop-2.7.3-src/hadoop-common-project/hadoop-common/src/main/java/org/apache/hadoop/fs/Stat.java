package org.apache.hadoop.fs;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.StringTokenizer;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.util.Shell;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class Stat extends Shell
