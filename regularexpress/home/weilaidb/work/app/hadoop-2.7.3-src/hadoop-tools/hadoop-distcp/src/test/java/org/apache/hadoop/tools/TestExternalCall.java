package org.apache.hadoop.tools;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.Cluster;
import org.apache.hadoop.mapreduce.JobSubmissionFiles;
import org.apache.hadoop.tools.util.TestDistCpUtils;
import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import java.io.IOException;
import java.io.OutputStream;
import java.security.Permission;
public class TestExternalCall
