package org.apache.hadoop.mapreduce.v2.hs;
import java.lang.InterruptedException;
import java.util.Collection;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.hs.HistoryFileManager.HistoryFileInfo;
import org.apache.hadoop.mapreduce.v2.hs.HistoryFileManager.JobListCache;
import org.apache.hadoop.mapreduce.v2.util.MRBuilderUtils;
import org.junit.Test;
import org.mockito.Mockito;
import static org.junit.Assert.*;
public class TestJobListCache
