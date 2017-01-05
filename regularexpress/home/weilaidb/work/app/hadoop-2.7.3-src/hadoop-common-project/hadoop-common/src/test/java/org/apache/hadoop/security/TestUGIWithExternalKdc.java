package org.apache.hadoop.security;
import java.io.IOException;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import static org.apache.hadoop.security.SecurityUtilTestHelper.isExternalKdcRunning;
import org.apache.hadoop.security.UserGroupInformation.AuthenticationMethod;
import org.junit.Assume;
import org.junit.Before;
import org.junit.Test;
public class TestUGIWithExternalKdc
