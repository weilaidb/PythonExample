package org.apache.hadoop.util;
import java.io.*;
import java.util.Set;
import java.util.HashSet;
import org.apache.commons.io.Charsets;
import org.apache.commons.logging.LogFactory;
import org.apache.commons.logging.Log;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class HostsFileReader
