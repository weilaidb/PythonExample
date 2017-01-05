package org.apache.hadoop.security;
import static org.junit.Assert.assertTrue;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.log4j.Level;
import org.apache.log4j.Logger;
import org.junit.Test;
public class TestGroupFallback
