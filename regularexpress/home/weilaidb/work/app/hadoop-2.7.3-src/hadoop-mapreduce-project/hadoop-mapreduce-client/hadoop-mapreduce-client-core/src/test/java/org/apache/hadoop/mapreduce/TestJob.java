package org.apache.hadoop.mapreduce;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapreduce.JobStatus.State;
import org.apache.hadoop.mapreduce.protocol.ClientProtocol;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.Token;
import org.junit.Assert;
import org.junit.Test;
public class TestJob
