package org.apache.hadoop.service;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.service.LoggingStateChangeListener;
import org.apache.hadoop.service.Service;
import org.apache.hadoop.service.ServiceStateChangeListener;
import org.junit.After;
import org.junit.Test;
public class TestGlobalStateChangeListener extends ServiceAssert
