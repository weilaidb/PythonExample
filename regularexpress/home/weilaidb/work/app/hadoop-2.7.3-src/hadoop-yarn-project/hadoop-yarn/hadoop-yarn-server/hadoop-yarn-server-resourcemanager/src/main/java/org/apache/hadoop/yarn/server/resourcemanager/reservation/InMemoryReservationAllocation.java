package org.apache.hadoop.yarn.server.resourcemanager.reservation;
import java.util.Collections;
import java.util.Map;
import org.apache.hadoop.yarn.api.records.ReservationDefinition;
import org.apache.hadoop.yarn.api.records.ReservationId;
import org.apache.hadoop.yarn.api.records.ReservationRequest;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.util.resource.ResourceCalculator;
import org.apache.hadoop.yarn.util.resource.Resources;
class InMemoryReservationAllocation implements ReservationAllocation
