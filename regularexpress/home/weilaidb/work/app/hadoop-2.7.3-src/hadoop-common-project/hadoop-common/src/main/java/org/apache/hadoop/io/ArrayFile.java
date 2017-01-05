package org.apache.hadoop.io;
import java.io.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.*;
import org.apache.hadoop.util.*;
import org.apache.hadoop.io.SequenceFile.CompressionType;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ArrayFile extends MapFile
