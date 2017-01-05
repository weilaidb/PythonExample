package org.apache.hadoop.service;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.service.LoggingStateChangeListener;
import org.apache.hadoop.service.Service;
import org.apache.hadoop.service.ServiceStateChangeListener;
import org.apache.hadoop.service.ServiceStateException;
import org.junit.Test;
public class TestServiceLifecycle extends ServiceAssert
