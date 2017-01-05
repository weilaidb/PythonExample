package org.apache.hadoop.hdfs.protocol;
import java.io.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.server.common.GenerationStamp;
import org.apache.hadoop.io.*;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class Block implements Writable, Comparable<Block>
