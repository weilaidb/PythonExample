package org.apache.hadoop.mapreduce.filecache;
import java.io.*;
import java.util.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.*;
import org.apache.hadoop.util.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.JobContext;
import org.apache.hadoop.mapreduce.MRJobConfig;
import java.net.URI;
@Deprecated
@InterfaceAudience.Private
public class DistributedCache
