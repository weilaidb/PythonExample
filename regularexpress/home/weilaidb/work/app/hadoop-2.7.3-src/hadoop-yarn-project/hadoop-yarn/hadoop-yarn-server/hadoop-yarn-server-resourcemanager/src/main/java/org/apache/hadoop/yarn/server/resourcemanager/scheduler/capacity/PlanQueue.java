package org.apache.hadoop.yarn.server.resourcemanager.scheduler.capacity;
import java.io.IOException;
import java.util.Iterator;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.resourcemanager.reservation.ReservationSystem;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.SchedulerDynamicEditException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
public class PlanQueue extends ParentQueue
