package org.apache.hadoop.fs.s3a;
import com.amazonaws.services.s3.AmazonS3Client;
import org.apache.commons.lang.StringUtils;
import com.amazonaws.AmazonClientException;
import org.apache.hadoop.conf.Configuration;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.Timeout;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
public class TestS3AConfiguration
