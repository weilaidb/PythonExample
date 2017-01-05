package org.apache.hadoop.registry.server.services;
import org.apache.curator.framework.CuratorFramework;
import org.apache.curator.framework.api.BackgroundCallback;
import org.apache.curator.framework.api.CuratorEvent;
import org.apache.hadoop.registry.server.integration.RMRegistryOperationsService;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.util.concurrent.atomic.AtomicInteger;
public class DeleteCompletionCallback implements BackgroundCallback
