package com.sleepycat.je.jca.ra;
import java.io.File;
import javax.naming.Reference;
import javax.resource.ResourceException;
import javax.resource.spi.ConnectionManager;
import javax.resource.spi.ManagedConnectionFactory;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.TransactionConfig;
public class JEConnectionFactoryImpl implements JEConnectionFactory
