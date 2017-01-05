package org.apache.hadoop.yarn.server.resourcemanager.reservation;
import org.apache.hadoop.yarn.api.records.ReservationId;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.resourcemanager.reservation.exceptions.PlanningException;
public interface PlanEdit extends PlanContext, PlanView
